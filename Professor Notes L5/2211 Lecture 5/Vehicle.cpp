#include "Vehicle.h"
#include <iostream>


Vehicle::Vehicle() // defualt constructor
{
	std::cout << "Vehicle constructor" << std::endl;
	setModel("Ford");
	setYear(2020);
}
Vehicle::Vehicle(const char* _model, int _year) // overloaded constructor
{
	std::cout << "Vehicle constructor" << std::endl;
	setModel(_model);
	setYear(_year);
}

Vehicle::~Vehicle() // destructor
{
	std::cout << "Vehicle destructor" << std::endl;
}

void Vehicle::setModel(const char* _model)
{
	strcpy_s(model, _model);
}

char* Vehicle::getModel()
{
	return model;
}

void Vehicle::setYear(int _year)
{
	year = _year;
}
int Vehicle::getYear() const // const after function makes invoking object const
{
	//getModel(); // can't call method - invoking object is const
	//year = 10; // can't modify member variable - invoking object is const
	return year;
}


void Vehicle::Print()
{
	std::cout << getModel() << " " << getYear() << std::endl;
}
