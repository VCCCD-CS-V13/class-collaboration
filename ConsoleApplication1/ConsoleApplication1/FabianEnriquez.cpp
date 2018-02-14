#include "stdafx.h"
#include "FabianEnriquez.h"
#include <iostream>


FabianEnriquez::FabianEnriquez()
{
}


FabianEnriquez::~FabianEnriquez()
{
}
void FabianEnriquez::Sqaure(int a)
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
