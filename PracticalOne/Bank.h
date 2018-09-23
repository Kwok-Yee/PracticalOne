#pragma once
#include "BankProtected.h"
#include "Worker.h"

class Bank
{
	BankProtected realBank;
public:
	bool withdraw(Worker &w, double amount)
	{
		if (w.getName() == "John" || w.getName() == "David" || w.getName() == "Thomas" || w.getName() == "Chris")
			return realBank.withdraw(amount);
		else
			return false;
	}
	int getBalance()
	{
		return realBank.getBalance();
	}
};