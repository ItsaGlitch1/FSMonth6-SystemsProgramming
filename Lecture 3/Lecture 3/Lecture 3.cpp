// Lecture 3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

void PassbyValue(int _x);
void PassbyRef(int& _xref);
int main()
{
	int x = 5;
	PassbyValue(x);
	//std::cout << x << '\t' << &x << std::endl;
	int& xref = x;
	PassbyRef(xref);
	/*std::cout << xref << '\t' << &xref << std::endl;*/
	int* xpoint = &x;

}

void PassbyValue(int _x)
{
	_x = _x + 3;
	std::cout << _x << '\t' << &_x << std::endl;

}

void PassbyRef(int& _xref)
{
	_xref = _xref + 3;
	std::cout << _xref << '\t' << &_xref << std::endl;
}
