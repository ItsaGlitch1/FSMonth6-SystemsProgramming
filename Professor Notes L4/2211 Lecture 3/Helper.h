#pragma once
#include <iostream>

namespace Helper
{
	char* setName(const char* _name)
	{
		// the name of an array is the memory address ( pointer ) of the first element in the array 
		// find out size of array passed in
		int length = strlen(_name) + 1; // add one for the null terminator
		// new an array of size length
		char* name = new char[length];
		// copy chars from _name to name
		strcpy_s(name, length, _name);
		return name;
	}
}
