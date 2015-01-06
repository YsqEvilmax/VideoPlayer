#pragma once 




/*
云台控制宏命令
LIGHT_PWRON 2 接通灯光电源 
WIPER_PWRON 3 接通雨刷开关 
FAN_PWRON 4 接通风扇开关 
HEATER_PWRON 5 接通加热器开关 
AUX_PWRON1 6 接通辅助设备开关 
AUX_PWRON2 7 接通辅助设备开关 
ZOOM_IN 11 焦距变大(倍率变大) 
ZOOM_OUT 12 焦距变小(倍率变小) 
FOCUS_NEAR 13 焦点前调 
FOCUS_FAR 14 焦点后调 
IRIS_OPEN 15 光圈扩大 
IRIS_CLOSE 16 光圈缩小 
TILT_UP 21 云台上仰 
TILT_DOWN 22 云台下俯 
PAN_LEFT 23 云台左转 
PAN_RIGHT 24 云台右转 
UP_LEFT 25 云台上仰和左转 
UP_RIGHT 26 云台上仰和右转 
DOWN_LEFT 27 云台下俯和左转 
DOWN_RIGHT 28 云台下俯和右转 
PAN_AUTO 29 云台左右自动扫描
*/
#define LIGHT_PWRON		2	/* 接通灯光电源 */
#define WIPER_PWRON		3	/* 接通雨刷开关 */
#define FAN_PWRON		4	/* 接通风扇开关 */
#define HEATER_PWRON	5	/* 接通加热器开关 */
#define AUX_PWRON1		6	/* 接通辅助设备开关 */
#define AUX_PWRON2		7	/* 接通辅助设备开关 */
#define SET_PRESET		8	/* 设置预置点 */
#define CLE_PRESET		9	/* 清除预置点 */

#define ZOOM_IN			11	/* 焦距以速度SS变大(倍率变大) */
#define ZOOM_OUT		12	/* 焦距以速度SS变小(倍率变小) */
#define FOCUS_NEAR      13  /* 焦点以速度SS前调 */
#define FOCUS_FAR       14  /* 焦点以速度SS后调 */
#define IRIS_OPEN       15  /* 光圈以速度SS扩大 */
#define IRIS_CLOSE      16  /* 光圈以速度SS缩小 */

#define TILT_UP			21	/* 云台以SS的速度上仰 */
#define TILT_DOWN		22	/* 云台以SS的速度下俯 */
#define PAN_LEFT		23	/* 云台以SS的速度左转 */
#define PAN_RIGHT		24	/* 云台以SS的速度右转 */
#define UP_LEFT			25	/* 云台以SS的速度上仰和左转 */
#define UP_RIGHT		26	/* 云台以SS的速度上仰和右转 */
#define DOWN_LEFT		27	/* 云台以SS的速度下俯和左转 */
#define DOWN_RIGHT		28	/* 云台以SS的速度下俯和右转 */
#define PAN_AUTO		29	/* 云台以SS的速度左右自动扫描 */
//////////////////////////////////////////////////////////////////////////
typedef struct _tagTIMESTAMP
{  
	DWORD    dwYear;		//年
	DWORD    dwMonth;		//月
	DWORD    dwDay;			//日
	DWORD    dwHour;		//时
	DWORD    dwMinute;		//分
	DWORD    dwSecond;		//秒

	_tagTIMESTAMP()
	{
		dwYear = 0;
		dwMonth = 0;
		dwDay = 0;
		dwHour = 0;
		dwMinute = 0;
		dwSecond = 0;
	}
}
FY_TIMESTAMP, *LPFY_TIMESTAMP;
//输入相机数据
typedef struct _tagCameraInfo
{
	int		DeviceType;		//设备类型（海康、大华等）
	char	HostIP[64];		//IP地址
	short	HostPort;		//端口
	char	UserName[32];	//用户名
	char	Password[32];	//密码
	int		Channel;		//通道
	int		CodeMode;		//码流模式（主、附码流）
	int		ListenPort;		//报警侦听端口
	
	HWND	hPlayerWnd;				//播放窗口句柄
	unsigned long ulDeviceHandle;	//设备句柄
	int iLoginRef;					//登录计数器

	FY_TIMESTAMP struBeginTime;		//开始时间
	FY_TIMESTAMP struEndTime;		//结束时间

	_tagCameraInfo()
	{
		memset(HostIP,0,sizeof(HostIP));
		HostPort = 0;
		memset(UserName,0,sizeof(UserName));
		memset(Password,0,sizeof(Password));
		Channel = 0;
		CodeMode = 0;
		ListenPort = 0;

		hPlayerWnd = NULL;
		DeviceType = 0;
		ulDeviceHandle = 0;
		iLoginRef = 0;
	}
}
FY_CameraInfo,*LPFY_CameraInfo;

