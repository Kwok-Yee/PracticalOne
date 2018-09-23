#pragma once
#include "TimeImplementation.h"
#include <string>

class TwentyFourHourClockTimeImplementation : public TimeImplementation
{
public:
	TwentyFourHourClockTimeImplementation(int hr, int min, bool evening) : TimeImplementation(hr, min)
	{
		if (hr < 12 && evening)
			correction = 12;
		else if (hr == 12 && evening)
			correction = -12;
	}
	void tell()
	{
		cout << "time is " << hour + correction << ":" << minute << endl;
	}
private:
	int correction = 0;
};