#pragma once

#include "FYP.h"
#include "FYCommon.h"


//////////////////////////////////////////////////////////////////////////
//启动预览（返回hRealVideoHandle）
FY_API unsigned long FY_CALL FY_StartRealVideo(FY_CameraInfo CameraInfo, FYVideoDataCallBack videoDataCallback, void* pUserData);
//停止预览（hRealVideoHandle为StartRealVideo的返回值）
FY_API int FY_CALL FY_StopRealVideo(unsigned long hRealVideoHandle);
//PTZ控制（hRealVideoHandle为StartRealVideo的返回值）
//PTZCMD见#include "FYCommon.h"中定义；使用默认速度；
FY_API int FY_CALL FY_PTZControl(unsigned long hRealVideoHandle, int PTZCMD, int iStop);
//获取状态
FY_API int FY_CALL FY_GetCameraStatus(FY_CameraInfo CameraInfo, FY_DeviceStastus &struDevStatus);
//启动侦听报警回调函数（返回值为hAlarmHandle）
FY_API unsigned long FY_CALL FY_StartAlarmCallBack(FY_CameraInfo CameraInfo, FYAlarmMessageCallBack alarmMessageCallback, void* pUserData);
//停止侦听（hAlarmHandle为StartAlarmCallBack的返回值）
FY_API int FY_CALL FY_StopAlarmCallBack(unsigned long hAlarmHandle);

//获取录像文件
FY_API int FY_CALL FY_GetRecordFile(FY_CameraInfo CameraInfo, vector<FY_RecordFileInfo> &vRecordFileInfo);
//启动回放（RecordFileInfo为FY_GetRecordFile返回值）
FY_API unsigned long FY_CALL FY_StartRecordVideo(FY_RecordFileInfo RecordFileInfo, FYVideoDataCallBack videoDataCallback, void* pUserData);
//控制回放（hRecordVideoHandle为FY_StartRecordVideo返回值）
//RecordCMD:1 开始播放;3 暂停播放;4 恢复播放（在暂停后调用将恢复暂停前的速度播放）;	5 快放;6 慢放;
//7 正常速度播放（快放或者慢放时调用将恢复单倍速度播放） 
//8 单帧放（恢复正常回放使用NET_DVR_PLAYNORMAL命令）
FY_API int FY_CALL FY_RecordControl(unsigned long hRecordVideoHandle, int RecordCMD);
//停止回放
FY_API int FY_CALL FY_StopRecordVideo(unsigned long hRecordVideoHandle);
