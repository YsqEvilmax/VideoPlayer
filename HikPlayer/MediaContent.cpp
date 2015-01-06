#include "stdafx.h"
#include "MediaContent.h"

MediaContent::MediaContent(QObject *parent, int bufPoolSize, char* headBuf, int size)
	: QObject(parent)
	, m_lPort(-1)
	, m_iStreamMode(STREAME_REALTIME)
	, m_uiBufPoolSize(bufPoolSize)
	, m_HikHead(headBuf, size)
{
	init();
}

MediaContent::MediaContent(QObject *parent, QString filePath)
	: QObject(parent)
	, m_lPort(-1)
	, m_iStreamMode(STREAME_FILE)
	, m_filePath(filePath)
{
	init();
}

MediaContent::~MediaContent()
{
	uninit();
}

void MediaContent::init()
{
		bool bRet = false;
		bRet = PlayM4_GetPort(&m_lPort);
		if (!bRet)
		{
			m_lPort = -1;
		}
		if (m_iStreamMode == STREAME_FILE)
		{
			bRet = PlayM4_OpenFile(m_lPort, (char *)(m_filePath.toStdString().c_str()));
			if (!bRet)
			{
				m_lPort = -1;
			}
		}
		else if (m_iStreamMode == STREAME_REALTIME)
		{
			//������ģʽ���� 
			bRet = PlayM4_SetStreamOpenMode(m_lPort, m_iStreamMode);
			if (!bRet)
			{
				m_lPort = -1;
			}
			//����ģʽ
			bRet = PlayM4_OpenStream(m_lPort, (PBYTE)(m_HikHead.data()), m_HikHead.size(), m_uiBufPoolSize);
			if (!bRet)
			{
				m_lPort = -1;
			}
		}
}

void MediaContent::uninit()
{
	if (m_lPort >= 0)
	{
		//�ر���������Դ���ݻ���
		if (m_iStreamMode == STREAME_FILE)
		{
			//�ر��ļ�
			PlayM4_CloseFile(m_lPort);

		}
		else if (m_iStreamMode == STREAME_REALTIME)
		{
			PlayM4_CloseStream(m_lPort);
		}
		//�ͷŲ��ſ�˿ں�
		PlayM4_FreePort(m_lPort);
		m_lPort = -1;
	}
}