//视频头基本参数
typedef struct _tagVideoBaseInfo
{
	unsigned int	uiDataType;		//1系统头、2视频、3音频、9其它；
	unsigned int	uiCodeFlag;		//0默认是yuv；1是海康私有h264；2是标准H264
	//unsigned int	uiWidth;		//视频宽度
	//unsigned int	uiHeight;		//视频高度	
	//unsigned int	uiFrameRate;	//视频帧率
	unsigned int	CfgFrameLen;	//配置帧长度
	char			CfgFrame[256];	//配置帧
	char			HostIP[64];		//IP地址
	int				Channel;		//通道
	int				CodeMode;		//码流模式（主、附码流）
	_tagVideoBaseInfo()
	{
		uiDataType = 0;
		uiCodeFlag = 0;
		/*uiHeight = 0; 
		uiWidth = 0; 
		uiFrameRate = 0;*/
		CfgFrameLen = 0; 
		memset(CfgFrame,0,sizeof(CfgFrame));
		memset(HostIP,0,sizeof(HostIP));
		Channel = 0;
		CodeMode = 0;
	}
}
FY_VideoBaseInfo,*LPFY_VideoBaseInfo;



//DVR状态相关
//硬盘状态数据
typedef struct _tagDVR_DISKSTATE
{  
	DWORD		dwVolume;			//硬盘容量，单位：MB 
	DWORD		dwFreeSpace;		//硬盘剩余空间，单位：MB 
	DWORD		dwHardDiskStatic;	//硬盘的状态：0- 活动，1- 休眠，2- 异常，3- 休眠硬盘出错，4- 未格式化，5- 未连接状态(网络硬盘)，6- 硬盘正在格式化

	_tagDVR_DISKSTATE()
	{
		dwVolume = 0;
		dwFreeSpace = 0;
		dwHardDiskStatic = 0;
	}
}
FY_DVR_DISKSTATE, *LPFY_DVR_DISKSTATE;
//通道状态数据
typedef struct _tagDVR_CHANNELSTATE
{  
	BYTE        byRecordStatic;		//通道是否在录像：0－不录像；1－录像
	BYTE        bySignalStatic;		//连接的信号状态：0－正常，1－信号丢失
	BYTE		byHardwareStatic;	//通道硬件状态：0－正常，1－异常（例如DSP异常）
	DWORD       dwBitRate;			//实际码率
	DWORD       dwLinkNum;			//连接的客户端个数
	DWORD		dwChannelNo;		//当前的通道号，0xffffffff表示当前及后续通道信息无效

	_tagDVR_CHANNELSTATE()
	{
		byRecordStatic = 0;
		bySignalStatic = 0;
		byHardwareStatic = 0;
		dwBitRate = 0;
		dwLinkNum = 0;
		dwChannelNo = 0;
	}
}
FY_DVR_CHANNELSTATE,*LPFY_DVR_CHANNELSTATE;
//设备状态
typedef struct _tagDeviceStastus
{  
	DWORD                      dwDeviceStatic;				//设备的状态：0－正常；1－CPU占用率太高，超过85%；2－硬件错误，例如串口异常 
	FY_DVR_DISKSTATE           struHardDiskStatic[64];		//硬盘状态 （SDK最大33个）
	FY_DVR_CHANNELSTATE		   struChanStatic[256];			//通道状态 （SDK最大64）
	DWORD                      byAlarmInStatic[96];			//报警输入口的状态：0-没有报警；1-有报警 
	DWORD                      byAlarmOutStatic[96];		//报警输出口的状态：0-没有输出，1-有报警输出
	DWORD                      dwLocalDisplay;				//本地显示状态：0-正常，1-不正常
	BYTE                       byAudioChanStatus[16];		//表示语音通道的状态：0-未使用，1-使用中，0xff无效

	_tagDeviceStastus()
	{
		dwDeviceStatic = 0;
		memset(byAlarmInStatic,0,sizeof(byAlarmInStatic));
		memset(byAlarmOutStatic,0,sizeof(byAlarmOutStatic));
		dwLocalDisplay = 0;
		memset(byAudioChanStatus,0,sizeof(byAudioChanStatus));
	}
}
FY_DeviceStastus,*LPFY_DeviceStastus;

