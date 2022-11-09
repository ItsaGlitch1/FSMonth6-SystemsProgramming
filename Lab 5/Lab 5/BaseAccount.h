#pragma once
class BaseAccount
{
protected:
	float AccountBallance = 0;
	int Withdraws = 0;
public:
	void Withdraw(float amount);
	void Deposit(float amount);
	float GetBalance() const;
};

