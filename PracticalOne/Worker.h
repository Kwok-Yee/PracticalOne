#pragma once
#include <string>
#include <iostream>

using namespace std;

class Worker {
public:
	Worker(string n, double b)
	{
		name = n;
		balance = b;
	}
	string getName() { return name; };
	double getBalance() { return balance; };
protected:
	string name = ""; 
	double balance = 0;
};