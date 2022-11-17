#pragma once
#include "Base.h"
class Student :
    public Base
{
private:
    float GPA = 0;
public:
    void SetGPA(float _gpa);
    void DisplayRecord();
};

