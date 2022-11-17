#include "Boat.h"
#include <iostream>


Boat::Boat() // default constructor
{
	setModel("Yacht");
	setYear(2020);
	setProps(2);
	//std::cout << "Boat constructor" << std::endl;
}
Boat::~Boat() // destructor
{
	//std::cout << "Boat destructor" << std::endl;
}

void Boat::setProps(int _props)
{
	props = _props;
}

int Boat::getProps()
{
	return props;
}


void Boat::Print() // override the Print function in the base class ( Vehicle )
{
	std::cout << getProps() << " ";
	Vehicle::Print(); // call base class Print();
}
