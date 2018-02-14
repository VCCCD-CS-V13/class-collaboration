#include "stdafx.h"
#include "josesclass1.h"
#include <iostream>
using namespace std;


josesclass1::josesclass1()
{
}


josesclass1::~josesclass1()
{
}

void josesclass1::maketri(int a, int b)
{
	for (int i = 1, k = 0; i <= b; i++, k = 0)
	{
		for (a = 1; a <= b - i; ++a)
		{
			cout << "  ";
		}
		while (k != 2 * i - 1)
		{
			cout << "* ";
			k++;
		}
		cout << endl;
		{

		}
	}
}
