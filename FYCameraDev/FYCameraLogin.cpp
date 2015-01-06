#include "stdafx.h"
#include "FYCameraLogin.h"
#include "FYCameraVideo.h"

#pragma comment(lib,"HCNetSDK.lib")

FYCameraLogin::FYCameraLogin(void)
{
	// 初始化
	NET_DVR_Init();
	//设置连接时间与重连时间
	NET_DVR_SetConnectTime(2000, 1);
	NET_DVR_SetReconnect(10000, true);

}

FYCameraLogin::~FYCameraLogin(void)
{
	NET_DVR_Cleanup();
}

LONG FYCameraLogin::LogInDev(FY_CameraInfo CameraInfo)
{
	//---------------------------------------
	// 注册设备
	LONG lUserID;
	NET_DVR_DEVICEINFO_V30 struDeviceInfo;
	lUserID = NET_DVR_Login_V30(CameraInfo.HostIP, CameraInfo.HostPort, CameraInfo.UserName, CameraInfo.Password, &struDeviceInfo);
	if (lUserID < 0)
	{
		printf("Login error, %d\n", NET_DVR_GetLastError());
		NET_DVR_Cleanup();
		return 0;
	}
	m_lUserID = lUserID;
	m_CameraInfo = CameraInfo;
	return lUserID;
}

unsigned long FYCameraLogin::StartRealVideo(short Channel, int CodeMode, FYVideoDataCallBack videoDataCallback, void* pUserData)
{
	FYCameraVideo* pCameraVideo = new FYCameraVideo; 
	if (pCameraVideo == NULL)
	{
		return 0;
	}
	pCameraVideo->SetCameraInfo(m_CameraInfo);
	pCameraVideo->StartRealVideo(m_lUserID,Channel,CodeMode,videoDataCallback,pUserData);
	return (unsigned long)pCameraVideo;
}

int FYCameraLogin::StopRealVideo(unsigned long ulRealPlayHandle)
{
	FYCameraVideo* pCameraVideo = (FYCameraVideo*)ulRealPlayHandle;
	if (pCameraVideo == NULL)
	{
		return -1;
	}
	return pCameraVideo->StopRealVideo();
}

int FYCameraLogin::PTZControl(unsigned long ulRealPlayHandle, int PTZCMD, int iStop)
{
	FYCameraVideo* pCameraVideo = (FYCameraVideo*)ulRealPlayHandle;
	if (pCameraVideo == NULL)
	{
		return -1;
	}
	return pCameraVideo->PTZControl(PTZCMD,iStop);
}

int FYCameraLogin::LogOutDev()
{
	return NET_DVR_Logout(m_lUserID);
}

