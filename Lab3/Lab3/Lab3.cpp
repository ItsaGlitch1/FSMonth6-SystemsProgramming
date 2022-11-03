// Lab3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
enum EnumColorDefinition {White = 1, Black, Silver, Red, Blue = 5};
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
void Program3();
void repaintCar(Car* ptrCar, EnumColorDefinition newcolor);
void printCar(Car c);
void printCarPointer(Car* ptrCar);
int main()
{
	srand(time(NULL));
	//Program 1
	std::cout << "Program 1" << std::endl;
	Program1();

	//Program 2.1
	std::cout << "Program 2" << std::endl;
	int P2 = 9;
	int* P2Point = &P2;
	Program2_1(P2, P2Point);

	//Program 2.2
	Program2_2();
	
	//Program 3
	std::cout << "Program 3" << std::endl;
	Program3();

	

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
void Program3()
{
	Car Cars[3]{};
	int color = 0;
	int input;
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

		std::cout << "What is the color for Car " << i + 1 << '?' << " (1. White, 2. Black, 3. Silver, 4. Red, 5. Blue)" << std::endl;
		std::cin >> color;
		if (std::cin.fail())
		{
			std::cin.clear();
		}
		std::cin.ignore(INT_MAX, '\n');
		if (color > 5 || color < 1)
		{
			color = 1;
		}
		Cars[i].Color = (EnumColorDefinition)color;
	}
	std::cout << "Printing Cars..." << std::endl;
	for (int i = 0; i < 3; i++)
	{
		std::cout << "Car " << (i + 1) << ": ";
		printCar(Cars[i]);
	}
	std::cout << "Printing Car Pointers..." << std::endl;
	for (int i = 0; i < 3; i++)
	{
		std::cout << "Car " << (i + 1) << ": ";
		printCarPointer(&Cars[i]);
	}


	std::cout << "Do you want to repaint a car? (1. Yes, 2. No)" << std::endl;
	std::cin >> input;
	if (std::cin.fail())
	{
		std::cin.clear();
	}
	std::cin.ignore(INT_MAX, '\n');
	if (input == 1)
	{
		std::cout << "which car do you want to repaint? (enter a number)" << std::endl;
		std::cin >> input;
		if (std::cin.fail())
		{
			std::cin.clear();
		}
		std::cout << "What do you want to paint it? (1. White, 2. Black, 3. Silver, 4. Red, 5. Blue)" << std::endl;
		std::cin >> color;
		if (std::cin.fail())
		{
			std::cin.clear();
		}
		std::cin.ignore(INT_MAX, '\n');
		if (color > 5 || color < 1)
		{
			color = 1;
		}
		if (input >= 1 && input <= 3)
			repaintCar(&Cars[input - 1], (EnumColorDefinition)color);
		
	}
}
void repaintCar(Car* ptrCar, EnumColorDefinition newcolor)
{
	ptrCar->Color = newcolor;
	switch (newcolor)
	{
	case 1:
		std::cout << "White " << ptrCar->Year << ' ' << ptrCar->Make << ' ' << ptrCar->Model << " with " << ptrCar->Mileage << " miles." << std::endl;
		break;
	case 2:
		std::cout << "Black " << ptrCar->Year << ' ' << ptrCar->Make << ' ' << ptrCar->Model << " with " << ptrCar->Mileage << " miles." << std::endl;
		break;
	case 3:
		std::cout << "Silver " << ptrCar->Year << ' ' << ptrCar->Make << ' ' << ptrCar->Model << " with " << ptrCar->Mileage << " miles." << std::endl;
		break;
	case 4:
		std::cout << "Red " << ptrCar->Year << ' ' << ptrCar->Make << ' ' << ptrCar->Model << " with " << ptrCar->Mileage << " miles." << std::endl;
		break;
	case 5:
		std::cout << "Blue " << ptrCar->Year << ' ' << ptrCar->Make << ' ' << ptrCar->Model << " with " << ptrCar->Mileage << " miles." << std::endl;
		break;
	}
}
void printCar(Car c)
{
	switch (c.Color)
	{
	case 1:
		std::cout << "White " << c.Year << ' ' << c.Make << ' ' << c.Model << " with " << c.Mileage << " miles." << std::endl;
		break;
	case 2:
		std::cout << "Black " << c.Year << ' ' << c.Make << ' ' << c.Model << " with " << c.Mileage << " miles." << std::endl;
		break;
	case 3:
		std::cout << "Silver " << c.Year << ' ' << c.Make << ' ' << c.Model << " with " << c.Mileage << " miles." << std::endl;
		break;
	case 4:
		std::cout << "Red " << c.Year << ' ' << c.Make << ' ' << c.Model << " with " << c.Mileage << " miles." << std::endl;
		break;
	case 5:
		std::cout << "Blue " << c.Year << ' ' << c.Make << ' ' << c.Model << " with " << c.Mileage << " miles." << std::endl;
		break;
	}
}
void printCarPointer(Car* ptrCar)
{
	switch (ptrCar->Color)
	{
	case 1:
		std::cout << "White " << ptrCar->Year << ' ' << ptrCar->Make << ' ' << ptrCar->Model << " with " << ptrCar->Mileage << " miles." << std::endl;
		break;
	case 2:
		std::cout << "Black " << ptrCar->Year << ' ' << ptrCar->Make << ' ' << ptrCar->Model << " with " << ptrCar->Mileage << " miles." << std::endl;
		break;
	case 3:
		std::cout << "Silver " << ptrCar->Year << ' ' << ptrCar->Make << ' ' << ptrCar->Model << " with " << ptrCar->Mileage << " miles." << std::endl;
		break;
	case 4:
		std::cout << "Red " << ptrCar->Year << ' ' << ptrCar->Make << ' ' << ptrCar->Model << " with " << ptrCar->Mileage << " miles." << std::endl;
		break;
	case 5:
		std::cout << "Blue " << ptrCar->Year << ' ' << ptrCar->Make << ' ' << ptrCar->Model << " with " << ptrCar->Mileage << " miles." << std::endl;
		break;
	}
}