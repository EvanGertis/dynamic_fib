/* 
File Name: dynamic_fib.cpp. 
Author: Evan Gertis.
Date: 03/22/2019
Purpose: This file contains the 'main' function. Program execution begins and ends there.
*/

#include "pch.h"
#include "Fib.h"

//entry point of program.
int main()
{
	//test code. 
	int n, dynResult, recResult;

	FB::Fib fib;

	n = 8;

	dynResult = fib.dynamicFib(n);
	printf("Dynamic fibonacci %d = %d \n", n, dynResult);

	recResult = fib.recFib(n);
	printf("Recursive fibonnaci %d = %d \n", n, recResult);
}
