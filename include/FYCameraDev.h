#pragma once

#include "FYP.h"
#include "FYCommon.h"


//////////////////////////////////////////////////////////////////////////
//登录设备
FY_API unsigned long FY_CALL Hik_LogInDev(FY_CameraInfo CameraInfo);
//启动预览
FY_API unsigned long FY_CALL Hik_StartRealVideo(unsigned long ulDeviceHandle, short Channel, int CodeMode, FYVideoDataCallBack videoDataCallback, void* pUserData);
//PTZ控制
FY_API int FY_CALL Hik_PTZControl(unsigned long ulDeviceHandle, unsigned long ulRealPlayHandle, int PTZCMD, int iStop);
//停止预览
FY_API int FY_CALL Hik_StopRealVideo(unsigned long ulDeviceHandle, unsigned long ulRealPlayHandle);

//获取状态
FY_API int FY_CALL Hik_GetCameraStatus(unsigned long ulDeviceHandle, FY_DeviceStastus &struDevStatus);
//设置报警回调函数
FY_API long FY_CALL Hik_StartAlarmCallBack(unsigned long ulDeviceHandle, FYAlarmMessageCallBack alarmMessageCallback, void* pUserData);
//停止侦听报警
FY_API int FY_CALL Hik_StopAlarmCallBack(unsigned long ulDeviceHandle, long ulAlarmHandle);

//启动回放
FY_API unsigned long FY_CALL Hik_StartRecordVideo(unsigned long ulDeviceHandle, FY_VideoBaseInfo &VideoInfo, char* BeginTimeStamp, FYVideoDataCallBack videoDataCallback, void* pUserData);
//停止回放
FY_API int FY_CALL Hik_StopRecordVideo(unsigned long ulRecordPlayHandle);
//登出设备
FY_API int FY_CALL Hik_LogOutDev(unsigned long ulDeviceHandle);
