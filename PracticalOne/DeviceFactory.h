#pragma once

class DeviceFactory {
public:
	virtual Device* createMobileDevice() = 0;
	virtual Device* createTabletDevice() = 0;
};