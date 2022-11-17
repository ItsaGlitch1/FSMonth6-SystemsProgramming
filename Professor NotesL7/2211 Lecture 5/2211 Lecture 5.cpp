// 2211 Lecture 5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include "Vehicle.h"
#include "Boat.h"
#include "Car.h"

void Print(Vehicle v)
{
	v.setModel("Chevy");
	v.Print();
}

int main()
{
	// include memory leak detection
	_CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF);
	_CrtSetBreakAlloc(-1); // set block of memory to find memory leak
	_CrtDumpMemoryLeaks();

	// virtual functionality
	//Vehicle* vptr = new Car(); // upcasting
	//vptr->Print(); // run time polymorphism ( calls Car Print because Vehicle print is virtual )
	////vptr->getTires(); // pointer is type Vehicle - can't call Car methods ( or members )
	//delete vptr;

	// without virtual functionality
	/*std::vector<Car> cars;
	Car car;
	for (int i = 0; i < 10; i++)
	{
		cars.push_back(car);
	}
	for (int i = 0; i < cars.size(); i++)
	{
		cars[i].Print();
	}
	std::vector<Boat> boats;
	Boat boat;
	for (int i = 0; i < 10; i++)
	{
		boats.push_back(boat);
	}
	for (int i = 0; i < boats.size(); i++)
	{
		boats[i].Print();
	}*/

	// with virtual functionality ( and upcasting )
	/*std::vector<Vehicle*> vehicles;
	vehicles.push_back(new Car());
	vehicles.push_back(new Boat());
	vehicles.push_back(new Car());

	for (int i = 0; i < vehicles.size(); i++)
	{
		vehicles[i]->Print();
	}
	for (int i = 0; i < vehicles.size(); i++)
	{
		delete vehicles[i];
	}*/

	// default = operator
	//Vehicle v1;
	//Vehicle v2;
	//v2.setModel("Tesla");
	//v2.setYear(2020);
	//v1.Print();
	//v2.Print();
	//v1 = v2;
	//// under the hood it does the assignment operator for each member variable
	//// v1.model = v2.model
	//// v1.year = v2.year
	//v1.Print();
	//v2.Print();

	Vehicle v4;
	Vehicle v5;
	v5.setModel("Ford");
	v4.Print();
	v5.Print();
	v4 = v5;
	v4.setModel("Tesla");
	v4.Print();
	v5.Print();

	// pass by copy ( calls the copy constructor )
	Print(v5);
	v5.Print();


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
