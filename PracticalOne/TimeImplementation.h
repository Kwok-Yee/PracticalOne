#pragma once
#include <iostream>

using namespace std;

class TimeImplementation
{
public:
	TimeImplementation(int hr, int min)
	{
		hour = hr;
		minute = min;
	}
	virtual void tell()
	{
		cout << "time is " << hour << ":" << minute << endl;
	}
protected:
	int hour, minute;
};