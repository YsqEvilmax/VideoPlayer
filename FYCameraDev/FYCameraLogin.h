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

	//登录设备
	LONG LogInDev(FY_CameraInfo CameraInfo);
	//启动预览
	unsigned long StartRealVideo(short Channel, int CodeMode, FYVideoDataCallBack videoDataCallback, void* pUserData);
	//停止预览
	int StopRealVideo(unsigned long ulRealPlayHandle);
	//PTZ控制
	int PTZControl(unsigned long ulRealPlayHandle, int PTZCMD, int iStop);
	//登出设备
	int LogOutDev();

	//获取状态
	int GetCameraStatus(FY_DeviceStastus &struDevStatus);
	//设置报警回调函数
	long StartAlarmCallBack(FYAlarmMessageCallBack alarmMessageCallback, void* pUserData);
	//
	int StopAlarmCallBack(long ulAlarmHandle);

protected:
	static void __stdcall AlarmMessageCallBack_V30(LONG lCommand, NET_DVR_ALARMER *pAlarmer, char *pAlarmInfo, DWORD dwBufLen, void* pUserData);

private:
	LONG m_lUserID;
	FY_CameraInfo m_CameraInfo;

};

