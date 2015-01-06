#pragma once

#include "FYP.h"
#include "FYCommon.h"
#include "HCNetSDK.h"


//////////////////////////////////////////////////////////////////////////
class FYCameraLogin
{
public:
	FYCameraLogin(void);
	~FYCameraLogin(void);

	//��¼�豸
	LONG LogInDev(FY_CameraInfo CameraInfo);
	//����Ԥ��
	unsigned long StartRealVideo(short Channel, int CodeMode, FYVideoDataCallBack videoDataCallback, void* pUserData);
	//ֹͣԤ��
	int StopRealVideo(unsigned long ulRealPlayHandle);
	//PTZ����
	int PTZControl(unsigned long ulRealPlayHandle, int PTZCMD, int iStop);
	//�ǳ��豸
	int LogOutDev();

	//��ȡ״̬
	int GetCameraStatus(FY_DeviceStastus &struDevStatus);
	//���ñ����ص�����
	long StartAlarmCallBack(FYAlarmMessageCallBack alarmMessageCallback, void* pUserData);
	//
	int StopAlarmCallBack(long ulAlarmHandle);

protected:
	static void __stdcall AlarmMessageCallBack_V30(LONG lCommand, NET_DVR_ALARMER *pAlarmer, char *pAlarmInfo, DWORD dwBufLen, void* pUserData);

private:
	LONG m_lUserID;
	FY_CameraInfo m_CameraInfo;

};

