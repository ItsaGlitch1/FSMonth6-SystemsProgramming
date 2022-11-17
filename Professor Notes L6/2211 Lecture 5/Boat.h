#pragma once
#include "Vehicle.h"
class Boat : public Vehicle
{
private:
	int props;

public:
	Boat(); // default constructor
	~Boat(); // destructor
	// getters and setters
	void setProps(int _props);
	int getProps();

	void Print(); // override the Print function in the base class ( Vehicle )
};

