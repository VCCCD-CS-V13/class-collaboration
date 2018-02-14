#include "division.h"
#include <iostream>


division::division()
{
}


division::~division()
{
}

double division::divide()
{
	double a, b, c;
	std::cout << "Enter first value: ";
	std::cin >> a;
	std::cout << "Enter second value: ";
	std::cin >> b;
	if (b == 0)
	{
		std::cout << "ERROR Division by ZERO" << std::endl;
		return -1;
	}
	c = a / b;
	std::cout << a << " / " << b << " = " << c << std::endl;
	
	return c;
}

