#pragma once


#include "FYP.h"
#include "FYCommon.h"
//////////////////////////////////////////////////////////////////////////
class FYHikCamera
{
public:
	FYHikCamera(void);
	~FYHikCamera(void);

	//设置登录设备信息
	void SetCameraInfo(FY_CameraInfo &CameraInfo)
	{
		m_CameraInfo = CameraInfo;
		m_ulLoginHandle = CameraInfo.ulDeviceHandle;
	};
	void GetCameraInfo(FY_CameraInfo &CameraInfo)
	{
		CameraInfo = m_CameraInfo;
	};
	//获取登录设备信息
	/*void GetDeviceIP(string &CameraIP)
	{
		CameraIP = m_CameraInfo.HostIP;
	};*/

	//启动预览
	int StartRealVideo(FYVideoDataCallBack videoDataCallback, void* pUserData);
	//PTZ控制
	int PTZControl(int PTZCMD, int iStop);
	//停止预览
	int StopRealVideo();

private:
	unsigned long m_ulLoginHandle;		//设备句柄
	unsigned long m_ulPlayHandle;	//视频句柄
	FY_CameraInfo m_CameraInfo;
};

