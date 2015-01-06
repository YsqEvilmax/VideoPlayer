#pragma once

#include "FYP.h"
#include "FYCommon.h"

#include "FYHikCamera.h"
//////////////////////////////////////////////////////////////////////////
class FYHikCameraMgr
{
public:
	FYHikCameraMgr(void);
	~FYHikCameraMgr(void);

	//启动预览
	unsigned long StartRealVideo(FY_CameraInfo CameraInfo, FYVideoDataCallBack videoDataCallback, void* pUserData);
	//PTZ控制
	int PTZControl(unsigned long hRealVideoHandle, int PTZCMD, int iStop);
	//停止预览
	int StopRealVideo(unsigned long hRealVideoHandle);
	//获取视频状态
	int GetCameraStatus(FY_CameraInfo CameraInfo, FY_DeviceStastus &struDevStatus);
	//设置报警回调函数
	unsigned long StartAlarmCallBack(FY_CameraInfo CameraInfo, FYAlarmMessageCallBack alarmMessageCallback, void* pUserData);
	//停止预览
	int StopAlarmCallBack(unsigned long hAlarmHandle);

	//启动回放
	unsigned long StartRecordVideo(unsigned long CameraID, char* BeginTimeStamp, FYVideoDataCallBack videoDataCallback, void* pUserData);
	//停止回放
	int StopRecordVideo(unsigned long CameraID, char* BeginTimeStamp);
	//卸载相机
	int UnLoadCamera(unsigned long CameraID);

protected:
	int StartCheckLogin(FY_CameraInfo &CameraInfo);
	int StopCheckLogin(FY_CameraInfo &CameraInfo);

private:
	//登录设备列表
	map<string,FY_CameraInfo> m_mapCameraLoginInfo;
	//
	CRITICAL_SECTION m_HikCameraCS;
};

