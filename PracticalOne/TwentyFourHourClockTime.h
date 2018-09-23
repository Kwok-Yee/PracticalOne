#pragma once
#include "Time.h"
#include "TwentyFourHourClockTimeImplementation.h"

class TwentyFourHourClockTime : public Time {
public:
	TwentyFourHourClockTime(int hr, int min, bool evening) {
		implementation = new TwentyFourHourClockTimeImplementation(hr, min, evening);
	}
};