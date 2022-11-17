#include "Car.h"
#include <iostream>


Car::Car()
{
	setModel("Ford");
	setYear(2010);
}

void Car::setTires(int _tires)
{
	tires = _tires;
}
int Car::getTires() const
{
	return tires;
}

void Car::Print() //override Print from Vehicle
{
	std::cout << getTires() << " ";
	Vehicle::Print(); // call base class Print();
}
