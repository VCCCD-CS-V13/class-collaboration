#include "addition.h"
#include <iostream>


addition::addition()
{
}


addition::~addition()
{
}

double addition::add()
{
	double a, b, c;
	std::cout << "Enter first value: ";
	std::cin >> a;
	if (a < 0)
	{
		std::cout << "ERROR No Negative Numbers!" << std::endl;
		return -1;
	}
	std::cout << "Enter second value: ";
	std::cin >> b;
	if (b < 0)
	{
		std::cout << "ERROR No Negative Numbers!" << std::endl;
		return -1;
	}
	c = a + b;
	std::cout << a << " + " << b << " = " << c << std::endl;
	return c;
}
