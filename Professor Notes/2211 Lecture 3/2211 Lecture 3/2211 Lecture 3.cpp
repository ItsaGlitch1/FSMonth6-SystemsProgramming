// 2211 Lecture 3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>


// struct ( much like a class )
struct Person
{
	char name[32];
	int age;
};

void PassbyValue(int _x); // int x = 
void PassbyRef(int& xref); // int& xref = 
void PassbyPtr(int* xptr); // int* xptr = 

void PassbyValue(Person _p); 
void PassbyRef(Person& pref); 
void PassbyPtr(Person* pptr); 

int main()
{
	//int x = 5;
	//std::cout << x << '\t' << &x << std::endl; // &x gives the memory address of x

	//// Pass by value
	//PassbyValue(x);
	//std::cout << x << '\t' << &x << std::endl; // &x gives the memory address of x


	//// references
	//int x = 5;
	//int& xref = x;
	//std::cout << x << '\t' << &x << std::endl;
	////std::cout << xref << '\t' << &xref << std::endl;

	//// Pass by Reference
	//PassbyRef(x);
	//std::cout << x << '\t' << &x << std::endl;

	// Pointers
	//int x = 5;
	//int* xptr = &x;
	//std::cout << x << '\t' << &x << '\t' << xptr << std::endl;

	//// dereference operator (*) - gives value at that memory address ( only used on pointers )
	//std::cout << *xptr << std::endl;
	//PassbyPtr(&x);
	//std::cout << x << '\t' << &x << std::endl;

	Person person; // instance of Person struct call person
	strcpy_s(person.name, "Jason");
	person.age = 25;

	/*std::cout << "name = " << person.name << " age = " << person.age << std::endl;
	PassbyValue(person);
	std::cout << "name = " << person.name << " age = " << person.age << std::endl;*/

	/*std::cout << "name = " << person.name << " age = " << person.age << std::endl;
	PassbyRef(person);
	std::cout << "name = " << person.name << " age = " << person.age << std::endl;*/

	std::cout << "name = " << person.name << " age = " << person.age << std::endl;
	PassbyPtr(&person);
	std::cout << "name = " << person.name << " age = " << person.age << std::endl;

}


void PassbyValue(int _x) // int _x = 
{
	_x = _x + 3;
	std::cout << _x << '\t' << &_x << std::endl;
}


void PassbyRef(int& xref) // int& xref = 
{

	xref = xref + 3;
	std::cout << xref << '\t' << &xref << std::endl;
}


void PassbyPtr(int* xptr) // int* xptr = 
{
	*xptr = *xptr + 3;
	std::cout << *xptr << '\t' << xptr << std::endl;

}


void PassbyValue(Person _p)
{
	strcpy_s(_p.name, "Tom");
	_p.age = 35;
	std::cout << "_p.name = " << _p.name << " _p.age = " << _p.age << std::endl;

}

void PassbyRef(Person& _pref)
{
	strcpy_s(_pref.name, "Tom");
	_pref.age = 35;
	std::cout << "_pref.name = " << _pref.name << " _pref.age = " << _pref.age << std::endl;

}


void PassbyPtr(Person* pptr)
{
	strcpy_s((*pptr).name, "Tom");
	(*pptr).age = 35;
	pptr->age = 35; // this is the same as above ( -> ) is the indirect membership operator
	std::cout << "pptr->name = " << pptr->name << " pptr.age = " << pptr->age << std::endl;


}
