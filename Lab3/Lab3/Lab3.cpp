// Lab3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
enum EnumColorDefinition {White = 1, Black, Silver, Red, Blue};
struct Car
{
	char Make[32];
	char Model[32];
	int Year;
	int Mileage;
	EnumColorDefinition Color;
};

void Program1();
void Program2_1(int value, int* pointer);
void Program2_2();
void Program3_1();
int main()
{
	srand(time(NULL));
	std::cout << "Program 1" << std::endl;
	Program1();

	std::cout << "Program 2.1" << std::endl;
	int P2 = 9;
	int* P2Point = &P2;
	Program2_1(P2, P2Point);

	std::cout << "Program 2.2" << std::endl;
	Program2_2();

	std::cout << "Program 3.1" << std::endl;
	Program3_1();

}
void Program1()
{
	int numbers[15];
	for (int i = 0; i < 15; i++)
	{
		numbers[i] = rand();
		std::cout << numbers[i] << '\t' << &numbers[i] << std::endl;
	}
}
void Program2_1(int value, int* pointer)
{
	std::cout << value << '\t' << pointer << std::endl;
}
void Program2_2()
{
	int numbers[15];
	for (int i = 0; i < 15; i++)
	{
		numbers[i] = rand();
		int* Arraypoint = &numbers[i];
		Program2_1(numbers[i], Arraypoint);
	}
}
void Program3_1()
{
	Car Cars[3];
	for (int i = 0; i < 3; i++)
	{
		std::cout << "What is the make for Car " << i + 1 << '?' << std::endl;
		std::cin.getline(Cars[i].Make, 32);

		std::cout << "What is the model for Car " << i + 1 << '?' << std::endl;
		std::cin.getline(Cars[i].Model, 32);

		std::cout << "What is the year for Car " << i + 1 << '?' << std::endl;
		std::cin >> Cars[i].Year;
		if (std::cin.fail())
		{
			std::cin.clear();
		}
		std::cin.ignore(INT_MAX, '\n');

		std::cout << "What is the mileage for Car " << i + 1 << '?' << std::endl;
		std::cin >> Cars[i].Mileage;
		if (std::cin.fail())
		{
			std::cin.clear();
		}
		std::cin.ignore(INT_MAX, '\n');

		int color = 0;
		std::cout << "What is the color for Car " << i + 1 << '?' << " (1. White, 2. Black, 3. Silver, 4. Red, 5. Blue)" << std::endl;
		std::cin >> color;
		if (std::cin.fail())
		{
			std::cin.clear();
			color = 1;
		}
		std::cin.ignore(INT_MAX, '\n');
		Cars[i].Color = (EnumColorDefinition)color;
	}
	for (int i = 0; i < 3; i++)
	{
		std::cout << "Here are the cars you made:" << std::endl;
		switch (Cars[i].Color)
		{
		case 1:
			std::cout << "Car " << (i + 1) << ": " << "White " << Cars[i].Year << ' ' << Cars[i].Make << ' ' << Cars[i].Model << " with " << Cars[i].Mileage << " miles." << std::endl;
			break;
		case 2:
			std::cout << "Car " << (i + 1) << ": " << "Black " << Cars[i].Year << ' ' << Cars[i].Make << ' ' << Cars[i].Model << " with " << Cars[i].Mileage << " miles." << std::endl;
			break;
		case 3:
			std::cout << "Car " << (i + 1) << ": " << "Silver " << Cars[i].Year << ' ' << Cars[i].Make << ' ' << Cars[i].Model << " with " << Cars[i].Mileage << " miles." << std::endl;
			break;
		case 4:
			std::cout << "Car " << (i + 1) << ": " << "Red " << Cars[i].Year << ' ' << Cars[i].Make << ' ' << Cars[i].Model << " with " << Cars[i].Mileage << " miles." << std::endl;
			break;
		case 5:
			std::cout << "Car " << (i + 1) << ": " << "White " << Cars[i].Year << ' ' << Cars[i].Make << ' ' << Cars[i].Model << " with " << Cars[i].Mileage << " miles." << std::endl;
			break;
		}




	}
}