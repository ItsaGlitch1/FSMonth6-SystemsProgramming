// Lab 5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include "Helper.h"
#include "CheckingAccount.h"
#include "SavingsAccount.h"
#include "CreditAccount.h"

int main()
{
    int input = 0;
    float balance = 0;
    float cashInput = 0;
    std::vector<std::string> MenuOptions = {"1. Checking Account", "2. Savings Account", "3. Credit Account", "4. Quit"};
    std::vector<std::string> DepositOrWithdraw = {"1. Deposit", "2. Withdraw", "3. Back"};
    CheckingAccount checking;
    SavingsAccount savings;
    CreditAccount credit;
    
    while (input != 4)
    {
        system("CLS");
        input = Helper::Menu(MenuOptions);
        switch (input)
        {
        case 1: //checking
            input = 0;
            while (input != 3)
            {
                system("CLS");
                balance = checking.GetBalance();
                std::cout << "Checking Account\n" << "Balance: " << balance << '\n' << std::endl;

                input = Helper::Menu(DepositOrWithdraw);
                switch (input)
                {
                case 1: //deposit
                    std::cout << "How much money do you want to deposit?" << std::endl;
                    std::cin >> cashInput;
                    if (std::cin.fail())
                    {
                        std::cin.clear();
                    }
                    std::cin.ignore(INT_MAX, '\n');
                    checking.Deposit(cashInput);
                    std::cout << '$' << cashInput << " has been deposited." << std::endl;
                    std::cout << "\nPress Enter to continue.";
                    std::cin.get();
                    break;
                case 2: //withdraw
                    std::cout << "How much money do you want to withdraw?" << std::endl;
                    std::cin >> cashInput;
                    if (std::cin.fail())
                    {
                        std::cin.clear();
                    }
                    std::cin.ignore(INT_MAX, '\n');
                    checking.Withdraw(cashInput);
                    std::cout << '$' << cashInput << " has been withdrawn." << std::endl;
                    std::cout << "\nPress Enter to continue.";
                    std::cin.get();
                    break;
                case 3: //back
                    break;

                }
            }
            break;
        case 2: //savings
            input = 0;
            while (input != 3)
            {
                system("CLS");
                balance = savings.GetBalance();
                std::cout << "Savings Account\n" << "Balance: " << balance << '\n' << std::endl;

                input = Helper::Menu(DepositOrWithdraw);
                switch (input)
                {
                case 1: //deposit
                    std::cout << "How much money do you want to deposit?" << std::endl;
                    std::cin >> cashInput;
                    if (std::cin.fail())
                    {
                        std::cin.clear();
                    }
                    std::cin.ignore(INT_MAX, '\n');
                    savings.Deposit(cashInput);
                    std::cout << '$' << cashInput << " has been deposited." << std::endl;
                    std::cout << "\nPress Enter to continue.";
                    std::cin.get();
                    break;
                case 2: //withdraw
                    std::cout << "How much money do you want to withdraw?" << std::endl;
                    std::cin >> cashInput;
                    if (std::cin.fail())
                    {
                        std::cin.clear();
                    }
                    std::cin.ignore(INT_MAX, '\n');
                    savings.Withdraw(cashInput);
                    std::cout << '$' << cashInput << " has been withdrawn." << std::endl;
                    std::cout << "\nPress Enter to continue.";
                    std::cin.get();
                    break;
                case 3: //back
                    break;

                }
            }
            break;
        case 3: //credit
            input = 0;
            while (input != 3)
            {
                system("CLS");
                balance = credit.GetBalance();
                std::cout << "Credit Account\n" << "Balance: " << balance << '\n' << std::endl;

                input = Helper::Menu(DepositOrWithdraw);
                switch (input)
                {
                case 1: //deposit
                    std::cout << "How much money do you want to deposit?" << std::endl;
                    std::cin >> cashInput;
                    if (std::cin.fail())
                    {
                        std::cin.clear();
                    }
                    std::cin.ignore(INT_MAX, '\n');
                    credit.Deposit(cashInput);
                    std::cout << '$' << cashInput << " has been deposited." << std::endl;
                    std::cout << "\nPress Enter to continue.";
                    std::cin.get();
                    break;
                case 2: //withdraw
                    std::cout << "How much money do you want to withdraw?" << std::endl;
                    std::cin >> cashInput;
                    if (std::cin.fail())
                    {
                        std::cin.clear();
                    }
                    std::cin.ignore(INT_MAX, '\n');
                    credit.Withdraw(cashInput);
                    std::cout << '$' << cashInput << " has been withdrawn." << std::endl;
                    std::cout << "\nPress Enter to continue.";
                    std::cin.get();
                    break;
                case 3: //back
                    break;

                }
            }
            break;
        }
    }
}
