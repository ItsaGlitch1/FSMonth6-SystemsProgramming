#pragma once
class Vehicle
{
private:
	char model[32];

protected:
	int year = 2020;

public:
	
	Vehicle(); // defualt constructor
	Vehicle(const char* _model, int _year); // overload constructor
	~Vehicle(); // destructor
	// getters and setters
	void setModel(const char* _model);
	char* getModel();
	void setYear(int _year);
	int getYear() const;

	void Print();
};

