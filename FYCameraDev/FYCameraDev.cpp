// FYCameraDev.cpp : 定义 DLL 应用程序的导出函数。
//

#include "stdafx.h"

#include "FYCameraDev.h"
#include "FYCameraLogin.h"

//////////////////////////////////////////////////////////////////////////
//登录设备
FY_API unsigned long FY_CALL Hik_LogInDev(FY_CameraInfo CameraInfo)
{
	FYCameraLogin* pCameraLogin = new FYCameraLogin;
	if (pCameraLogin == NULL)
	{
		return 0;
	}
	pCameraLogin->LogInDev(CameraInfo);
	return (unsigned long)pCameraLogin;
}
//启动预览
FY_API unsigned long FY_CALL Hik_StartRealVideo(unsigned long ulDeviceHandle, short Channel, int CodeMode, FYVideoDataCallBack videoDataCallback, void* pUserData)
{
	FYCameraLogin* pCameraLogin = (FYCameraLogin*)ulDeviceHandle;
	if (pCameraLogin == NULL)
	{
		return 0;
	}
	return pCameraLogin->StartRealVideo(Channel,CodeMode,videoDataCallback,pUserData);
}
//PTZ控制
FY_API int FY_CALL Hik_PTZControl(unsigned long ulDeviceHandle, unsigned long ulRealPlayHandle, int PTZCMD, int iStop)
{
	FYCameraLogin* pCameraLogin = (FYCameraLogin*)ulDeviceHandle;
	if (pCameraLogin == NULL)
	{
		return 0;
	}
	return pCameraLogin->PTZControl(ulRealPlayHandle,PTZCMD,iStop);
}
//停止预览
FY_API int FY_CALL Hik_StopRealVideo(unsigned long ulDeviceHandle, unsigned long ulRealPlayHandle)
{
	FYCameraLogin* pCameraLogin = (FYCameraLogin*)ulDeviceHandle;
	if (pCameraLogin == NULL)
	{
		return 0;
	}
	return pCameraLogin->StopRealVideo(ulRealPlayHandle);
}

//获取状态
FY_API int FY_CALL Hik_GetCameraStatus(unsigned long ulDeviceHandle, FY_DeviceStastus &struDevStatus)
{
	FYCameraLogin* pCameraLogin = (FYCameraLogin*)ulDeviceHandle;
	if (pCameraLogin == NULL)
	{
		return 0;
	}
	return pCameraLogin->GetCameraStatus(struDevStatus);
}
//设置报警回调函数
FY_API long FY_CALL Hik_StartAlarmCallBack(unsigned long ulDeviceHandle, FYAlarmMessageCallBack alarmMessageCallback, void* pUserData)
{
	FYCameraLogin* pCameraLogin = (FYCameraLogin*)ulDeviceHandle;
	if (pCameraLogin == NULL)
	{
		return 0;
	}
	return pCameraLogin->StartAlarmCallBack(alarmMessageCallback,pUserData);
}
FY_API int FY_CALL Hik_StopAlarmCallBack(unsigned long ulDeviceHandle, long ulAlarmHandle)
{
	FYCameraLogin* pCameraLogin = (FYCameraLogin*)ulDeviceHandle;
	if (pCameraLogin == NULL)
	{
		return 0;
	}
	return pCameraLogin->StopAlarmCallBack(ulAlarmHandle);
}
//启动回放
FY_API unsigned long FY_CALL Hik_StartRecordVideo(unsigned long ulDeviceHandle, FY_VideoBaseInfo &VideoInfo, char* BeginTimeStamp, FYVideoDataCallBack videoDataCallback, void* pUserData)
{
	return 0;
}
//停止回放
FY_API int FY_CALL Hik_StopRecordVideo(unsigned long ulRecordPlayHandle)
{
	return 0;
}
//登出设备
FY_API int FY_CALL Hik_LogOutDev(unsigned long ulDeviceHandle)
{
	FYCameraLogin* pCameraLogin = (FYCameraLogin*)ulDeviceHandle;
	if (pCameraLogin == NULL)
	{
		return 0;
	}
	return pCameraLogin->LogOutDev();
}
