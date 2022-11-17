#include "Base.h"
#include <iostream>

Base::Base() {}
Base& Base::operator=(Base& other)
{
	if (this != &other)
	{
		SetName(other.name);
	}
	return *this;
}
Base::Base(Base& other)
{
	*this = other;
}
Base::~Base()
{
	delete name;
}
void Base::SetName(char* _name)
{
	if (name != nullptr)
	{
		delete name;
	}
	int length = strlen(_name) + 1;
	name = new char[length];
	strcpy_s(name, length, _name);
}
char* Base::GetName()
{
	return name;
}