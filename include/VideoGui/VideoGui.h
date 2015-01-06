#ifndef VIDEOGUI_H
#define VIDEOGUI_H

#include "videogui_global.h"
#include "VideoForm.h"

namespace Gui{
	//报警消息回调函数；lCommand：默认为0，基本报警信息；pAlarmer报警设备信息;pAlarmInfo报警信息;dwBufLen报警信息缓存大小;pUserData用户自定义
	typedef int(*AlarmMessageCallBack)(LONG lCommand, FY_DVR_ALARMINFO *pAlarmer, char *pAlarmInfo, DWORD dwBufLen, void* pUserData);

	class VIDEOGUI_EXPORT VideoGui
	{
	public:
		VideoGui();
		~VideoGui();

		//显示界面
		void show(){ m_pForm->show(); m_pForm->dispalyWidget()->changeToRealtime(); }
		void show(const VideoConfig &videoConfig){ setVideoConfig(videoConfig); show(); }
		//隐藏界面
		void hide(){ m_pForm->hide(); }

		//视频配置设置与获取
		VideoConfig videoConfig() const { return m_pForm->dispalyWidget()->videoConfig(); }
		void setVideoConfig(const VideoConfig &videoConfig){ m_pForm->dispalyWidget()->setVideoConfig(videoConfig); }

		//报警回调函数设置
		void setVideoAlarm(AlarmMessageCallBack alarmMessageCallback, void* pUserData) { m_pForm->dispalyWidget()->setVideoAlarm(alarmMessageCallback, pUserData); };

	private:
		VideoForm *m_pForm;
	};
}

#endif // VIDEOGUI_H
