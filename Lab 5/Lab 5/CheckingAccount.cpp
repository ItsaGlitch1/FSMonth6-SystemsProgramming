#include "CheckingAccount.h"
#include <iostream>

void CheckingAccount::Withdraw(float amount)
{
	if (CheckingAccount::Withdraws > 10)
	{
		amount += 5; //fee
		std::cout << "You've gone over your withdraw limit. You can still withdraw money, but a $5 fee will be taken from your account.";
	}
	BaseAccount::Withdraw(amount);
}