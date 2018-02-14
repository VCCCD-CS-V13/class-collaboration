// ConsoleApplication1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "josesclass1.h"
using namespace std; 


int main()
{
	josesclass1 tri;
	int a, b;
	cout << "Enter number of rows:";
	cin >> b;
	tri.maketri(a, b);
	/*for (int i = 1, k = 0; i <= rows; i++, k = 0)
	{
		for (columns = 1; columns <= rows - i; ++columns)
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
	}*/

    return 0;
}

