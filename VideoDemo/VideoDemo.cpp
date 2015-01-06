#include "VideoDemo.h"

VideoDemo::VideoDemo(QWidget *parent)
	: QMainWindow(parent)
	, gui()
{
	ui.setupUi(this);
}

VideoDemo::~VideoDemo()
{

}

void VideoDemo::clickShow()
{
	VideoConfig cfg("192.168.1.1", 8000, "admin", "12345", 1, true);
	//Gui::VideoConfig cfg;
	//cfg.m_Channel = 1;
	//cfg.m_HostIP = "192.168.1.1";
	//cfg.m_HostPort = 8000;
	//cfg.m_UserName = "admin";
	//cfg.m_Password = "12345";
	//cfg.m_SurportPTZ = true;

	gui.setVideoAlarm(VideoDemo::AlarmMessageCB, NULL);
	gui.show(cfg);
	//gui.setVideoConfig(cfg);
	//gui.show();
}

void VideoDemo::clickHide()
{
	gui.hide();
}

int VideoDemo::AlarmMessageCB(LONG lCommand, FY_DVR_ALARMINFO *pAlarmer, char *pAlarmInfo, DWORD dwBufLen, void* pUserData)
{
	//处理报警信息
	return 0;
}