#pragma once
#include "TimeImplementation.h"

class Time {
public:
	Time() {}
	Time(int hr, int min) {
		implementation = new TimeImplementation(hr, min);
	}
	virtual void tell() {
		implementation->tell();
	}
protected:
	TimeImplementation* implementation;
};