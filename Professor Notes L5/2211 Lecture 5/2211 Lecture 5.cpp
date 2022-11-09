// 2211 Lecture 5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Vehicle.h"
#include "Boat.h"

int main()
{
	// include memory leak detection
	_CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF);
	_CrtSetBreakAlloc(-1); // set block of memory to find memory leak
	_CrtDumpMemoryLeaks();

	// enums
	// reading in an enum - just cast read in int to that enum type
	//enum Color {Red, Green};
	//Color color;
	//int temp;
	//std::cin >> temp;
	//color = (Color)temp; // cast read in int to enum Color

	/*Vehicle vehicle;
	std::cout << vehicle.getModel() << " " << vehicle.getYear() << std::endl;
	vehicle.setModel("Chevy");
	std::cout << vehicle.getModel() << " " << vehicle.getYear() << std::endl;*/

	/*Vehicle vehicle2("Tesla", 2022);
	std::cout << vehicle2.getModel() << " " << vehicle2.getYear() << std::endl;*/

	/*Vehicle* vptr = new Vehicle();
	std::cout << vptr->getModel() << " " << vptr->getYear() << std::endl;
	delete vptr;*/

	Boat boat;
	boat.Print();


}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
