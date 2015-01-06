// FYCameraDev.cpp : ���� DLL Ӧ�ó���ĵ���������
//

#include "stdafx.h"

#include "FYCameraDev.h"
#include "FYCameraLogin.h"

//////////////////////////////////////////////////////////////////////////
//��¼�豸
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
//����Ԥ��
FY_API unsigned long FY_CALL Hik_StartRealVideo(unsigned long ulDeviceHandle, short Channel, int CodeMode, FYVideoDataCallBack videoDataCallback, void* pUserData)
{
	FYCameraLogin* pCameraLogin = (FYCameraLogin*)ulDeviceHandle;
	if (pCameraLogin == NULL)
	{
		return 0;
	}
	return pCameraLogin->StartRealVideo(Channel,CodeMode,videoDataCallback,pUserData);
}
//PTZ����
FY_API int FY_CALL Hik_PTZControl(unsigned long ulDeviceHandle, unsigned long ulRealPlayHandle, int PTZCMD, int iStop)
{
	FYCameraLogin* pCameraLogin = (FYCameraLogin*)ulDeviceHandle;
	if (pCameraLogin == NULL)
	{
		return 0;
	}
	return pCameraLogin->PTZControl(ulRealPlayHandle,PTZCMD,iStop);
}
//ֹͣԤ��
FY_API int FY_CALL Hik_StopRealVideo(unsigned long ulDeviceHandle, unsigned long ulRealPlayHandle)
{
	FYCameraLogin* pCameraLogin = (FYCameraLogin*)ulDeviceHandle;
	if (pCameraLogin == NULL)
	{
		return 0;
	}
	return pCameraLogin->StopRealVideo(ulRealPlayHandle);
}

//��ȡ״̬
FY_API int FY_CALL Hik_GetCameraStatus(unsigned long ulDeviceHandle, FY_DeviceStastus &struDevStatus)
{
	FYCameraLogin* pCameraLogin = (FYCameraLogin*)ulDeviceHandle;
	if (pCameraLogin == NULL)
	{
		return 0;
	}
	return pCameraLogin->GetCameraStatus(struDevStatus);
}
//���ñ����ص�����
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
//�����ط�
FY_API unsigned long FY_CALL Hik_StartRecordVideo(unsigned long ulDeviceHandle, FY_VideoBaseInfo &VideoInfo, char* BeginTimeStamp, FYVideoDataCallBack videoDataCallback, void* pUserData)
{
	return 0;
}
//ֹͣ�ط�
FY_API int FY_CALL Hik_StopRecordVideo(unsigned long ulRecordPlayHandle)
{
	return 0;
}
//�ǳ��豸
FY_API int FY_CALL Hik_LogOutDev(unsigned long ulDeviceHandle)
{
	FYCameraLogin* pCameraLogin = (FYCameraLogin*)ulDeviceHandle;
	if (pCameraLogin == NULL)
	{
		return 0;
	}
	return pCameraLogin->LogOutDev();
}
