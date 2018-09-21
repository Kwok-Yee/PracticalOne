#include "Device.h"
#include "DeviceFactory.h"
#include "SamsungFactory.h"
#include "AppleFactory.h"

int main() 
{
	DeviceFactory* samsungFactory = new SamsungFactory;
	DeviceFactory* appleFactory = new AppleFactory;

	Device* samsungPhone = samsungFactory->createMobileDevice();
	Device* samsungTablet = samsungFactory->createTabletDevice();

	Device* applePhone = appleFactory->createMobileDevice();
	Device* appleTablet = appleFactory->createTabletDevice();

	samsungPhone->draw();
	samsungTablet->draw();

	applePhone->draw();
	appleTablet->draw();
	
	cin.get();
}