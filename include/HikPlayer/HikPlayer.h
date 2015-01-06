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

	//media�������ȡ
	MediaContent* media() { return m_pMedia; }
	void setMedia(MediaContent* media = NULL);
	//����ؼ��������ȡ
	QWidget* videoOutput() { return m_pVideoOutput; }
	void setVideoOutput(QWidget* output) { m_pVideoOutput = output; }

	//����
	void play();
	//ֹͣ
	void stop();
	//ѹ������
	void inputData(const QByteArray &data);

	//����ɫ�ʿռ�
	void setColourSpace(int bright = 0, int contrast = 0, int color = 0);

private:
	QWidget* m_pVideoOutput;
	MediaContent* m_pMedia;
};

#endif // HIKPLAYER_H
