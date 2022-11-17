// 2211 Lecture 5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>
#include <vector>
#include "Vehicle.h"
#include "Boat.h"

void TextOutput(Boat& boat);
void TextInput(Boat& boat);

void BinOutput(std::vector<Boat>& boats);
void BinInput(std::vector<Boat>& boats);

int main()
{
	// include memory leak detection
	_CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF);
	_CrtSetBreakAlloc(-1); // set block of memory to find memory leak
	_CrtDumpMemoryLeaks();

	// Text Output
	/*Boat boat;
	boat.setModel("HugeBoat");
	boat.setYear(2022);
	boat.Print();
	TextOutput(boat);*/

	// Text Input
	/*Boat boat;
	boat.Print();
	TextInput(boat);
	boat.Print();*/

	// Binary Output
	/*std::vector<Boat> boats;
	Boat boat;
	for (int i = 0; i < 10; i++)
	{
		boat.setModel("BigBoat");
		boat.setYear(2000 + i);
		boats.push_back(boat);
	}
	for (int i = 0; i < boats.size(); i++)
	{
		boats[i].Print();
	}
	BinOutput(boats);*/

	// Binary Input
	std::vector<Boat> boats;
	BinInput(boats);
	for (int i = 0; i < boats.size(); i++)
	{
		boats[i].Print();
	}


}


void TextOutput(Boat& boat)
{
	// instantiate an object of type ofstream
	std::ofstream outfile;
	// open the file
	outfile.open("output.txt"); // text file and truncate ( erase existing in file and replace )
	// check to see if the file opened ok
	if (outfile.is_open())
	{
		// do stuff with the file
		outfile << boat.getModel() << std::endl;
		outfile << boat.getYear() << std::endl;
		outfile << boat.getProps() << std::endl;
		// close the file
		outfile.close();
	}
	else
	{
		std::cout << "File did not open" << std::endl;
	}
}


void TextInput(Boat& boat)
{
	std::ifstream infile;
	infile.open("output.txt");
	if (infile.is_open())
	{
		// make a temp varaible to read in from the file
		char temp[32];
		infile.getline(temp,32); // read in the model from file using getline
		boat.setModel(temp);
		// make a temp to read in integers
		int temp2;
		infile >> temp2; // read in the year
		boat.setYear(temp2);
		infile >> temp2; // read in the props
		boat.setProps(temp2);

		infile.close();
	}
	else
	{
		std::cout << "File did not open" << std::endl;
	}
}


void BinOutput(std::vector<Boat>& boats)
{
	std::ofstream outfile;
	outfile.open("output.bin", std::ios_base::binary);
	if (outfile.is_open())
	{
		// write the number of boats to the file
		int numboats = boats.size();
		outfile.write((char*)&numboats, sizeof(int));
		// write in binary the array inside the vector all at once
		// O(1)
		outfile.write((char*)&boats[0], boats.size() * sizeof(Boat));
		outfile.close();
	}
	else
	{
		std::cout << "File did not open" << std::endl;
	}
}


void BinInput(std::vector<Boat>& boats)
{
	std::ifstream infile;
	infile.open("output.bin", std::ios_base::binary);
	if (infile.is_open())
	{
		// read in the number of boats
		int numboats;
		infile.read((char*)&numboats, sizeof(int));
		// resize the vector to the number of boats ( allocate the memory for the array inside the vector )
		boats.resize(numboats);
		// write in binary the array inside the vector all at once
		// O(1)
		infile.read((char*)&boats[0], boats.size() * sizeof(Boat));
		infile.close();
	}
	else
	{
		std::cout << "File did not open" << std::endl;
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
