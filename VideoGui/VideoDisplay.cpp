#include "stdafx.h"
#include "VideoDisplay.h"
#include "ui_VideoDisplay.h"

namespace Gui{
	VideoDisplay::VideoDisplay(QWidget *parent)
		: QWidget(parent)
		, m_VideoConfig()
		, m_HikPlayer()
		, m_RealVideoHandle(0)
		, m_RecordVideoHandle(0)
		, m_VideoAlarmHandle(0)
	{
		ui = new Ui::VideoDisplay();
		ui->setupUi(this);
		QPalette palette;
		palette.setBrush(backgroundRole(), QBrush(QImage(":/Backgroud/Backgroud/ÆÁÄ»³ß´ç.png")));
		setPalette(palette);
		ui->showWidget->setAttribute(Qt::WA_NativeWindow);
		//ui->rightupPushButton->setAttribute(Qt::WA_NativeWindow);
		m_HikPlayer.setVideoOutput(ui->showWidget);
	}

	VideoDisplay::~VideoDisplay()
	{
		stopRealTimeVideo();
		stopRecordVideo();
		delete ui;
	}

	void VideoDisplay::setVideoConfig(const VideoConfig &videoConfig)
	{ 
		m_VideoConfig = videoConfig;
	}

	void VideoDisplay::setVideoAlarm(FYAlarmMessageCallBack alarmMessageCallback, void* pUserData)
	{
		if (alarmMessageCallback)
		{
			m_VideoAlarmHandle = FY_StartAlarmCallBack(m_VideoConfig.toCameraInfo(), alarmMessageCallback, pUserData);
		}
		else
		{
			FY_StopAlarmCallBack(m_VideoAlarmHandle);
			m_VideoAlarmHandle = 0;
		}
	}

	void VideoDisplay::changeToRealtime()
	{
		ui->panelStackedWidget->setCurrentIndex(0);
		ui->controlStackedWidget->setCurrentIndex(0);
		if (m_VideoConfig.m_SurportPTZ == false)
		{
			ui->PTZControllerWidget->hide();
		}
		//playRealTimeVideo();
		playRecordVideo("C:/1001_0.264");
	}

	void VideoDisplay::changeToHistoric()
	{
		ui->panelStackedWidget->setCurrentIndex(1);
		ui->controlStackedWidget->setCurrentIndex(1);
		playRecordVideo();	
	}

	void VideoDisplay::queryRecordVideo()
	{
		QDate date = ui->calendarWidget->selectedDate();
		QTime from = ui->fromTimeEdit->time();
		QTime to = ui->toTimeEdit->time();
		FY_CameraInfo CameraInfo = m_VideoConfig.toCameraInfo();
		CameraInfo.struBeginTime.dwYear = date.year();
		CameraInfo.struBeginTime.dwMonth = date.month();
		CameraInfo.struBeginTime.dwDay = date.day();
		CameraInfo.struBeginTime.dwHour = from.hour();
		CameraInfo.struBeginTime.dwMinute = from.minute();
		CameraInfo.struBeginTime.dwSecond = from.second();
		CameraInfo.struEndTime.dwYear = date.year();
		CameraInfo.struEndTime.dwMonth = date.month();
		CameraInfo.struEndTime.dwDay = date.day();
		CameraInfo.struEndTime.dwHour = to.hour();
		CameraInfo.struEndTime.dwMinute = to.minute();
		CameraInfo.struEndTime.dwSecond = to.second();
		vector<FY_RecordFileInfo> recordFileInfo;
		FY_GetRecordFile(CameraInfo, recordFileInfo);
		ui->resultListWidget->clear();
		for (vector<FY_RecordFileInfo>::iterator it = recordFileInfo.begin(); it != recordFileInfo.end(); it++)
		{
			QListWidgetItem* item = new QListWidgetItem(it->srcfile, ui->resultListWidget);
			item->setData(1, it->lUserID);
			item->setData(2, (long)it->hPlayerWnd);
			item->setData(3, it->srcfile);
			item->setData(4, it->destfile);
			ui->resultListWidget->addItem(item);
		}
	}

	void VideoDisplay::playOrPause()
	{
		
	}

