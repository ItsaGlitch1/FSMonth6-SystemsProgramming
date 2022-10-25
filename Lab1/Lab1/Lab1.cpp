// Lab1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <chrono>
#include <thread>

void wait_clear();
void part1();
void part2();
void part3();
int main()
{	

	part1();
	wait_clear();
	part2();
	wait_clear();
	part3();
}
void wait_clear()
{
	using namespace std::this_thread;
	using namespace std::chrono;

	std::cout << "\n";
	for (int i = 0; i < 5; i++)
	{
		std::cout << ".";
		sleep_for(seconds(1));
	}
	system("CLS");


}
void part1()
{
	std::cout << "Please enter your Initials:" << std::endl;
	char Initials[5];
	std::cin >> Initials;
	int age = 0;
	while (age == 0)
	{
		std::cout << "Please enter your age:" << std::endl;
		std::cin >> age;
		if (std::cin.fail())
		{
			std::cin.clear();
		}
		std::cin.ignore(INT_MAX, '\n');
	}
	age *= 365;
	std::cout << Initials << ", did you know you're at least " << age << " days old?" << std::endl;
}
void part2()
{
	int numbers[5];
	for (int i = 0; i < 5; i++)
	{
		std::cout << "Enter a number : " << std::endl;
		std::cin >> numbers[i];
		if (std::cin.fail())
		{
			std::cin.clear();
		}
		std::cin.ignore(INT_MAX, '\n');
	}
	std::cout << "You entered: ";
	for (int i = 0; i < 5; i++)
	{
		std::cout << numbers[i];
	}
	std::cout << std::endl;
}
void part3()
{
	int a;
	int b;
	int c;
	for (int i = 0; i < 3; i++)
	{
		switch (i)
		{
			case 0:
				std::cout << "Enter a number for a:" << std::endl;
				std::cin >> a;
				break;
			case 1:
				std::cout << "Enter a number for b:" << std::endl;
				std::cin >> b;
				break;
			case 2:
				std::cout << "Enter a number for c:" << std::endl;
				std::cin >> c;
				break;
		}
		if (std::cin.fail())
		{
			std::cin.clear();
			i--;
		}
		std::cin.ignore(INT_MAX, '\n');
			

	}
	int prob1 = a + 1 * b + 2 - c;
	int prob2 = (a + 1) * (b + 2) - c;
	std::cout << "\na + 1 * b + 2 - c = " << prob1 << std::endl;
	std::cout << "(a + 1) * (b + 2) - c = " << prob2 << std::endl;
}
