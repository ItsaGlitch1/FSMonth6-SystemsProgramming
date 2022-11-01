// Lab1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <time.h>

void part1();
void part2();
void part3();
void part4();
void part5();
void part6();
void part7();
void part8();
void part9();
void part10();
int main()
{	

	part1();
	std::cout << "\n\n";
	part2();
	std::cout << "\n\n";
	part3();
	std::cout << "\n\n";
	part4();
	std::cout << "\n\n";
	part5();
	std::cout << "\n\n";
	part6();
	std::cout << "\n\n";
	part7();
	std::cout << "\n\n";
	part8();
	std::cout << "\n\n";
	part9();
	std::cout << "\n\n";
	part10();
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
void part4()
{
	std::cout << "Short: " << SHRT_MIN << " - " << SHRT_MAX << std::endl;
	std::cout << "UShort: " << 0 << " - " << USHRT_MAX << std::endl;
	std::cout << "Int: " << INT_MIN << " - " << INT_MAX << std::endl;
	std::cout << "UInt: " << 0 << " - " << UINT_MAX << std::endl;
	std::cout << "LongLong: " << LLONG_MIN << " - " << LLONG_MAX << std::endl;
	std::cout << "ULongLong: " << 0 << " - " << ULLONG_MAX << std::endl;
}
void part5()
{
	char FullName[32];
	std::cout << "What is your Full Name?" << std::endl;
	std::cin.getline(FullName, 32);
	std::cout << "Hi " << FullName << ", did you know, you are a cool person?" << std::endl;
}
void part6()
{
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
	if (age < 16)
		std::cout << "You are too young, goodbye." << std::endl;
	else if (age == 16)
		std::cout << "Old enough to drive, but can't drink or vote." << std::endl;
	else if (age == 18)
		std::cout << "Can drive, can vote, can enlist in the military, but still can't drink." << std::endl;
	else if (age == 21)
		std::cout << "Did you know, in almost every other country, the drinking age is 18? Thats 3 years you've missed out on!" << std::endl;
	else
		std::cout << "Do you still live with your parents? If you do, thats pretty sad." << std::endl;
}
void part7()
{
	int number = 0;

	std::cout << "Enter an even number:" << std::endl;
	std::cin >> number;
	if (std::cin.fail())
	{
		std::cin.clear();
		number = 1;
	}
	std::cin.ignore(INT_MAX, '\n');
	if (number % 2 == 0)
		std::cout << "Nice!" << std::endl;
	else
		std::cout << "Thats not even :(" << std::endl;

}
void part8()
{
	int divisor = 0;
	int random = 0;
	bool intcheck = false;
	srand(time(0));
	while (intcheck == false)
	{
		std::cout << "Enter a divisor:" << std::endl;
		std::cin >> divisor;
		if (std::cin.fail())
		{
			std::cin.clear();
		}
		else
		{
			intcheck = true;
		}
		std::cin.ignore(INT_MAX, '\n');
	}
	for (int i = 0; i < 3; i++)
	{
		random = rand();
		std::cout << random << '\t';
		if (random % divisor == 0)
			std::cout << "is evenly divisable by " << divisor << std::endl;
		else
			std::cout << "is not evenly divisable by " << divisor << std::endl;

	}

}
void part9()
{
	enum Colors {Red = 1, Orange, Yellow, Green, Purple};
	Colors color;
	int colornumber;
	bool intcheck = false;
	while (intcheck == false)
	{
		std::cout << "Pick a Popcicle Color: (Enter a number 1-5) \n1. Red\n2. Orange\n3. Yellow\n4. Green\n5. Purple" << std::endl;
		std::cin >> colornumber;
		if (std::cin.fail())
		{
			std::cin.clear();
		}
		std::cin.ignore(INT_MAX, '\n');
		if (colornumber >= 1 && colornumber <= 5)
			intcheck = true;
	}
	color = (Colors)colornumber;
	switch (color)
	{
	case Colors::Red:
		std::cout << "You picked Cherry Flavor." << std::endl;
		break;
	case Colors::Orange:
		std::cout << "You picked Orange Flavor." << std::endl;
		break;
	case Colors::Yellow:
		std::cout << "You picked Lemon Flavor." << std::endl;
		break;
	case Colors::Green:
		std::cout << "You picked Lime Flavor." << std::endl;
		break;
	case Colors::Purple:
		std::cout << "You picked Grape Flavor." << std::endl;
		break;
	}


}
void part10()
{
	srand(time(0));
	int input = 0;
	while (input == 0)
	{
		std::cout << "Pick a Difficulty: (Enter a number 1-3) \n1. Easy\n2. Normal\n3. Hard" << std::endl;
		std::cin >> input;
		if (std::cin.fail())
		{
			std::cin.clear();
		}
		std::cin.ignore(INT_MAX, '\n');
	}
	switch (input)
	{
	case 1:
		std::cout << "You picked Easy.\nYou will have to fight " << rand() % 6 + 5 << " enemies." << std::endl;
		break;
	case 2:
		std::cout << "You picked Normal.\nYou will have to fight " << rand() % 12 + 8 << " enemies." << std::endl;
		break;
	case 3:
		std::cout << "You picked Hard.\nYou will have to fight " << rand() % 21 + 9 << " enemies." << std::endl;
		break;
	}
}