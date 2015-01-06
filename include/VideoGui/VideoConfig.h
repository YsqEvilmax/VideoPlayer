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

		//������ת����Ϣ
		FY_CameraInfo toCameraInfo();

		QString	m_HostIP;		//IP��ַ
		int	    m_HostPort;		//�˿�
		QString	m_UserName;	    //�û���
		QString	m_Password;	    //����
		int		m_Channel;		//ͨ��
		bool    m_SurportPTZ;   //�Ƿ�֧����̨
	};
}

#endif // VIDEOCONFIG_H
