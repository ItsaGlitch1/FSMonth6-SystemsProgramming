#pragma once
#include "BaseAccount.h"
class CreditAccount :
    public BaseAccount
{
private:
    int AmountSpent = 0;
    const int limit = 40;
public:
    void Withdraw(float amount);
};

