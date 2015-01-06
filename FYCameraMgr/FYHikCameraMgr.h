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

	//����Ԥ��
	unsigned long StartRealVideo(FY_CameraInfo CameraInfo, FYVideoDataCallBack videoDataCallback, void* pUserData);
	//PTZ����
	int PTZControl(unsigned long hRealVideoHandle, int PTZCMD, int iStop);
	//ֹͣԤ��
	int StopRealVideo(unsigned long hRealVideoHandle);
	//��ȡ��Ƶ״̬
	int GetCameraStatus(FY_CameraInfo CameraInfo, FY_DeviceStastus &struDevStatus);
	//���ñ����ص�����
	unsigned long StartAlarmCallBack(FY_CameraInfo CameraInfo, FYAlarmMessageCallBack alarmMessageCallback, void* pUserData);
	//ֹͣԤ��
	int StopAlarmCallBack(unsigned long hAlarmHandle);

	//�����ط�
	unsigned long StartRecordVideo(unsigned long CameraID, char* BeginTimeStamp, FYVideoDataCallBack videoDataCallback, void* pUserData);
	//ֹͣ�ط�
	int StopRecordVideo(unsigned long CameraID, char* BeginTimeStamp);
	//ж�����
	int UnLoadCamera(unsigned long CameraID);

protected:
	int StartCheckLogin(FY_CameraInfo &CameraInfo);
	int StopCheckLogin(FY_CameraInfo &CameraInfo);

private:
	//��¼�豸�б�
	map<string,FY_CameraInfo> m_mapCameraLoginInfo;
	//
	CRITICAL_SECTION m_HikCameraCS;
};

