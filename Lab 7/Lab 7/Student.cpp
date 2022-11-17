#include "Student.h"
#include <iostream>

void Student::SetGPA(float _gpa)
{
	GPA = _gpa;
}

void Student::DisplayRecord()
{
	std::cout << GetName() << " GPA: " << GPA << std::endl;
}
