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
	//从海康头创建media
	MediaContent(QObject *parent, int bufPoolSize = 1024 * 1024, char* headBuf = NULL, int size = -1);
	//从文件创建media
	MediaContent(QObject *parent, QString filePath);
	~MediaContent();

	bool valid() { return m_lPort < 0 ? false : true; }
	long port() { return m_lPort; }

	//流模式设置与获取，STREAME_REALTIME和STREAME_FILE
	int streamMode() const { return m_iStreamMode; }
	void setStreamMode(const int &mode) { m_iStreamMode = mode; }

	//缓冲池大小设置与获取
	unsigned int bufPoolSize() const { return m_uiBufPoolSize; }
	void setBufPoolSize(const unsigned int &bufPoolSize) { m_uiBufPoolSize = bufPoolSize; }

	//海康头设置与获取
	QByteArray hikHead() const { return m_HikHead; }
	void setHikHead(char* buf, int size) { m_HikHead = QByteArray(buf, size); }

	//文件路径设置与获取
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
