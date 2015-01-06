#pragma once

#include "FYP.h"
#include "FYCommon.h"


//////////////////////////////////////////////////////////////////////////
//��¼�豸
FY_API unsigned long FY_CALL Hik_LogInDev(FY_CameraInfo CameraInfo);
//����Ԥ��
FY_API unsigned long FY_CALL Hik_StartRealVideo(unsigned long ulDeviceHandle, short Channel, int CodeMode, FYVideoDataCallBack videoDataCallback, void* pUserData);
//PTZ����
FY_API int FY_CALL Hik_PTZControl(unsigned long ulDeviceHandle, unsigned long ulRealPlayHandle, int PTZCMD, int iStop);
//ֹͣԤ��
FY_API int FY_CALL Hik_StopRealVideo(unsigned long ulDeviceHandle, unsigned long ulRealPlayHandle);

//��ȡ״̬
FY_API int FY_CALL Hik_GetCameraStatus(unsigned long ulDeviceHandle, FY_DeviceStastus &struDevStatus);
//���ñ����ص�����
FY_API long FY_CALL Hik_StartAlarmCallBack(unsigned long ulDeviceHandle, FYAlarmMessageCallBack alarmMessageCallback, void* pUserData);
//ֹͣ��������
FY_API int FY_CALL Hik_StopAlarmCallBack(unsigned long ulDeviceHandle, long ulAlarmHandle);

//�����ط�
FY_API unsigned long FY_CALL Hik_StartRecordVideo(unsigned long ulDeviceHandle, FY_VideoBaseInfo &VideoInfo, char* BeginTimeStamp, FYVideoDataCallBack videoDataCallback, void* pUserData);
//ֹͣ�ط�
FY_API int FY_CALL Hik_StopRecordVideo(unsigned long ulRecordPlayHandle);
//�ǳ��豸
FY_API int FY_CALL Hik_LogOutDev(unsigned long ulDeviceHandle);
