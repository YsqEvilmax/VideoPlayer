#ifndef VIDEODISPLAY_H
#define VIDEODISPLAY_H

#include <QWidget>
#include <QListWidget>
#include "HikPlayer/HikPlayer.h"
#include "VideoConfig.h"
#include "FYCameraMgr.h"

namespace Ui {class VideoDisplay;};

namespace Gui{
	class VideoDisplay : public QWidget
	{
		Q_OBJECT

	public:
		VideoDisplay(QWidget *parent = 0);
		~VideoDisplay();

		//视频配置设置与获取
		VideoConfig videoConfig() const { return m_VideoConfig; }
		void setVideoConfig(const VideoConfig &videoConfig);
		//报警回调函数设置
		void setVideoAlarm(FYAlarmMessageCallBack alarmMessageCallback, void* pUserData);
		//获取海康播放器
		HikPlayer& hikPlayer(){ return m_HikPlayer; }

		//播放实时视频
		void playRealTimeVideo();
		//停止实时视频
		void stopRealTimeVideo();
		static int VideoDataCB(FY_VideoBaseInfo VideoBaseInfo, BYTE* pVideoData, DWORD dwVideoDataLen, void* pUserData);

		void playRecordVideo();
		void playRecordVideo(QString path);
		void stopRecordVideo();
	private:
		Ui::VideoDisplay *ui;
		//VideoPlayer m_VideoPlayer;
		//AVPlayer m_AVPlayer;
		HikPlayer m_HikPlayer;
		VideoConfig m_VideoConfig;
		unsigned long m_RealVideoHandle;
		unsigned long m_RecordVideoHandle;
		unsigned long m_VideoAlarmHandle;
	public slots:
		void changeToRealtime();
		void changeToHistoric();
		void queryRecordVideo();
		void playRecordVideo(QListWidgetItem* item);

		//云台控制相关
		void leftBegin(){ FY_PTZControl(m_RealVideoHandle, PAN_LEFT, 0); };
		void leftupBegin(){ FY_PTZControl(m_RealVideoHandle, UP_LEFT, 0); };
		void leftdownBegin(){ FY_PTZControl(m_RealVideoHandle, DOWN_LEFT, 0); };
		void rightBegin(){ FY_PTZControl(m_RealVideoHandle, PAN_RIGHT, 0); };
		void rightupBegin(){ FY_PTZControl(m_RealVideoHandle, UP_RIGHT, 0); };
		void rightdownBegin(){ FY_PTZControl(m_RealVideoHandle, DOWN_RIGHT, 0); };
		void upBegin(){ FY_PTZControl(m_RealVideoHandle, TILT_UP, 0); };
		void downBegin(){ FY_PTZControl(m_RealVideoHandle, TILT_DOWN, 0); };

		void leftEnd(){ FY_PTZControl(m_RealVideoHandle, PAN_LEFT, 1); };
		void leftupEnd(){ FY_PTZControl(m_RealVideoHandle, UP_LEFT, 1); };
		void leftdownEnd(){ FY_PTZControl(m_RealVideoHandle, DOWN_LEFT, 1); };
		void rightEnd(){ FY_PTZControl(m_RealVideoHandle, PAN_RIGHT, 1); };
		void rightupEnd(){ FY_PTZControl(m_RealVideoHandle, UP_RIGHT, 1); };
		void rightdownEnd(){ FY_PTZControl(m_RealVideoHandle, DOWN_RIGHT, 1); };
		void upEnd(){ FY_PTZControl(m_RealVideoHandle, TILT_UP, 1); };
		void downEnd(){ FY_PTZControl(m_RealVideoHandle, TILT_DOWN, 1); };

		void zoomInBegin(){ FY_PTZControl(m_RealVideoHandle, ZOOM_IN, 0); };
		void zoomOutBegin(){ FY_PTZControl(m_RealVideoHandle, ZOOM_OUT, 0); };
		void focusNearBegin(){ FY_PTZControl(m_RealVideoHandle, FOCUS_NEAR, 0); };
		void focusFarBegin(){ FY_PTZControl(m_RealVideoHandle, FOCUS_FAR, 0); };
		void irisOpenBegin(){ FY_PTZControl(m_RealVideoHandle, IRIS_OPEN, 0); };
		void irisCloseBegin(){ FY_PTZControl(m_RealVideoHandle, IRIS_CLOSE, 0); };

		void zoomInEnd(){ FY_PTZControl(m_RealVideoHandle, ZOOM_IN, 1); };
		void zoomOutEnd(){ FY_PTZControl(m_RealVideoHandle, ZOOM_OUT, 1); };
		void focusNearEnd(){ FY_PTZControl(m_RealVideoHandle, FOCUS_NEAR, 1); };
		void focusFarEnd(){ FY_PTZControl(m_RealVideoHandle, FOCUS_FAR, 1); };
		void irisOpenEnd(){ FY_PTZControl(m_RealVideoHandle, IRIS_OPEN, 1); };
		void irisCloseEnd(){ FY_PTZControl(m_RealVideoHandle, IRIS_CLOSE, 1); };

		void speedChange(int speed){};
		void speedIncrease();
		void speedDecrease();

		//色彩空间控制相关
		void brightnessChange(int value);
		void hueChange(int value);
		void contrastChange(int value);
		void saturationChange(int value);
		void returnDefault();

		//播放控制面板相关
		void playOrPause();
		void stop(){};
		void next(){};
		void last(){};
		void fast(){};
		void slow(){};
	};
}


#endif // VIDEODISPLAY_H
