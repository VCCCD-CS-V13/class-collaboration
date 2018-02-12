#include <iostream>
#include "multiplication.h"
#include "division.h"
#include "subtraction.h"
#include "addition.h"
using namespace std;

int main()
{
	multiplication mult;
	division div;
	subtraction minus;
	addition add;
	int option; // menu selection
	bool sentinel = 1; //sentinel switch for menu exit
	while (sentinel == true)
	{
		cout << endl << "Select an option:" << endl
					 << "\t1) Multiplication" << endl
					 << "\t2) Division" << endl
					 << "\t3) Subtraction" << endl
					 << "\t4) Addition" << endl
				     << "\t5) Quit" << endl;
		cin >> option;
		switch (option)
		{
			case 1: 
				mult.multiply();
				break;
			case 2:
				div.divide();
				break;
			case 3:
				minus.subtract();
				break;
			case 4:
				add.add();
				break;
			case 5:
				cout << "Goodbye!" << endl;
				sentinel = 0;
				break;
			default:
				cout << "Invalid choice" << endl;
		}
	}
	cin.ignore();
	cin.get();
	return 0;
}