#ifndef VIDEOCONFIG_H
#define VIDEOCONFIG_H

#include <QString>
#include "FYCameraMgr.h"
#include "videogui_global.h"

namespace Gui {
	class VIDEOGUI_EXPORT VideoConfig
	{
	public:
		VideoConfig();
		VideoConfig(QString HostIP, int HostPort, QString UserName, QString Password, int Channel, bool isPTZ);
		~VideoConfig();

		//由配置转换信息
		FY_CameraInfo toCameraInfo();

		QString	m_HostIP;		//IP地址
		int	    m_HostPort;		//端口
		QString	m_UserName;	    //用户名
		QString	m_Password;	    //密码
		int		m_Channel;		//通道
		bool    m_SurportPTZ;   //是否支持云台
	};
}

#endif // VIDEOCONFIG_H
