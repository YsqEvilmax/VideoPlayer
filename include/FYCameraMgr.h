#pragma once

#include "FYP.h"
#include "FYCommon.h"


//////////////////////////////////////////////////////////////////////////
//����Ԥ��������hRealVideoHandle��
FY_API unsigned long FY_CALL FY_StartRealVideo(FY_CameraInfo CameraInfo, FYVideoDataCallBack videoDataCallback, void* pUserData);
//ֹͣԤ����hRealVideoHandleΪStartRealVideo�ķ���ֵ��
FY_API int FY_CALL FY_StopRealVideo(unsigned long hRealVideoHandle);
//PTZ���ƣ�hRealVideoHandleΪStartRealVideo�ķ���ֵ��
//PTZCMD��#include "FYCommon.h"�ж��壻ʹ��Ĭ���ٶȣ�
FY_API int FY_CALL FY_PTZControl(unsigned long hRealVideoHandle, int PTZCMD, int iStop);
//��ȡ״̬
FY_API int FY_CALL FY_GetCameraStatus(FY_CameraInfo CameraInfo, FY_DeviceStastus &struDevStatus);
//�������������ص�����������ֵΪhAlarmHandle��
FY_API unsigned long FY_CALL FY_StartAlarmCallBack(FY_CameraInfo CameraInfo, FYAlarmMessageCallBack alarmMessageCallback, void* pUserData);
//ֹͣ������hAlarmHandleΪStartAlarmCallBack�ķ���ֵ��
FY_API int FY_CALL FY_StopAlarmCallBack(unsigned long hAlarmHandle);

//��ȡ¼���ļ�
FY_API int FY_CALL FY_GetRecordFile(FY_CameraInfo CameraInfo, vector<FY_RecordFileInfo> &vRecordFileInfo);
//�����طţ�RecordFileInfoΪFY_GetRecordFile����ֵ��
FY_API unsigned long FY_CALL FY_StartRecordVideo(FY_RecordFileInfo RecordFileInfo, FYVideoDataCallBack videoDataCallback, void* pUserData);
//���ƻطţ�hRecordVideoHandleΪFY_StartRecordVideo����ֵ��
//RecordCMD:1 ��ʼ����;3 ��ͣ����;4 �ָ����ţ�����ͣ����ý��ָ���ͣǰ���ٶȲ��ţ�;	5 ���;6 ����;
//7 �����ٶȲ��ţ���Ż�������ʱ���ý��ָ������ٶȲ��ţ� 
//8 ��֡�ţ��ָ������ط�ʹ��NET_DVR_PLAYNORMAL���
FY_API int FY_CALL FY_RecordControl(unsigned long hRecordVideoHandle, int RecordCMD);
//ֹͣ�ط�
FY_API int FY_CALL FY_StopRecordVideo(unsigned long hRecordVideoHandle);
