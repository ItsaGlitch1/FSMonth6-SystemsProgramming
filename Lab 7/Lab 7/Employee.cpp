#include "Employee.h"
#include <iostream>

void Employee::SetSalary(int _salary)
{
	salary = _salary;
}
void Employee::DisplayRecord()
{
	std::cout << GetName() << " $" << salary << std::endl;
}