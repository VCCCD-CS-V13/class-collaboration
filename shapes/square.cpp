#include <iostream>
#include "square.h"
using namespace std;


square::square()
{
}

void square::Display() {
	for (int i = 0; i < 4; i++) {
		cout << "* * * * " << endl;
	}
		
}

square::~square()
{
}
