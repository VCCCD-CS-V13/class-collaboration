#include <iostream>
#include <string>
#include "circle.h"
using namespace std;


circle::circle()
{
}

double circle::pth(double x, double y) {
	return sqrt(pow(x, 2) + pow(y, 2));
}

void circle::Display() 
{	
	
	double c = 0;
	double r = 10;

	double width = r;
	double length = r * 1.5;

	for (double y = width; y >= -width; y -= 2) {
		for (double x = -length; x <= length; x++) {
			if ((int)pth(x, y) == r) cout << "*";
			else cout << " ";
		}
		cout << endl;
	}
}


circle::~circle()
{
}
