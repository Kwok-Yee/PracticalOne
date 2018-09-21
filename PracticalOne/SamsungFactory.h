#pragma once
#include "DeviceFactory.h"
#include "SamsungGalaxyS9.h"
#include "SamsungGalaxyTab2.h"

class SamsungFactory : public DeviceFactory {
	Device* createMobileDevice()
	{
		return new SamsungGalaxyS9;
	}
	Device* createTabletDevice()
	{
		return new SamsungGalaxyTab2;
	}
};