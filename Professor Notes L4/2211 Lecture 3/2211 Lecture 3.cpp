// 2211 Lecture 3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include "Helper.h"


// struct ( much like a class )
struct Person
{
	char name[32] = "Unknown";
	int age = -1;
};


int main()
{
	// include memory leak detection
	_CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF);
	_CrtSetBreakAlloc(-1); // set block of memory to find memory leak
	_CrtDumpMemoryLeaks();

	//int* iptr = new int(5);
	//std::cout << *iptr << std::endl;
	//delete iptr; // changes iptr value to invalid location
	//std::cout << *iptr << std::endl; // throws exception - trying to access invalid memory location

	//Person* pptr = new Person();
	//strcpy_s(pptr->name, "Jason");
	//pptr->age = 10;
	//std::cout << "name = " << pptr->name << " age = " << pptr->age << std::endl;
	//delete pptr;
	//pptr = nullptr; // set the pointer to nullptr so we know it doesn't point to anything valid

	//int size;
	//std::cin >> size;
	//char name[size]; // can not have a variable size array on the stack

	// application of new - dynamic arrays ( dynamically sized arrays )
	//char* name = Helper::setName("Jason");
	//std::cout << name << std::endl;
	//delete[] name; // delete[] for deleting newed arrays

	// vector
	/*std::vector<int> intvec;
	for (int i = 0; i < 5; i++)
	{
		intvec.push_back(i);
	}
	for (int i = 0; i < intvec.size(); i++)
	{
		std::cout << intvec[i] << std::endl;
	}*/

	std::vector<Person*> people;
	people.push_back(new Person());
	people.push_back(new Person());
	for (int i = 0; i < people.size(); i++)
	{
		std::cout << people[i]->name << " " << people[i]->age << std::endl;
	}
	for (int i = 0; i < people.size(); i++)
	{
		delete people[i];
	}

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
