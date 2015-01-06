#ifndef MEDIACONTENT_H
#define MEDIACONTENT_H

#include <QObject>
#include "hikplayer_global.h"
extern "C"
{
#if defined( _WINDLL)
#include <qt_windows.h>
#endif
#include "Hik\PlayM4.h"
}

class HIKPLAYER_EXPORT MediaContent : public QObject
{
	Q_OBJECT

public:
	//�Ӻ���ͷ����media
	MediaContent(QObject *parent, int bufPoolSize = 1024 * 1024, char* headBuf = NULL, int size = -1);
	//���ļ�����media
	MediaContent(QObject *parent, QString filePath);
	~MediaContent();

	bool valid() { return m_lPort < 0 ? false : true; }
	long port() { return m_lPort; }

	//��ģʽ�������ȡ��STREAME_REALTIME��STREAME_FILE
	int streamMode() const { return m_iStreamMode; }
	void setStreamMode(const int &mode) { m_iStreamMode = mode; }

	//����ش�С�������ȡ
	unsigned int bufPoolSize() const { return m_uiBufPoolSize; }
	void setBufPoolSize(const unsigned int &bufPoolSize) { m_uiBufPoolSize = bufPoolSize; }

	//����ͷ�������ȡ
	QByteArray hikHead() const { return m_HikHead; }
	void setHikHead(char* buf, int size) { m_HikHead = QByteArray(buf, size); }

	//�ļ�·���������ȡ
	QString filePath() const { return m_filePath; }
	void setFilePath(const QString &filePath) { m_filePath = filePath; }
private:
	void init();
	void uninit();
	long  m_lPort;
	int m_iStreamMode;
	unsigned int m_uiBufPoolSize;
	QByteArray m_HikHead;
	QString m_filePath; 
};

#endif // MEDIACONTENT_H
