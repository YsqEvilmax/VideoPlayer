#include "stdafx.h"
#include "FYHikCameraMgr.h"

#include "FYCameraDev.h"
#pragma comment(lib,"FYCameraDev.lib")
//////////////////////////////////////////////////////////////////////////
FYHikCameraMgr::FYHikCameraMgr(void)
{
	InitializeCriticalSection(&m_HikCameraCS);
}


FYHikCameraMgr::~FYHikCameraMgr(void)
{
	DeleteCriticalSection(&m_HikCameraCS);
}

int FYHikCameraMgr::StartCheckLogin(FY_CameraInfo &CameraInfo)
{
	EnterCriticalSection(&m_HikCameraCS);
	try
	{
		map<string,FY_CameraInfo>::iterator findLoginIter = m_mapCameraLoginInfo.find(CameraInfo.HostIP);
		if(findLoginIter != m_mapCameraLoginInfo.end())
		{
			//已经登录了则进行校验；
			FY_CameraInfo &tmpCameraInfo = findLoginIter->second;
			/*if (tmpCameraInfo.ulDeviceHandle == 0)
			{
				tmpCameraInfo.ulDeviceHandle = Hik_LogInDev(CameraInfo);
			}*/
			tmpCameraInfo.iLoginRef++;
		}
		else
		{
			//如果没有登录则需要登录并且添加到列表中；
			CameraInfo.ulDeviceHandle = Hik_LogInDev(CameraInfo);
			CameraInfo.iLoginRef++;
			m_mapCameraLoginInfo.insert(pair<string,FY_CameraInfo>(CameraInfo.HostIP,CameraInfo));
		}	
		LeaveCriticalSection(&m_HikCameraCS);
		return 0;
	}
	catch (...)
	{
	}
	LeaveCriticalSection(&m_HikCameraCS);
	return -1;
}
int FYHikCameraMgr::StopCheckLogin(FY_CameraInfo &CameraInfo)
{
	EnterCriticalSection(&m_HikCameraCS);
	try
	{
		map<string,FY_CameraInfo>::iterator findLoginIter = m_mapCameraLoginInfo.find(CameraInfo.HostIP);
		if(findLoginIter != m_mapCameraLoginInfo.end())
		{
			//已经登录了则进行校验；
			FY_CameraInfo &tmpCameraInfo = findLoginIter->second;			
			tmpCameraInfo.iLoginRef--;
			if (tmpCameraInfo.iLoginRef <= 0 )
			{
				Hik_LogOutDev(tmpCameraInfo.ulDeviceHandle);
			}
			LeaveCriticalSection(&m_HikCameraCS);
			return 0;
		}
	}
	catch (...)
	{
	}
	LeaveCriticalSection(&m_HikCameraCS);
	return -1;
}
//启动预览
 unsigned long FYHikCameraMgr::StartRealVideo(FY_CameraInfo CameraInfo, FYVideoDataCallBack videoDataCallback, void* pUserData)
 {
	 //EnterCriticalSection(&m_HikCameraCS);

	 StartCheckLogin(CameraInfo);

	 try
	 {
		 //查找相应的相机数据并且进行视频操作
		 FYHikCamera* pFYHikCamera = new FYHikCamera;
		 pFYHikCamera->SetCameraInfo(CameraInfo);
		 pFYHikCamera->StartRealVideo(videoDataCallback,pUserData);
		// LeaveCriticalSection(&m_HikCameraCS);
		 return (unsigned long)pFYHikCamera;
	 }
	 catch (...)
	 {	 	
	 }
	 //LeaveCriticalSection(&m_HikCameraCS);
	 return 0;
 }
//PTZ控制
int FYHikCameraMgr::PTZControl(unsigned long hRealVideoHandle, int PTZCMD, int iStop)
{
	//EnterCriticalSection(&m_HikCameraCS);
	try
	{
		FYHikCamera* pFYHikCamera = (FYHikCamera*)hRealVideoHandle;
		if (pFYHikCamera != NULL)
		{
			pFYHikCamera->PTZControl(PTZCMD,iStop);
			//LeaveCriticalSection(&m_HikCameraCS);
			return 0;
		}		 
	}
	catch (...)
	{		
	}	
	//LeaveCriticalSection(&m_HikCameraCS);
	return -1;
}
//停止预览
int FYHikCameraMgr::StopRealVideo(unsigned long hRealVideoHandle)
{
	//EnterCriticalSection(&m_HikCameraCS);
	try
	{
		FY_CameraInfo CameraInfo;
		FYHikCamera* pFYHikCamera = (FYHikCamera*)hRealVideoHandle;
		if (pFYHikCamera != NULL)
		{
			pFYHikCamera->GetCameraInfo(CameraInfo);
			pFYHikCamera->StopRealVideo();
			delete pFYHikCamera;
			pFYHikCamera = NULL;			
		}
		StopCheckLogin(CameraInfo);
		//LeaveCriticalSection(&m_HikCameraCS);
		return 0;
	}
	catch (...)
	{		
	}	
	//LeaveCriticalSection(&m_HikCameraCS);
	return -1;
}

int FYHikCameraMgr::GetCameraStatus(FY_CameraInfo CameraInfo, FY_DeviceStastus &struDevStatus)
{
	//EnterCriticalSection(&m_HikCameraCS);
	StartCheckLogin(CameraInfo);
	//获取状态
	Hik_GetCameraStatus(CameraInfo.ulDeviceHandle,struDevStatus);

	StopCheckLogin(CameraInfo);
	//LeaveCriticalSection(&m_HikCameraCS);
	return 0;
}

unsigned long FYHikCameraMgr::StartAlarmCallBack(FY_CameraInfo CameraInfo, FYAlarmMessageCallBack alarmMessageCallback, void* pUserData)
{
	//获取状态
	return Hik_StartAlarmCallBack(0,alarmMessageCallback,pUserData);
}
//停止预览
int FYHikCameraMgr::StopAlarmCallBack(unsigned long hAlarmHandle)
{
	return Hik_StopAlarmCallBack(0,hAlarmHandle);
}
//启动回放
unsigned long FYHikCameraMgr::StartRecordVideo(unsigned long CameraID, char* BeginTimeStamp, FYVideoDataCallBack videoDataCallback, void* pUserData)
{
	return 0;
}
//停止回放
int FYHikCameraMgr::StopRecordVideo(unsigned long CameraID, char* BeginTimeStamp)
{
	return 0;
}
