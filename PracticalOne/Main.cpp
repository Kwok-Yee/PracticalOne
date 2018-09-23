#include "Worker.h"
#include "Bank.h"

int main()
{
	Worker* workers[4];
	workers[0] = new Worker("John", 500);
	workers[1] = new Worker("David", 800);
	workers[2] = new Worker("Thomas", 400);
	workers[3] = new Worker("Chris", 5000);
	Bank bank;

	for (int i = 0; i < 4; i++)
	{
		if (!bank.withdraw(*workers[i], workers[i]->getBalance()))
			cout << "There is not enough money for " << workers[i]->getName() << '\n';
		else
			cout << workers[i]->getBalance() << " dollars for " << workers[i]->getName() << '\n';
		cout << "Remaining balance of the bank is " << bank.getBalance() << '\n'<<'\n';
	}

	cin.get();
}