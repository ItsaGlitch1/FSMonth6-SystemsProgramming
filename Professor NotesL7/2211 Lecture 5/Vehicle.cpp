#include "Vehicle.h"
#include <iostream>


Vehicle::Vehicle() // defualt constructor
{
	//std::cout << "Vehicle constructor" << std::endl;
	setModel("Unknown");
	setYear(-1);
}
Vehicle::Vehicle(const char* _model, int _year) // overloaded constructor
{
	//std::cout << "Vehicle constructor" << std::endl;
	setModel(_model);
	setYear(_year);
}

// assignment operator
Vehicle& Vehicle::operator=(const Vehicle& other)
{
	if (this != &other) // make sure not the same object
	{
		setModel(other.model); // does a deep copy for us ( news memory for pointer to point to )
		year = other.year;
	}

	return *this;
}


Vehicle::Vehicle(const Vehicle& other)
{
	// just call the assignment operator
	*this = other;

}
Vehicle::~Vehicle() // destructor
{
	delete[] model;
	//std::cout << "Vehicle destructor" << std::endl;
}

void Vehicle::setModel(const char* _model)
{
	if (model != nullptr) // if model already points to something
	{
		delete[] model;
	}
	// first need to find size of char array to new
	int length = strlen(_model) + 1; // add one of the null terminator
	// new char array for model to point to
	model = new char[length];
	// copy from _model to model
	strcpy_s(model,length,_model);
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
