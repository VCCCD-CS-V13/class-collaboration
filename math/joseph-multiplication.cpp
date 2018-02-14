#include <iostream>
#include "multiplication.h"



multiplication::multiplication()
{
}


multiplication::~multiplication()
{
}

double multiplication::multiply()
{
	double a, b, c;
	std::cout << "Enter first value: ";
	std::cin >> a;
	if (a >= 1000000)
	{
		std::cout << "ERROR Enter number less than 1 million" << std::endl;
		return -1;
	}
	std::cout << "Enter second value: ";
	std::cin >> b;
	if (b >= 1000000)
	{
		std::cout << "ERROR Enter number less than 1 million" << std::endl;
		return -1;
	}
	c = a * b;
	std::cout << a << " * " << b << " = " << c << std::endl;
	return c;
}
