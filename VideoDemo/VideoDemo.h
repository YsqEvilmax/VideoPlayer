#ifndef VIDEODEMO_H
#define VIDEODEMO_H
#include "VideoGui\VideoGui.h"
#include <QtWidgets/QMainWindow>
#include "ui_VideoDemo.h"


using namespace Gui;

class VideoDemo : public QMainWindow
{
	Q_OBJECT

public:
	VideoDemo(QWidget *parent = 0);
	~VideoDemo();
	static int AlarmMessageCB(LONG lCommand, FY_DVR_ALARMINFO *pAlarmer, char *pAlarmInfo, DWORD dwBufLen, void* pUserData);
private:
	Ui::VideoDemoClass ui;
	VideoGui gui;

public slots:
	void clickShow();
	void clickHide();
};

#endif // VIDEODEMO_H
