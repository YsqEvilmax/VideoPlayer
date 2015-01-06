#pragma once


#include "FYP.h"
#include "FYCommon.h"
//////////////////////////////////////////////////////////////////////////
class FYHikCamera
{
public:
	FYHikCamera(void);
	~FYHikCamera(void);

	//���õ�¼�豸��Ϣ
	void SetCameraInfo(FY_CameraInfo &CameraInfo)
	{
		m_CameraInfo = CameraInfo;
		m_ulLoginHandle = CameraInfo.ulDeviceHandle;
	};
	void GetCameraInfo(FY_CameraInfo &CameraInfo)
	{
		CameraInfo = m_CameraInfo;
	};
	//��ȡ��¼�豸��Ϣ
	/*void GetDeviceIP(string &CameraIP)
	{
		CameraIP = m_CameraInfo.HostIP;
	};*/

	//����Ԥ��
	int StartRealVideo(FYVideoDataCallBack videoDataCallback, void* pUserData);
	//PTZ����
	int PTZControl(int PTZCMD, int iStop);
	//ֹͣԤ��
	int StopRealVideo();

private:
	unsigned long m_ulLoginHandle;		//�豸���
	unsigned long m_ulPlayHandle;	//��Ƶ���
	FY_CameraInfo m_CameraInfo;
};

