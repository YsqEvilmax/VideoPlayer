#pragma once 




/*
��̨���ƺ�����
LIGHT_PWRON 2 ��ͨ�ƹ��Դ 
WIPER_PWRON 3 ��ͨ��ˢ���� 
FAN_PWRON 4 ��ͨ���ȿ��� 
HEATER_PWRON 5 ��ͨ���������� 
AUX_PWRON1 6 ��ͨ�����豸���� 
AUX_PWRON2 7 ��ͨ�����豸���� 
ZOOM_IN 11 ������(���ʱ��) 
ZOOM_OUT 12 �����С(���ʱ�С) 
FOCUS_NEAR 13 ����ǰ�� 
FOCUS_FAR 14 ������ 
IRIS_OPEN 15 ��Ȧ���� 
IRIS_CLOSE 16 ��Ȧ��С 
TILT_UP 21 ��̨���� 
TILT_DOWN 22 ��̨�¸� 
PAN_LEFT 23 ��̨��ת 
PAN_RIGHT 24 ��̨��ת 
UP_LEFT 25 ��̨��������ת 
UP_RIGHT 26 ��̨��������ת 
DOWN_LEFT 27 ��̨�¸�����ת 
DOWN_RIGHT 28 ��̨�¸�����ת 
PAN_AUTO 29 ��̨�����Զ�ɨ��
*/
#define LIGHT_PWRON		2	/* ��ͨ�ƹ��Դ */
#define WIPER_PWRON		3	/* ��ͨ��ˢ���� */
#define FAN_PWRON		4	/* ��ͨ���ȿ��� */
#define HEATER_PWRON	5	/* ��ͨ���������� */
#define AUX_PWRON1		6	/* ��ͨ�����豸���� */
#define AUX_PWRON2		7	/* ��ͨ�����豸���� */
#define SET_PRESET		8	/* ����Ԥ�õ� */
#define CLE_PRESET		9	/* ���Ԥ�õ� */

#define ZOOM_IN			11	/* �������ٶ�SS���(���ʱ��) */
#define ZOOM_OUT		12	/* �������ٶ�SS��С(���ʱ�С) */
#define FOCUS_NEAR      13  /* �������ٶ�SSǰ�� */
#define FOCUS_FAR       14  /* �������ٶ�SS��� */
#define IRIS_OPEN       15  /* ��Ȧ���ٶ�SS���� */
#define IRIS_CLOSE      16  /* ��Ȧ���ٶ�SS��С */

