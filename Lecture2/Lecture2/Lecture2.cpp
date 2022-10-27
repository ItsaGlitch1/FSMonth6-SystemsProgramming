// Lecture2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <bitset>

void Print(unsigned int x); //func Prototype
int main()
{
	std::cout << "x" << std::endl;
	int x = 39;
	Print(x);
	//Left Shift
	//std::cout << "Left Shift" << std::endl;
	//x = x << 4;
	//Print(x);
	////Right Shift
	//std::cout << "Right Shift" << std::endl;
	//x = x >> 3;
	//Print(x);
	////NOT
	//std::cout << "NOT" << std::endl;
	//x = ~x;
	//Print(x);
	//AND
	std::cout << "y & AND" << std::endl;
	int y = 63;
	int z = x & y;
	Print(x);
	Print(y);
	Print(z);
	//OR
	std::cout << "OR" << std::endl;

	z = x | y;
	Print(x);
	Print(y);
	Print(z);

	//XOR
	std::cout << "Exclusive OR (XOR)" << std::endl;
	z = x ^ y;
	Print(x);
	Print(y);
	Print(z);
}
void Print(unsigned int x) //func implementation
{
	std::cout << "DEC: " << x << std::endl;
	std::cout << "HEX: " << std::hex << x << std::dec << std::endl;
	std::cout << "BIN: " << std::bitset<8>(x) << std::endl;
	std::cout << '\n';

}
