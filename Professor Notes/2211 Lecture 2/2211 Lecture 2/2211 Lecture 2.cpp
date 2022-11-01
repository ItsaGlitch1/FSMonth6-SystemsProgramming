// 2211 Lecture 2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <bitset>
#include "Console.h"

unsigned int bitField = 19; // globally declared variable

void Print(unsigned int x); // function prototype
void TurnOn(int bit);

int main()
{
	/*int x = 39;
	Print(x);*/

	//// Left Shift
	//int x = 39;
	//Print(x);
	//x = x << 1;
	//Print(x);

	//// Right Shift
	//int x = 39;
	//Print(x);
	//x = x >> 3;
	//Print(x);

	//// NOT
	//int x = 39;
	//Print(x);
	//x = ~x;
	//Print(x);

	//// AND
	/*int x = 149;
	Print(x);
	int y = 163;
	Print(y);
	int z = x & y;
	Print(z);*/

	//// OR
	/*int x = 149;
	Print(x);
	int y = 163;
	Print(y);
	int z = x | y;
	Print(z);*/

	// XOR
	/*int x = 149;
	Print(x);
	int y = 163;
	Print(y);
	int z = x ^ y;
	Print(z);*/


	// Bit Flags ( example of using bit manipulation )
	const unsigned char isHungry =	1 << 0; // 0000 0001
	const unsigned char isSad =		1 << 1; // 0000 0010
	const unsigned char isMad =		1 << 2; // 0000 0100
	const unsigned char isHappy =	1 << 3; // 0000 1000
	const unsigned char isLaughing =1 << 4; // 0001 0000
	const unsigned char isAsleep =	1 << 5; // 0010 0000
	const unsigned char isDead =	1 << 6; // 0100 0000
	const unsigned char isCrying =	1 << 7; // 1000 0000

	unsigned char me = 0; // all flags/options turned off to start

	me = me | isHappy | isLaughing; // I am happy and laughing
	// me			0000 0000
	// isHappy		0000 1000
	// isLaughing	0001 0000
	//-----------------------
	// me			0001 1000
	Print(me);

	me = me & ~isLaughing; // I am no longer laughing
	// me			0001 1000
	// ~isLaughing	1110 1111
	//-----------------------
	// me			0000 1000
	Print(me);

	// Query a few states (we'll use static_cast<bool> to interpret the results as a 
	// boolean value rather than an integer)
	std::cout << "I am happy? " << static_cast<bool>(me & isHappy) << '\n';
	// me			0000 1000
	// isHappy		0000 1000
	//-----------------------
	//				0000 1000

	std::cout << "I am laughing? " << static_cast<bool>(me & isLaughing) << '\n';
	// me			0000 1000
	// isLaughing	0001 0000
	//-----------------------
	//				0000 0000

	// Console
	System::Console::SetCursorPosition(4, 5);
	std::cout << "Hello" << std::endl;


}

void Print(unsigned int x) // function implementation
{
	std::cout << "DEC: " << x << "\t";
	std::cout << "HEX: " << std::hex << x << std::dec << "\t";
	std::cout << "BIN: " << std::bitset<8>(x) << std::endl;
}


void TurnOn(int bit)
{
	// pretend bit passed int in 2
	// bitfield		0001 0011
	//|				0000 0100 (1<<bit)
	//-----------------------
	//				0001 0111
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
