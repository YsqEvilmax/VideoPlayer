#ifndef VIDEOGUI_H
#define VIDEOGUI_H

#include "videogui_global.h"
#include "VideoForm.h"

namespace Gui{
	//������Ϣ�ص�������lCommand��Ĭ��Ϊ0������������Ϣ��pAlarmer�����豸��Ϣ;pAlarmInfo������Ϣ;dwBufLen������Ϣ�����С;pUserData�û��Զ���
	typedef int(*AlarmMessageCallBack)(LONG lCommand, FY_DVR_ALARMINFO *pAlarmer, char *pAlarmInfo, DWORD dwBufLen, void* pUserData);

	class VIDEOGUI_EXPORT VideoGui
	{
	public:
		VideoGui();
		~VideoGui();

		//��ʾ����
		void show(){ m_pForm->show(); m_pForm->dispalyWidget()->changeToRealtime(); }
		void show(const VideoConfig &videoConfig){ setVideoConfig(videoConfig); show(); }
		//���ؽ���
		void hide(){ m_pForm->hide(); }

		//��Ƶ�����������ȡ
		VideoConfig videoConfig() const { return m_pForm->dispalyWidget()->videoConfig(); }
		void setVideoConfig(const VideoConfig &videoConfig){ m_pForm->dispalyWidget()->setVideoConfig(videoConfig); }

		//�����ص���������
		void setVideoAlarm(AlarmMessageCallBack alarmMessageCallback, void* pUserData) { m_pForm->dispalyWidget()->setVideoAlarm(alarmMessageCallback, pUserData); };

	private:
		VideoForm *m_pForm;
	};
}

#endif // VIDEOGUI_H
