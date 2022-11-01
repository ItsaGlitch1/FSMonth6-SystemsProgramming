// Lab2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

unsigned int bitField = 0;

void TurnOn(int bit);
void TurnOff(int bit);
void Toggle(int bit);
void Negate();
void LeftShift();
void RightShift();
void Print(unsigned int num, int size);
int Input();

int main()
{
    int pick = 0;
    int bit = 0;

    std::cout << "Type a number." << std::endl;
    bitField = Input();

    while (pick != 7)
    {
        Print(bitField, 32);
        std::cout << "\nPick an Option: 1. Turn On  2. Turn Off  3. Toggle  4. Negate  5. Left Shift  6. Right Shift  7. Exit\n" << std::endl;
        std::cin >> pick;
        if (std::cin.fail())
            std::cin.clear();
        std::cin.ignore(INT_MAX, '\n');

        switch (pick)
        {
        default:
            std::cout << "That is not a Valid Option." << std::endl;
            break;
        case 1:
            //On
            std::cout << "Choose bit(s) to turn on." << std::endl;
            TurnOn(Input());
            break;
        case 2:
            //Off
            std::cout << "Choose bit(s) to turn off." << std::endl;
            TurnOff(Input());
            break;
        case 3:
            //Toggle
            std::cout << "Choose bit(s) to toggle." << std::endl;
            Toggle(Input());
            break;
        case 4:
            //Negate
            Negate();
            break;
        case 5:
            //Left
            LeftShift();
            break;
        case 6:
            //Right
            RightShift();
            break;
        case 7:
            //exit
            break;
        }
    }
}
void TurnOn(int bit)
{
    bitField = bitField | bit;
}
void TurnOff(int bit)
{
    bitField = bitField & ~bit;
}
void Toggle(int bit)
{
    bitField = bitField ^ bit;
}
void Negate()
{
    bitField = ~bitField;
}
void LeftShift()
{
    bitField =  bitField << 1;
}
void RightShift()
{
    bitField = bitField >> 1;
}
void Print(unsigned int num, int size)
{
    std::cout << "bitField: " << bitField << std::endl;
    std::cout << "Bits: ";
    char* text = new char[size + 1];
    text[size] = '\0';
    for (int i = size - 1; i >= 0; i--)
    {
        if (num % 2 == 0)
            text[i] = '0';

        else
            text[i] = '1';
        num /= 2;
    }
    std::cout << text << std::endl;
    delete[] text;
}
int Input()
{
    bool intcheck = false;
    int input = 0;
    while (intcheck == false)
    {
        std::cin >> input;
        if (std::cin.fail())
        {
            std::cin.clear();
            std::cout << "Type a number." << std::endl;
        }
        else
            intcheck = true;
        std::cin.ignore(INT_MAX, '\n');
    }
    return input;
}