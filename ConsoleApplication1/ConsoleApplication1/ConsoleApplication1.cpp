// ConsoleApplication1.cpp : Defines the entry point for the console application.
//
//FABIANS BRANCH

#include "stdafx.h"
#include <iostream>
#include "Test.h"

int main()
{
	Test user;
	int x;
	std::cout << "Please enter number of rows: ";
	std::cin >> x;
	user.Sqaure(x);
    return 0;
}

