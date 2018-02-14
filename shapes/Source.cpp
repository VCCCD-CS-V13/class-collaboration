#include <iostream>
#include "circle.h"
#include "square.h"
#include "triangle.h"
using namespace std;

int main()
{
	
	cout << endl << "Printing square: " << endl << endl;
	square mySquare;
	mySquare.Display();

	cout << endl << "Printing circle: " << endl << endl;
	circle myCircle;
	myCircle.Display();

	cout << endl << "Printing triangle: " << endl << endl;
	triangle myTriangle;
	myTriangle.Display();


	cin.ignore();
	cin.get();
	return 0;
}