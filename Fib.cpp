#include "pch.h"
#include "Fib.h"
/*
File Name: Fib.cpp.
Author: Evan Gertis.
Purpose: Stores implementation of methods
		 to be used in fibonacci calculation.
Date: 03/22/2019
*/

/*BEGIN Fib*/
FB::Fib::Fib()
{
	memoizeTable[0] = 0;
	memoizeTable[1] = 1;
}
/*END Fib*/

/*BEGIN dynamicFib*/
int FB::Fib::dynamicFib(int n)
{
	//define the base case.
	if (n == 0 || n == 1) {
		return 1;
	}

	if (memoizeTable[n] != 0) {
		return memoizeTable[n];
	}
	else {
		memoizeTable[n] = dynamicFib(n - 1) + dynamicFib(n - 2);
		return memoizeTable[n];
	}

}
/*END dynamicFib*/

/*BEGON recFib*/
int FB::Fib::recFib(int n)
{
	//define the base case.
	if (n == 0 || n == 1) {
		return 1;
	}

	return recFib(n - 1) + recFib(n - 2);

}
/*END recFib*/

/*BEGIN ~Fib*/
FB::Fib::~Fib()
{
}
/*END ~Fib*/