//录像回放
typedef struct _tagRecordFileInfo
{  
	LONG	lUserID;			//设备登录ID
	HWND	hPlayerWnd;			//播放窗口句柄
	char	srcfile[128];		//源文件
	char	destfile[128];		//目标文件（保留）

	_tagRecordFileInfo()
	{
		lUserID = 0;
		hPlayerWnd = NULL;
		memset(srcfile,0,sizeof(srcfile));
		memset(destfile,0,sizeof(destfile));
	}
}
FY_RecordFileInfo,*LPFY_RecordFileInfo;

//报警信息
typedef struct _tagALARMINFO
{  
	DWORD     dwAlarmType;						//报警类型： 0－信号量报警； 1－硬盘满； 2－信号丢失； 3－移动侦测； 4－硬盘未格式化； 5－读写硬盘出错； 6－遮挡报警； 7－制式不匹配； 8－非法访问；
	DWORD     dwAlarmInputNumber;				//报警输入端口。当报警类型为9时该变量表示串口状态：0表示正常，0xffffffff表示异常 
	DWORD     dwAlarmOutputNumber[64];			//触发的报警输出端口。当报警类型为信号量报警时，值为1表示该报警端口输出
	DWORD     dwAlarmRelateChannel[256];		//触发的录像通道。当报警类型为信号量报警时，值为1表示该通道录像，如dwAlarmRelateChannel[0]表示触发第1个通道录像
	DWORD     dwChannel[256];					//发生报警的通道。当报警类型为2，3，6时有效，如dwChannel[0]值为1表示第1个通道报警
	DWORD     dwDiskNumber[16];					//发生报警的硬盘。当报警类型为1，4，5时有效，dwDiskNumber[0]值为1表示1号硬盘异常

	_tagALARMINFO()
	{
		dwAlarmType = 0;
		dwAlarmInputNumber = 0;
		memset(dwAlarmOutputNumber,0,sizeof(dwAlarmOutputNumber));
		memset(dwAlarmRelateChannel,0,sizeof(dwAlarmRelateChannel));
		memset(dwChannel,0,sizeof(dwChannel));
		memset(dwDiskNumber,0,sizeof(dwDiskNumber));
	}
}
FY_DVR_ALARMINFO,*LPFY_DVR_ALARMINFO;
//////////////////////////////////////////////////////////////////////////
//报警消息回调函数；lCommand：默认为0，基本报警信息；pAlarmer报警设备信息;pAlarmInfo报警信息;dwBufLen报警信息缓存大小;pUserData用户自定义
typedef int (*FYAlarmMessageCallBack)(LONG lCommand, FY_DVR_ALARMINFO *pAlarmer, char *pAlarmInfo, DWORD dwBufLen, void* pUserData);
//视频流回调函数；ulVideoPlayHandle句柄保留；VideoBaseInfo视频头信息；pVideoData视频数据；iVideoDataLen视频数据长度；pUserData用户自定义
typedef int (*FYVideoDataCallBack)(FY_VideoBaseInfo VideoBaseInfo, BYTE* pVideoData, DWORD dwVideoDataLen, void* pUserData);



