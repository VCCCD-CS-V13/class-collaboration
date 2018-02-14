// ConsoleApplication1.cpp : Defines the entry point for the console application.
//
//FABIANS BRANCH

#include "stdafx.h"
#include <iostream>
#include "FabianEnriquez.h"

int main()
{
	FabianEnriquez user;
	int x;
	std::cout << "Please enter number of rows: ";
	std::cin >> x;
	user.Sqaure(x);
    return 0;
}

