#include "stdafx.h"
#include "Rogers_Class.h"


Rogers_Class::Rogers_Class()
{
	sides = 1;
	radius = 1;
}

Rogers_Class::Rogers_Class(int a)
{
	sides = a;
}

Rogers_Class::~Rogers_Class()
{
}

Square::Square()
{
	length = 1;
}
Square::Square(double newLength)
{
	length = newLength;
}
double Square::getArea()
{
	return length * length;
}

Circle::Circle()
{
	radius = 1;
}
Circle::Circle(double newRadius)
{
	radius = newRadius;
}
double Circle::getArea()
{
	return radius * radius * 3.14159;
}