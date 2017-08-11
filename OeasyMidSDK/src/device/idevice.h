#ifndef _DEVICE_IDEVICE__H
#define _DEVICE_IDEVICE__H
#include "cameradefine.h"
#include "intercomdefine.h"
#include "alarmhostdefine.h"
#include "OeasyMidSdk.h"
using namespace OeasyMidIPC;

typedef long CameraId;
typedef long LiveplayHandle;
class IDevice
{
public:
	/****************************camera method  begin*********************************************/
	virtual _CAMERATYPE getCameraType() = 0;
	virtual CameraId loginCamera(_OEASY_LOGINFO loginfo, _OEASY_LOGIN_RESULTINFO resultInfo) = 0;
	virtual OEASY_S32 logoutCamera() = 0;
	virtual void setLiveDataCB( LIVEDATACALLBACK videoDataCB, void *pUser ) = 0;
	virtual LiveplayHandle openVideo(_STREAMTYPE streamtype, OEASY_BOOL bstartsms = OEASY_FALSE, OEASY_CHAR* mediaserverurl = "") = 0;
	virtual OEASY_BOOL closeVideo(LiveplayHandle handle) = 0;

	

	/****************************camera method  end**********************************************/



	virtual OEASY_BOOL release() = 0;
};

#endif //_DEVICE_IDEVICE__H