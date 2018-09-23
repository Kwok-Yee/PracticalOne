#include "Time.h"
#include "CivilianTime.h"
#include "TwentyFourHourClockTime.h"
#include <iostream>

int main()
{
	Time* times[5];
	times[0] = new Time(16, 30); // 16:30
	times[1] = new CivilianTime(11, 30, true); // 11:30 PM
	times[2] = new CivilianTime(8, 30, false); // 8:30 AM
	times[3] = new TwentyFourHourClockTime(7, 30, false); // 19:30
	times[4] = new TwentyFourHourClockTime(12, 30, true); // 00:30

	for(Time* t : times)
	{
		t->tell();
	}

	cin.get();
	return 0;
}