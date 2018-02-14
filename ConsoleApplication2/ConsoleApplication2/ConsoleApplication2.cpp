// ConsoleApplication81.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <fstream>
using namespace std;
void printGrade(int grade, ofstream & myoutput) {
	
	myoutput << "Enter grade: ";
	if (grade >= 90) {
		cout << "A, " << grade << "%" << endl;
		myoutput << "A, " << grade << "%" << endl;
	}

	else if (grade >= 80){
		cout << "B, " << grade << "%" << endl;
		myoutput << "B, " << grade << "%" << endl;
	}
		
	else if (grade >= 70){
		cout << "C, " << grade << "%" << endl;
		myoutput << "C, " << grade << "%" << endl;
	}
		
	else if (grade >= 60){
		cout << "D, " << grade << "%" << endl;
		myoutput << "D, " << grade << "%" << endl;
	}
		
	else{
		cout << "F, " << grade << "%" << endl;
		myoutput << "F, " << grade << "%" << endl;
	}
		
}

int main()
{
	ofstream myOutputFile("Z:\\ACSV30-2-13\\KevinNguyen.txt");
	int grade;
	for (int i = 0; i < 5; i++) {
		cout << "Enter grade: ";
		cin >> grade;
		printGrade(grade, myOutputFile);
		
	}

		myOutputFile.close();
	
		return 0;
	}

