#pragma once

class BankProtected {
	int balance;
public:
	BankProtected()
	{
		balance = 5000;
	}
	bool withdraw(double amount)
	{
		if (amount > balance)
			return false;
		balance -= amount;
		return true;
	}
	int getBalance()
	{
		return balance;
	}
};