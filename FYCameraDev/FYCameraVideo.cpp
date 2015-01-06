#include "stdafx.h"
#include "FYCameraVideo.h"


//////////////////////////////////////////////////////////////////////////
FYCameraVideo::FYCameraVideo(void)
{
	m_lRealHandle = 0;
	m_videoDataCallback = NULL;
	m_pUserData = NULL;
}


FYCameraVideo::~FYCameraVideo(void)
{
}

void __stdcall FYCameraVideo::RealDataCallBack_V30(LONG lRealHandle, DWORD dwDataType, BYTE *pBuffer,DWORD dwBufSize,void* dwUser)
{


	FYCameraVideo* pThis = (FYCameraVideo*)dwUser;
	if (pThis->m_videoDataCallback == NULL)
	{
		return ;
	}
	FY_VideoBaseInfo struVideoBaseInfo ;
	struVideoBaseInfo.uiCodeFlag = 1;//����˽��
	strcpy_s(struVideoBaseInfo.HostIP,sizeof(struVideoBaseInfo.HostIP),pThis->m_CameraInfo.HostIP);
	struVideoBaseInfo.Channel = pThis->m_CameraInfo.Channel;
	struVideoBaseInfo.CodeMode = pThis->m_CameraInfo.CodeMode;
	//////////////////////////////////////////////////////////////////////////
	switch (dwDataType)
	{
	case NET_DVR_SYSHEAD:		//ϵͳͷ
		{
			struVideoBaseInfo.uiDataType = 1;
			pThis->m_videoDataCallback(struVideoBaseInfo,pBuffer,dwBufSize,pThis->m_pUserData);
		}
		break; 
	case NET_DVR_STREAMDATA:   //��������
		if (dwBufSize > 0 )
		{
			struVideoBaseInfo.uiDataType = 2;
			pThis->m_videoDataCallback(struVideoBaseInfo,pBuffer,dwBufSize,pThis->m_pUserData);
		}
		break; 
	defualt:					//��������
		if (dwBufSize > 0 )
		{
			struVideoBaseInfo.uiDataType = 9;
			pThis->m_videoDataCallback(struVideoBaseInfo,pBuffer,dwBufSize,pThis->m_pUserData);
		}
		break;      
	}
}

LONG FYCameraVideo::StartRealVideo(LONG lUserID, short Channel, int CodeMode, FYVideoDataCallBack videoDataCallback, void* pUserData)
{

	m_videoDataCallback = videoDataCallback;
	m_pUserData = pUserData;
	//////////////////////////////////////////////////////////////////////////
	LONG lRealPlayHandle;
	NET_DVR_PREVIEWINFO struPlayInfo = {0};
	struPlayInfo.hPlayWnd     = NULL;    //��ҪSDK����ʱ�����Ϊ��Чֵ����ȡ��������ʱ����Ϊ��
	struPlayInfo.lChannel     = Channel; //Ԥ��ͨ����
	struPlayInfo.dwStreamType = CodeMode;//0-��������1-��������2-����3��3-����4���Դ�����
	struPlayInfo.dwLinkMode   = 0;       //0- TCP��ʽ��1- UDP��ʽ��2- �ಥ��ʽ��3- RTP��ʽ��4-RTP/RTSP��5-RSTP/HTTP

	lRealPlayHandle = NET_DVR_RealPlay_V40(lUserID, &struPlayInfo, RealDataCallBack_V30, (void*)this);
	if (lRealPlayHandle < 0)
	{
		printf("NET_DVR_RealPlay_V40 error, %d\n", NET_DVR_GetLastError());
		NET_DVR_Logout(lUserID);
		NET_DVR_Cleanup();
		return 0;
	}
	m_lRealHandle = lRealPlayHandle;
	return lRealPlayHandle;
}

int FYCameraVideo::StopRealVideo()
{
	return NET_DVR_StopRealPlay(m_lRealHandle);
}

int FYCameraVideo::PTZControl(int PTZCMD, int iStop)
{
	return NET_DVR_PTZControl(m_lRealHandle,PTZCMD,iStop);
}