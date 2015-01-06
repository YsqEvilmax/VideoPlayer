// FYCameraMgr.cpp : ���� DLL Ӧ�ó���ĵ���������
//

#include "stdafx.h"

#include "FYCameraMgr.h"
#include "FYHikCameraMgr.h"


//��ʱ��ȫ�ֱ������ƣ�δ������DeviceType���ò�ͬ�Ķ���
FYHikCameraMgr g_HikCameraMgr;
//////////////////////////////////////////////////////////////////////////
//����Ԥ��
FY_API unsigned long FY_CALL FY_StartRealVideo(FY_CameraInfo CameraInfo, FYVideoDataCallBack videoDataCallback, void* pUserData)
{
	return g_HikCameraMgr.StartRealVideo(CameraInfo,videoDataCallback,pUserData);
}
//PTZ����
FY_API int FY_CALL FY_PTZControl(unsigned long hRealVideoHandle, int PTZCMD, int iStop)
{
	return g_HikCameraMgr.PTZControl(hRealVideoHandle,PTZCMD,iStop);
}
//ֹͣԤ��
FY_API int FY_CALL FY_StopRealVideo(unsigned long hRealVideoHandle)
{
	return g_HikCameraMgr.StopRealVideo(hRealVideoHandle);
}

FY_API int FY_CALL FY_GetCameraStatus(FY_CameraInfo CameraInfo, FY_DeviceStastus &struDevStatus)
{
	return g_HikCameraMgr.GetCameraStatus(CameraInfo,struDevStatus);
}

FY_API unsigned long FY_CALL FY_StartAlarmCallBack(FY_CameraInfo CameraInfo, FYAlarmMessageCallBack alarmMessageCallback, void* pUserData)
{
	return g_HikCameraMgr.StartAlarmCallBack(CameraInfo,alarmMessageCallback,pUserData);
}
//ֹͣ����
FY_API int FY_CALL FY_StopAlarmCallBack(unsigned long hAlarmHandle)
{
	return g_HikCameraMgr.StopAlarmCallBack(hAlarmHandle);
}
FY_API int FY_CALL FY_GetRecordFile(FY_CameraInfo CameraInfo, vector<FY_RecordFileInfo> &vRecordFileInfo)
{
	return 0;
}
//�����ط�
FY_API unsigned long FY_CALL FY_StartRecordVideo(FY_RecordFileInfo RecordFileInfo, FYVideoDataCallBack videoDataCallback, void* pUserData)
{
	//return g_HikCameraMgr.StartRecordVideo(RecordFileInfo,videoDataCallback,pUserData);
	return 0;
}

FY_API int FY_CALL FY_RecordControl(unsigned long hRecordVideoHandle, int RecordCMD)
{
	return 0;
}
//ֹͣ�ط�
FY_API int FY_CALL FY_StopRecordVideo(unsigned long hRecordVideoHandle)
{
	//return g_HikCameraMgr.StopRecordVideo(CameraID,BeginTimeStamp);
	return 0;
}



