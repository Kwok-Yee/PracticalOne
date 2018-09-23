#pragma once
#include "TimeImplementation.h"
#include <string>

class CivilianTimeImplementation : public TimeImplementation
{
public:
	CivilianTimeImplementation(int hr, int min, bool pm) : TimeImplementation(hr, min)
	{
		if (pm)
			strcpy_s(message, " PM");
		else
			strcpy_s(message, " AM");
	}
	void tell()
	{
		cout << "time is " << hour << ":" << minute << message << endl;
	}
protected:
	char message[5];
};