// absolute value with abs.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "math.h"
#include "stdlib.h"


int main()
{//This is not work as I hoped it would
	//It was because I but a \n next to the %d, now it works
	//This Program is to calculate age using abs
	int year1; 
	int year2;
	int age;
	printf_s("Enter a year: ");
	scanf_s( " %d", &year1);
	printf_s("Enter a new year: ");
	scanf_s(" %d", &year2);
	age = year1 - year2;
	printf_s(" %d ", age);
	age = abs(age);
	printf_s(" %d ", age);
    return 0;
}

