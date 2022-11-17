#pragma once
class Vehicle
{
private:
	char* model = nullptr;

protected:
	int year = 2020;

public:
	
	Vehicle(); // defualt constructor
	Vehicle(const char* _model, int _year); // overload constructor

	// rule of 3
	// assignment operator
	Vehicle& operator=(const Vehicle& other);
	// copy constructor
	Vehicle(const Vehicle& other);

	~Vehicle(); // destructor
	// getters and setters
	void setModel(const char* _model);
	char* getModel();
	void setYear(int _year);
	int getYear() const;

	void Print(); // virtual function
};

