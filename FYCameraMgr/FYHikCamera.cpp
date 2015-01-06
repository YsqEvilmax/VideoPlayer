#include "stdafx.h"
#include "FYHikCamera.h"

#include "FYCameraDev.h"
#pragma comment(lib,"FYCameraDev.lib")

//////////////////////////////////////////////////////////////////////////
FYHikCamera::FYHikCamera(void)
{
	m_ulLoginHandle = 0;
	m_ulPlayHandle = 0;
}


FYHikCamera::~FYHikCamera(void)
{
}


int FYHikCamera::StartRealVideo(FYVideoDataCallBack videoDataCallback, void* pUserData)
{	
	try
	{
		m_ulPlayHandle = Hik_StartRealVideo(m_ulLoginHandle,m_CameraInfo.Channel,m_CameraInfo.CodeMode,videoDataCallback,pUserData);
		return 0;
	}
	catch (...)
	{
	}	
	return -1;
}

int FYHikCamera::PTZControl(int PTZCMD, int iStop)
{
	try
	{
		return Hik_PTZControl(m_ulLoginHandle,m_ulPlayHandle,PTZCMD,iStop);
	}
	catch (...)
	{		
	}	
	return -1;
}

int FYHikCamera::StopRealVideo()
{
	try
	{
		return Hik_StopRealVideo(m_ulLoginHandle,m_ulPlayHandle);
	}
	catch (...)
	{
	}	
	return -1;
}