#define TILT_UP			21	/* ��̨��SS���ٶ����� */
#define TILT_DOWN		22	/* ��̨��SS���ٶ��¸� */
#define PAN_LEFT		23	/* ��̨��SS���ٶ���ת */
#define PAN_RIGHT		24	/* ��̨��SS���ٶ���ת */
#define UP_LEFT			25	/* ��̨��SS���ٶ���������ת */
#define UP_RIGHT		26	/* ��̨��SS���ٶ���������ת */
#define DOWN_LEFT		27	/* ��̨��SS���ٶ��¸�����ת */
#define DOWN_RIGHT		28	/* ��̨��SS���ٶ��¸�����ת */
#define PAN_AUTO		29	/* ��̨��SS���ٶ������Զ�ɨ�� */
//////////////////////////////////////////////////////////////////////////
typedef struct _tagTIMESTAMP
{  
	DWORD    dwYear;		//��
	DWORD    dwMonth;		//��
	DWORD    dwDay;			//��
	DWORD    dwHour;		//ʱ
	DWORD    dwMinute;		//��
	DWORD    dwSecond;		//��

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
//�����������
typedef struct _tagCameraInfo
{
	int		DeviceType;		//�豸���ͣ��������󻪵ȣ�
	char	HostIP[64];		//IP��ַ
	short	HostPort;		//�˿�
	char	UserName[32];	//�û���
	char	Password[32];	//����
	int		Channel;		//ͨ��
	int		CodeMode;		//����ģʽ��������������
	int		ListenPort;		//���������˿�
	
	HWND	hPlayerWnd;				//���Ŵ��ھ��
	unsigned long ulDeviceHandle;	//�豸���
	int iLoginRef;					//��¼������

	FY_TIMESTAMP struBeginTime;		//��ʼʱ��
	FY_TIMESTAMP struEndTime;		//����ʱ��

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

//��Ƶͷ��������
typedef struct _tagVideoBaseInfo
{
	unsigned int	uiDataType;		//1ϵͳͷ��2��Ƶ��3��Ƶ��9������
	unsigned int	uiCodeFlag;		//0Ĭ����yuv��1�Ǻ���˽��h264��2�Ǳ�׼H264
	//unsigned int	uiWidth;		//��Ƶ���
	//unsigned int	uiHeight;		//��Ƶ�߶�	
	//unsigned int	uiFrameRate;	//��Ƶ֡��
	unsigned int	CfgFrameLen;	//����֡����
	char			CfgFrame[256];	//����֡
	char			HostIP[64];		//IP��ַ
	int				Channel;		//ͨ��
	int				CodeMode;		//����ģʽ��������������
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



//DVR״̬���
//Ӳ��״̬����
typedef struct _tagDVR_DISKSTATE
{  
	DWORD		dwVolume;			//Ӳ����������λ��MB 
	DWORD		dwFreeSpace;		//Ӳ��ʣ��ռ䣬��λ��MB 
	DWORD		dwHardDiskStatic;	//Ӳ�̵�״̬��0- ���1- ���ߣ�2- �쳣��3- ����Ӳ�̳���4- δ��ʽ����5- δ����״̬(����Ӳ��)��6- Ӳ�����ڸ�ʽ��

	_tagDVR_DISKSTATE()
	{
		dwVolume = 0;
		dwFreeSpace = 0;
		dwHardDiskStatic = 0;
	}
}
FY_DVR_DISKSTATE, *LPFY_DVR_DISKSTATE;
//ͨ��״̬����
typedef struct _tagDVR_CHANNELSTATE
{  
	BYTE        byRecordStatic;		//ͨ���Ƿ���¼��0����¼��1��¼��
	BYTE        bySignalStatic;		//���ӵ��ź�״̬��0��������1���źŶ�ʧ
	BYTE		byHardwareStatic;	//ͨ��Ӳ��״̬��0��������1���쳣������DSP�쳣��
	DWORD       dwBitRate;			//ʵ������
	DWORD       dwLinkNum;			//���ӵĿͻ��˸���
	DWORD		dwChannelNo;		//��ǰ��ͨ���ţ�0xffffffff��ʾ��ǰ������ͨ����Ϣ��Ч

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
//�豸״̬
typedef struct _tagDeviceStastus
{  
	DWORD                      dwDeviceStatic;				//�豸��״̬��0��������1��CPUռ����̫�ߣ�����85%��2��Ӳ���������紮���쳣 
	FY_DVR_DISKSTATE           struHardDiskStatic[64];		//Ӳ��״̬ ��SDK���33����
	FY_DVR_CHANNELSTATE		   struChanStatic[256];			//ͨ��״̬ ��SDK���64��
	DWORD                      byAlarmInStatic[96];			//��������ڵ�״̬��0-û�б�����1-�б��� 
	DWORD                      byAlarmOutStatic[96];		//��������ڵ�״̬��0-û�������1-�б������
	DWORD                      dwLocalDisplay;				//������ʾ״̬��0-������1-������
	BYTE                       byAudioChanStatus[16];		//��ʾ����ͨ����״̬��0-δʹ�ã�1-ʹ���У�0xff��Ч

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

//¼��ط�
typedef struct _tagRecordFileInfo
{  
	LONG	lUserID;			//�豸��¼ID
	HWND	hPlayerWnd;			//���Ŵ��ھ��
	char	srcfile[128];		//Դ�ļ�
	char	destfile[128];		//Ŀ���ļ���������

	_tagRecordFileInfo()
	{
		lUserID = 0;
		hPlayerWnd = NULL;
		memset(srcfile,0,sizeof(srcfile));
		memset(destfile,0,sizeof(destfile));
	}
}
FY_RecordFileInfo,*LPFY_RecordFileInfo;

//������Ϣ
typedef struct _tagALARMINFO
{  
	DWORD     dwAlarmType;						//�������ͣ� 0���ź��������� 1��Ӳ������ 2���źŶ�ʧ�� 3���ƶ���⣻ 4��Ӳ��δ��ʽ���� 5����дӲ�̳��� 6���ڵ������� 7����ʽ��ƥ�䣻 8���Ƿ����ʣ�
	DWORD     dwAlarmInputNumber;				//��������˿ڡ�����������Ϊ9ʱ�ñ�����ʾ����״̬��0��ʾ������0xffffffff��ʾ�쳣 
	DWORD     dwAlarmOutputNumber[64];			//�����ı�������˿ڡ�����������Ϊ�ź�������ʱ��ֵΪ1��ʾ�ñ����˿����
	DWORD     dwAlarmRelateChannel[256];		//������¼��ͨ��������������Ϊ�ź�������ʱ��ֵΪ1��ʾ��ͨ��¼����dwAlarmRelateChannel[0]��ʾ������1��ͨ��¼��
	DWORD     dwChannel[256];					//����������ͨ��������������Ϊ2��3��6ʱ��Ч����dwChannel[0]ֵΪ1��ʾ��1��ͨ������
	DWORD     dwDiskNumber[16];					//����������Ӳ�̡�����������Ϊ1��4��5ʱ��Ч��dwDiskNumber[0]ֵΪ1��ʾ1��Ӳ���쳣

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
//������Ϣ�ص�������lCommand��Ĭ��Ϊ0������������Ϣ��pAlarmer�����豸��Ϣ;pAlarmInfo������Ϣ;dwBufLen������Ϣ�����С;pUserData�û��Զ���
typedef int (*FYAlarmMessageCallBack)(LONG lCommand, FY_DVR_ALARMINFO *pAlarmer, char *pAlarmInfo, DWORD dwBufLen, void* pUserData);
//��Ƶ���ص�������ulVideoPlayHandle���������VideoBaseInfo��Ƶͷ��Ϣ��pVideoData��Ƶ���ݣ�iVideoDataLen��Ƶ���ݳ��ȣ�pUserData�û��Զ���
typedef int (*FYVideoDataCallBack)(FY_VideoBaseInfo VideoBaseInfo, BYTE* pVideoData, DWORD dwVideoDataLen, void* pUserData);



