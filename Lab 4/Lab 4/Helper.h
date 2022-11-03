#pragma once
#include <iostream>
#include <vector>

namespace Helper
{
	int GetValidatedInt(const char* strMessage, int nMinimumRange = 0, int nMaximumRange = 0)
	{
		bool cinCheck = false;
		int input = 0;
		std::cout << strMessage << std::endl;
		while (cinCheck = false)
		{
			std::cin >> input;
			if (std::cin.fail())
			{
				std::cin.clear();
				std::cout << "That is not a valid input! Please enter a valid number.";
			}
			else
				cinCheck = true;
			std::cin.ignore(INT_MAX, '\n');
		}
		if (nMaximumRange == 0 && nMinimumRange == 0)
		{
			return input;
		}
		else
		{
			if (input >= nMinimumRange && input <= nMaximumRange)
				return input;
			else
				return GetValidatedInt(strMessage, nMinimumRange, nMaximumRange);
		}
		return input;
	}
	int RandomNumber(int min = 0, int max = 0)
	{
		srand(NULL);
		int randnum = 0;
		if (min + max != 0)
			randnum = rand() % min + (max - min);
		else
			randnum = rand();
		return randnum;
	}
	int Menu(std::vector<std::string> options)
	{
		int selection = 0;
		bool cinCheck = false;
		std::cout << "Choose an Option:" << std::endl;
		for (int i = 0; i < options.size(); i++)
		{
			std::cout << options[i] << std::endl;
		}
		while (cinCheck = false)
		{
			std::cin >> selection;
			if (std::cin.fail())
			{
				std::cin.clear();
				std::cout << "That is not a valid input! Please enter a valid number.";
			}
			else
				cinCheck = true;
			std::cin.ignore(INT_MAX, '\n');
		}
		return selection;
	}