int FYCameraLogin::GetCameraStatus(FY_DeviceStastus &struDevStatus)
{
	try
	{
		NET_DVR_WORKSTATE_V30 DVR_WorkState;
		BOOL bSuccess = NET_DVR_GetDVRWorkState_V30(m_lUserID,&DVR_WorkState);
		if (bSuccess == TRUE)
		{
			//处理状态数据
			struDevStatus.dwDeviceStatic = DVR_WorkState.dwDeviceStatic;
			int iMax = 0;
			//////////////////////////////////////////////////////////////////////////
			if (MAX_DISKNUM_V30 <= sizeof(struDevStatus.struHardDiskStatic))
			{
				iMax = MAX_DISKNUM_V30;
			}
			else
			{
				iMax = sizeof(struDevStatus.struHardDiskStatic);
			}
			for (int i = 0; i < iMax; i++)
			{
				struDevStatus.struHardDiskStatic[i].dwVolume = DVR_WorkState.struHardDiskStatic[i].dwVolume;
				struDevStatus.struHardDiskStatic[i].dwFreeSpace = DVR_WorkState.struHardDiskStatic[i].dwFreeSpace;
				struDevStatus.struHardDiskStatic[i].dwHardDiskStatic = DVR_WorkState.struHardDiskStatic[i].dwHardDiskStatic;
			}
			//////////////////////////////////////////////////////////////////////////
			if (MAX_CHANNUM_V30 <= sizeof(struDevStatus.struChanStatic))
			{
				iMax = MAX_CHANNUM_V30;
			}
			else
			{
				iMax = sizeof(struDevStatus.struChanStatic);
			}
			for (int i = 0; i < iMax; i++)
			{
				struDevStatus.struChanStatic[i].byRecordStatic = DVR_WorkState.struChanStatic[i].byRecordStatic;
				struDevStatus.struChanStatic[i].bySignalStatic = DVR_WorkState.struChanStatic[i].bySignalStatic;
				struDevStatus.struChanStatic[i].byHardwareStatic = DVR_WorkState.struChanStatic[i].byHardwareStatic;
				struDevStatus.struChanStatic[i].dwBitRate = DVR_WorkState.struChanStatic[i].dwBitRate;
				struDevStatus.struChanStatic[i].dwLinkNum = DVR_WorkState.struChanStatic[i].dwLinkNum;
				struDevStatus.struChanStatic[i].dwChannelNo = DVR_WorkState.struChanStatic[i].dwChannelNo;
			}
			//////////////////////////////////////////////////////////////////////////
			if (MAX_ALARMIN_V30 <= sizeof(struDevStatus.byAlarmInStatic))
			{
				iMax = MAX_ALARMIN_V30;
			}
			else
			{
				iMax = sizeof(struDevStatus.byAlarmInStatic);
			}
			for (int i = 0; i < iMax; i++)
			{
				struDevStatus.byAlarmInStatic[i] = DVR_WorkState.byAlarmInStatic[i];				
			}
			//////////////////////////////////////////////////////////////////////////
			if (MAX_ALARMOUT_V30 <= sizeof(struDevStatus.byAlarmOutStatic))
			{
				iMax = MAX_ALARMOUT_V30;
			}
			else
			{
				iMax = sizeof(struDevStatus.byAlarmOutStatic);
			}
			for (int i = 0; i < iMax; i++)
			{
				struDevStatus.byAlarmOutStatic[i] = DVR_WorkState.byAlarmOutStatic[i];				
			}
			struDevStatus.dwLocalDisplay = DVR_WorkState.dwLocalDisplay;
			//////////////////////////////////////////////////////////////////////////
			if (MAX_AUDIO_V30 <= sizeof(struDevStatus.byAudioChanStatus))
			{
				iMax = MAX_AUDIO_V30;
			}
			else
			{
				iMax = sizeof(struDevStatus.byAudioChanStatus);
			}
			for (int i = 0; i < iMax; i++)
			{
				struDevStatus.byAudioChanStatus[i] = DVR_WorkState.byAudioChanStatus[i];				
			}
			return 0;
		}
	}
	catch (...)
	{		
	}
	return -1;
}

void __stdcall FYCameraLogin::AlarmMessageCallBack_V30(LONG lCommand, NET_DVR_ALARMER *pAlarmer, char *pAlarmInfo, DWORD dwBufLen, void* pUserData)
{
	int i;
	NET_DVR_ALARMINFO struAlarmInfo;
	memcpy(&struAlarmInfo, pAlarmInfo, sizeof(NET_DVR_ALARMINFO));
	switch(lCommand) 
	{       
	case COMM_ALARM:
		{
			switch (struAlarmInfo.dwAlarmType)
			{
			case 3: //移动侦测报警
				for (i=0; i<16; i++)   //#define MAX_CHANNUM   16  //最大通道数
				{
					if (struAlarmInfo.dwChannel[i] == 1)
					{
						printf("发生移动侦测报警的通道号 %d\n", i+1);
					}
				}       
				break;
			default:
				break;
			}
		}
		break;
	default:
		break;
	}
}

long FYCameraLogin::StartAlarmCallBack(FYAlarmMessageCallBack alarmMessageCallback, void* pUserData)
{
	//设置报警回调函数
	NET_DVR_SetDVRMessageCallBack_V30(AlarmMessageCallBack_V30, NULL);

	//启用监听
	LONG lHandle;
	lHandle = NET_DVR_StartListen_V30(NULL,7200, AlarmMessageCallBack_V30, NULL);
	if (lHandle < 0)
	{
		printf("NET_DVR_StartListen_V30 error, %d\n", NET_DVR_GetLastError());
		//NET_DVR_Logout(m_lUserID);
		//NET_DVR_Cleanup(); 
		return -1;
	}
	return 0;
}

int FYCameraLogin::StopAlarmCallBack(long ulAlarmHandle)
{
	//停止监听
	if (!NET_DVR_StopListen_V30(ulAlarmHandle))
	{
		printf("NET_DVR_StopListen_V30 error, %d\n", NET_DVR_GetLastError());
		//NET_DVR_Logout(m_lUserID);
		//NET_DVR_Cleanup(); 
		return -1;
	}
	return 0;
}