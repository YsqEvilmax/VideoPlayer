#include "stdafx.h"
#include "VideoConfig.h"

namespace Gui {
	VideoConfig::VideoConfig()
		: m_SurportPTZ(false)
	{}

	VideoConfig::VideoConfig(QString HostIP, int HostPort, QString UserName, QString Password, int Channel, bool isPTZ)
		: m_HostIP(HostIP)
		, m_HostPort(HostPort)
		, m_UserName(UserName)
		, m_Password(Password)
		, m_Channel(Channel)
		, m_SurportPTZ(isPTZ)
	{}

	VideoConfig::~VideoConfig()
	{
	}

	FY_CameraInfo VideoConfig::toCameraInfo()
	{
		FY_CameraInfo CameraInfo;
		strcpy_s(CameraInfo.HostIP, sizeof(CameraInfo.HostIP), m_HostIP.toStdString().c_str());
		CameraInfo.HostPort = m_HostPort;
		strcpy_s(CameraInfo.UserName, sizeof(CameraInfo.UserName), m_UserName.toStdString().c_str());
		strcpy_s(CameraInfo.Password, sizeof(CameraInfo.Password), m_Password.toStdString().c_str());
		CameraInfo.Channel = m_Channel;
		return CameraInfo;
	}
}
