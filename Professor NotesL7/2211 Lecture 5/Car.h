#pragma once
#include "Vehicle.h"
class Car : public Vehicle
{
private:
	int tires = 4;
public:
	Car();
	void setTires(int _tires);
	int getTires() const;

	void Print(); //override Print from Vehicle
};

