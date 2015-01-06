#ifndef HIKPLAYER_H
#define HIKPLAYER_H
#include <QWidget>
#include "hikplayer_global.h"
#include "MediaContent.h"

class HIKPLAYER_EXPORT HikPlayer
{
public:
	HikPlayer();
	~HikPlayer();

	//media设置与获取
	MediaContent* media() { return m_pMedia; }
	void setMedia(MediaContent* media = NULL);
	//输出控件设置与获取
	QWidget* videoOutput() { return m_pVideoOutput; }
	void setVideoOutput(QWidget* output) { m_pVideoOutput = output; }

	//播放
	void play();
	//停止
	void stop();
	//压入数据
	void inputData(const QByteArray &data);

	//调整色彩空间
	void setColourSpace(int bright = 0, int contrast = 0, int color = 0);

private:
	QWidget* m_pVideoOutput;
	MediaContent* m_pMedia;
};

#endif // HIKPLAYER_H
