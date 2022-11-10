// Lab 5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>
#include <vector>
#include "Helper.h"
#include "CheckingAccount.h"
#include "SavingsAccount.h"
#include "CreditAccount.h"

CheckingAccount checking;
SavingsAccount savings;
CreditAccount credit;


void TextInput();
void TextOutput();
int main()
{
    int input = 0;
    float cashInput = 0;
    std::vector<std::string> MenuOptions = {"1. Checking Account", "2. Savings Account", "3. Credit Account", "4. Save & Quit"};
    std::vector<std::string> DepositOrWithdraw = {"1. Deposit", "2. Withdraw", "3. Back"};
    TextInput();
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
                std::cout << "Checking Account\n" << "Balance: $" << checking.GetBalance() << '\n' << std::endl;

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
                std::cout << "Savings Account\n" << "Balance: $" << savings.GetBalance() << '\n' << std::endl;

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
                std::cout << "Credit Account\n" << "Balance: $" << credit.GetBalance() << '\n' << std::endl;

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
        case 4:
            TextOutput();
            break;
        }
    }
}
void TextOutput()
{
    std::ofstream output;
    output.open("Balance.txt");
    if (output.is_open())
    {
        output << "checking" << '\t' << checking.GetBalance() << std::endl;
        output << "savings" << '\t' << savings.GetBalance() << std::endl;
        output << "credit" << '\t' << credit.GetBalance() << std::endl;
        output.close();
    }
    else
    {
        std::cout << "ERROR: Could not save Balance." << std::endl;
    }
}
void TextInput()
{
    char AccountName[32];
    float Balance;
    std::ifstream input;
    input.open("Balance.txt");
    if (input.is_open())
    {
        for (int i = 0; i < 3; i++)
        {
            input.getline(AccountName, INT_MAX, '\t');
            input >> Balance;
            input.ignore(FLT_MAX, '\n');

            if (i == 0)
                checking.Deposit(Balance);
            else if (i == 1)
                savings.Deposit(Balance);
            else if (i == 2)
                credit.Deposit(Balance);
            else
                std::cout << "Something went wrong with " << AccountName << std::endl;
        }
        input.close();
    }
}