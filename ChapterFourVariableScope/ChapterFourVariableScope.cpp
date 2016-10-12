// ChapterFourVariableScope.cpp : Defines the entry point for the console application.

// This program demonstrates a variable in a inner block

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	//---Constant Variables------------------------------------
	const double MIN_INCOME = 35000.0;
	const int MIN_YEARS = 5;

	//--Get the annual income(Display)------------------------
	cout << "What is your annual income? ";
	double income;		// Variable definition
	cin >> income;

	//--
	if (income >= MIN_INCOME)
	{
		//--Get the number of years at the current job.
		cout << "How many years have you worked at "
			 << "your current job? ";
		int years;		//--YEARS Variable
		cin  >> years;

		if (years > MIN_YEARS)
			cout << "Your qualify. \n";
		else
		{
			cout << "You must have been employed for\n"
				 << "more than " << MIN_YEARS
				 << " years to qualify. \n";
		}
	}
	else
	{
		cout << "You must earn at least $" << MIN_INCOME
			 << " to qualify.\n";
	}
    return 0;
}

