#include "stdafx.h"
#include "Test.h"
#include <iostream>


Test::Test()
{
}


Test::~Test()
{
}
void Test::Sqaure(int a)
{
	for (int i = 0; i < a; i++)
	{

		for (int z = 0; z < a; z++)
		{
			std::cout << "*";
		}
		std::cout << "\n";
	}
}
