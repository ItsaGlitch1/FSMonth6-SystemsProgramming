#include <iostream>
#include <vector>
#include "Base.h"
#include "Student.h"
#include "Employee.h"
#include "Helper.h"

std::vector<Base*> AddRecord(std::vector<Base*>& v);
void DisplayRecords(std::vector<Base*>& v);
std::vector<Base*> DuplicateRecord(std::vector<Base*>& v);
int main()
{
    _CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF);
    _CrtSetBreakAlloc(-1);
    _CrtDumpMemoryLeaks();
    std::vector<Base*> baseptr;
    std::vector<std::string> Options = { "1. Add Record", "2. Display Records", "3. Duplicate Records", "4. Quit" };
    int input = 0;
    while (input != 4)
    {
        input = Helper::Menu(Options);
        switch (input)
        {
        case 1:
            std::cout << "Student or Teacher?" << std::endl;
            baseptr = AddRecord(baseptr);
            break;
        case 2:
            DisplayRecords(baseptr);
            break;
        case 3:
            baseptr = DuplicateRecord(baseptr);
            break;
        case 4:
            for (int i = 0; i < baseptr.size(); i++)
            {
                delete baseptr[i];
            }
            break;
        }
    }
}

std::vector<Base*> AddRecord(std::vector<Base*>& v)
{
    std::vector<std::string> Options = { "1. Student", "2. Employee" };
    int input = Helper::Menu(Options);
        switch (input)
        {
        case 1:
        {
            Student* student = new Student();
            std::cout << "Enter the new Student's name: ";
            char NewStudentName[32];
            std::cin >> NewStudentName;
            std::cin.ignore(INT_MAX, '\n');
            std::cout << std::endl;
            student->SetName(NewStudentName);
            std::cout << "Enter the new Student's GPA: ";
            float GPA;
            bool ScinCheck = false;
            while (ScinCheck == false)
            {
                std::cin >> GPA;
                if (std::cin.fail())
                {
                    std::cin.clear();
                    std::cout << "That is not a valid input! Please enter a valid number.";
                }
                else
                    ScinCheck = true;
                std::cin.ignore(INT_MAX, '\n');
            }
            student->SetGPA(GPA);
            std::cout << std::endl;
            v.push_back(student);
        }
            break;
        case 2:
        {
            Employee* employee = new Employee();
            std::cout << "Enter the new Employee's name: ";
            char NewEmployeeName[32];
            std::cin >> NewEmployeeName;
            std::cin.ignore(INT_MAX, '\n');
            std::cout << std::endl;
            employee->SetName(NewEmployeeName);
            int salary;
            salary = Helper::GetValidatedInt("Enter the new Employee's Salary: ");
            employee->SetSalary(salary);
            std::cout << std::endl;
            v.push_back(employee);
        }
            break;
        }
        return v;
}
void DisplayRecords(std::vector<Base*>& v)
{
    for (int i = 0; i < v.size(); i++)
    {
            v[i]->DisplayRecord();
    }
    std::cout << std::endl;
}
std::vector<Base*> DuplicateRecord(std::vector<Base*>& v)
{
    int index;
    index = Helper::GetValidatedInt("Enter the number of the record you want duplicated.", 0, v.size());
    Student* Scast = dynamic_cast<Student*>(v[index]);
    if (Scast == nullptr)
    {
        Employee* Ecast = dynamic_cast<Employee*>(v[index]);
        Employee* employee = new Employee();
        *(employee) = *(Ecast);
        v.push_back(employee);
    }
    else
    {
        Student* student = new Student();
        *(student) = *(Scast);
        v.push_back(student);
    }
    return v;
}