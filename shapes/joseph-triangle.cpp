#include "triangle.h"
#include <iostream>
using namespace std;

triangle::triangle()
{
}

void triangle::Display()
{
	int i, j, k;
	for (i = 1; i <= 5; i++)
	{
		for (j = 4; j >= i; j--)
		{
			cout << " ";
		}
		for (k = 1; k <= (2 * i - 1); k++)
		{
			cout << "*";
		}
		cout << endl;
	}
}

triangle::~triangle()
{
}