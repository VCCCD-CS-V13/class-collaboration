#include "stdafx.h"
#include "square.h"
#include <iostream>
using namespace std;


square::square()
{
	
}


square::~square()
{
}

void square::makesquare(int a,int b)
{
	for (int r = 0; r < a; r++) {
		for (int c = 0; c < b; c++) {
			cout << "* ";
		}
		cout << endl;
	}

}
