#include "BaseAccount.h"

void BaseAccount::Withdraw(float amount)
{
	BaseAccount::AccountBallance -= amount;
	BaseAccount::Withdraws++;
}
void BaseAccount::Deposit(float amount)
{	
	BaseAccount::AccountBallance += amount;
}
float BaseAccount::GetBalance() const
{
	return BaseAccount::AccountBallance;
}