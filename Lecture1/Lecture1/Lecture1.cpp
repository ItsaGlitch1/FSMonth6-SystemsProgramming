// Lecture1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

void Print();

int main()
{
    //std::cout << "Hello World!\n";

    //int x = 74;
    //std::cout << x << std::endl;
    //std::cout << (char)x << std::endl;

   /* int array[10];
    for (int i = 0;i < 10; i++)
    {
        array[i] = i;
    }
    for (int i = 0; i < 10; i++)
    {
        std::cout << array[i] << std::endl;
    }*/
    //int y = 10;
    //if (y = 11)
    //{
    //    std::cout << "y = " << y << std::endl;
    //}

    Print();
    char name[32];
    std::cin >> name;
    std::cout << name << std::endl;

    int x;
    std::cin >> x;
    std::cout << x << std::endl;
    if (std::cin.fail()) //got unexpected error
    {
        std::cin.clear(); //clears any error flags
    }
    std::cin.ignore(INT_MAX, '\n'); //flushes out the buffer

}
void Print()
{
    std::cout << "Hello" << std::endl;
}