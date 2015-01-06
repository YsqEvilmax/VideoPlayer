#pragma once

#include "FYP.h"
#include "FYCommon.h"

#include "HCNetSDK.h"
//////////////////////////////////////////////////////////////////////////
class FYCameraVideo
{
public:
	FYCameraVideo(void);
	~FYCameraVideo(void);

	void SetCameraInfo(FY_CameraInfo struCameraInfo)
	{
		m_CameraInfo = struCameraInfo;
	}

	//����Ԥ��
	LONG StartRealVideo(LONG lUserID, short Channel, int CodeMode, FYVideoDataCallBack videoDataCallback, void* pUserData);
	//ֹͣԤ��
	int StopRealVideo();
	//PTZ����
	int PTZControl(int PTZCMD, int iStop);

protected:
	static void __stdcall RealDataCallBack_V30(LONG lRealHandle, DWORD dwDataType, BYTE *pBuffer,DWORD dwBufSize,void* dwUser);


private:
	LONG m_lRealHandle;
	FYVideoDataCallBack m_videoDataCallback;
	void* m_pUserData;
	//�����Ϣ
	FY_CameraInfo m_CameraInfo;
};

