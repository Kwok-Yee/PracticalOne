#pragma once
#include "DeviceFactory.h"
#include "iPhoneX.h"
#include "iPadAir2.h"

class AppleFactory : public DeviceFactory {
	Device* createMobileDevice()
	{
		return new iPhoneX;
	}
	Device* createTabletDevice()
	{
		return new iPadAir2;
	}
};