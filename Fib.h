#pragma once
#include "pch.h"
/*
File Name: Fib.h.
Author: Evan Gertis.
Purpose: Stores definitions methods and properties to be used in the 
		 implementation of fibonacci calculation.
Date: 03/22/2019
*/

//BEGIN namespace.
namespace FB {
	class Fib
	{
	

	/*************PUBLIC*************/
	public:
		
		Fib();
		int dynamicFib(int n);
		int recFib(int n);
		~Fib();
	/*************PUBLIC*************/

	/*************PRIVATE*************/
	private:
		std::map<int, int> memoizeTable; // used to store overlapping subproblem solutions.

	/*************PRIVATE*************/
	};

}
//END namespace