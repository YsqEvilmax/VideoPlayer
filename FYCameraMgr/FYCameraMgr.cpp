// FYCameraMgr.cpp : 定义 DLL 应用程序的导出函数。
//

#include "stdafx.h"

#include "FYCameraMgr.h"
#include "FYHikCameraMgr.h"


//暂时以全局变量形势，未来根据DeviceType调用不同的对象；
FYHikCameraMgr g_HikCameraMgr;
//////////////////////////////////////////////////////////////////////////
//启动预览
FY_API unsigned long FY_CALL FY_StartRealVideo(FY_CameraInfo CameraInfo, FYVideoDataCallBack videoDataCallback, void* pUserData)
{
	return g_HikCameraMgr.StartRealVideo(CameraInfo,videoDataCallback,pUserData);
}
//PTZ控制
FY_API int FY_CALL FY_PTZControl(unsigned long hRealVideoHandle, int PTZCMD, int iStop)
{
	return g_HikCameraMgr.PTZControl(hRealVideoHandle,PTZCMD,iStop);
}
//停止预览
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
//停止侦听
FY_API int FY_CALL FY_StopAlarmCallBack(unsigned long hAlarmHandle)
{
	return g_HikCameraMgr.StopAlarmCallBack(hAlarmHandle);
}
FY_API int FY_CALL FY_GetRecordFile(FY_CameraInfo CameraInfo, vector<FY_RecordFileInfo> &vRecordFileInfo)
{
	return 0;
}
//启动回放
FY_API unsigned long FY_CALL FY_StartRecordVideo(FY_RecordFileInfo RecordFileInfo, FYVideoDataCallBack videoDataCallback, void* pUserData)
{
	//return g_HikCameraMgr.StartRecordVideo(RecordFileInfo,videoDataCallback,pUserData);
	return 0;
}

FY_API int FY_CALL FY_RecordControl(unsigned long hRecordVideoHandle, int RecordCMD)
{
	return 0;
}
//停止回放
FY_API int FY_CALL FY_StopRecordVideo(unsigned long hRecordVideoHandle)
{
	//return g_HikCameraMgr.StopRecordVideo(CameraID,BeginTimeStamp);
	return 0;
}