	void VideoDisplay::playRealTimeVideo()
	{
		stopRealTimeVideo();
		stopRecordVideo();
		m_RealVideoHandle = FY_StartRealVideo(m_VideoConfig.toCameraInfo(), VideoDisplay::VideoDataCB, this);
	}

	void VideoDisplay::stopRealTimeVideo()
	{
		if (m_RealVideoHandle > 0)
		{
			hikPlayer().stop();
			hikPlayer().setMedia(NULL);
			FY_StopRealVideo(m_RealVideoHandle);
			m_RealVideoHandle = 0;
		}
	}

	int VideoDisplay::VideoDataCB(FY_VideoBaseInfo VideoBaseInfo, BYTE* pVideoData, DWORD dwVideoDataLen, void* pUserData)
	{
		VideoDisplay* pVideoDisplay = (VideoDisplay*)pUserData;
		switch (VideoBaseInfo.uiDataType)
		{
		case 1://ÏµÍ³
		{
			pVideoDisplay->hikPlayer().setMedia(new MediaContent(pVideoDisplay, 1024 * 1024, (char *)pVideoData, dwVideoDataLen));
			pVideoDisplay->hikPlayer().play();
		}
			break;
		case 2://ÊÓÆµ
		{
			pVideoDisplay->hikPlayer().inputData(QByteArray((const char *)pVideoData, dwVideoDataLen));
		}
			break;
		case 3://ÒôÆµ
		{
			pVideoDisplay->hikPlayer().inputData(QByteArray((const char *)pVideoData, dwVideoDataLen));
		}
			break;
		default:
			break;
		}
		return 0;
	}

	void VideoDisplay::playRecordVideo()
	{
		stopRealTimeVideo();
		stopRecordVideo();
		QListWidgetItem* item = ui->resultListWidget->currentItem();
		playRecordVideo(item);
	}

	void VideoDisplay::playRecordVideo(QListWidgetItem* item)
	{
		if (item)
		{
			FY_RecordFileInfo recordFileInfo;
			recordFileInfo.lUserID = item->data(1).toLongLong();
			recordFileInfo.hPlayerWnd = (HWND)(item->data(2).toLongLong());
			m_RecordVideoHandle = FY_StartRecordVideo(recordFileInfo, VideoDisplay::VideoDataCB, this);
		}
	}

	void VideoDisplay::playRecordVideo(QString path)
	{
		hikPlayer().stop();
		hikPlayer().setMedia(NULL);
		hikPlayer().setMedia(new MediaContent(this, path));
		hikPlayer().play();
	}

	void VideoDisplay::stopRecordVideo()
	{
		if (m_RecordVideoHandle > 0)
		{
			hikPlayer().stop();
			hikPlayer().setMedia(NULL);
			FY_StopRecordVideo(m_RecordVideoHandle);
			m_RecordVideoHandle = 0;
		}
	}

	void VideoDisplay::speedIncrease()
	{
		ui->speedHorizontalSlider->triggerAction(QAbstractSlider::SliderSingleStepAdd);
	}

	void VideoDisplay::speedDecrease()
	{
		ui->speedHorizontalSlider->triggerAction(QAbstractSlider::SliderSingleStepSub);
	}

	void VideoDisplay::brightnessChange(int value)
	{
		m_HikPlayer.setColourSpace(value, ui->contrastHorizontalSlider->value(), ui->saturationHorizontalSlider->value());
	}

	void VideoDisplay::hueChange(int value)
	{
	}

	void VideoDisplay::contrastChange(int value)
	{ 
		m_HikPlayer.setColourSpace(ui->brightnessHorizontalSlider->value(), value, ui->saturationHorizontalSlider->value()); 
	}

	void VideoDisplay::saturationChange(int value)
	{ 
		m_HikPlayer.setColourSpace(ui->brightnessHorizontalSlider->value(), ui->contrastHorizontalSlider->value(), value); 
	}

	void VideoDisplay::returnDefault()
	{ 
		m_HikPlayer.setColourSpace(); 
		ui->brightnessHorizontalSlider->setValue(0);
		ui->hueHorizontalSlider->setValue(0);
		ui->contrastHorizontalSlider->setValue(0);
		ui->saturationHorizontalSlider->setValue(0);
	}
}