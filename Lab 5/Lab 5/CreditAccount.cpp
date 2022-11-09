#include "CreditAccount.h"
#include <iostream>

void CreditAccount::Withdraw(float amount)
{
	CreditAccount::AmountSpent += (int)amount;
	if (CreditAccount::AmountSpent > 40)
	{
		amount += 5000; //over the limit fee
		std::cout << "You've gone over your spending limit. A $5000 fee will be taken from your account.";
	}
	BaseAccount::Withdraw(amount);
}