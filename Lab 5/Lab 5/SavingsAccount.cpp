#include "SavingsAccount.h"
#include <iostream>

void SavingsAccount::Withdraw(float amount)
{
	if (SavingsAccount::Withdraws > 3)
	{
		amount = 0; //can't withdraw anymore
		std::cout << "You've hit your withdraw limit.";
	}
	BaseAccount::Withdraw(amount);
}