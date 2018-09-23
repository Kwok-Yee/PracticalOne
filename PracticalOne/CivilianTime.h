#pragma once
#include "Time.h"
#include "CivilianTimeImplementation.h"

class CivilianTime : public Time {
public:
	CivilianTime(int hr, int min, bool pm) {
		implementation = new CivilianTimeImplementation(hr, min, pm);
	}
};