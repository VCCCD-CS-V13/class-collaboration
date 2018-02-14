#pragma once
class Rogers_Class
{
private:
	int sides;
	int radius;

public:
	Rogers_Class();
	Rogers_Class(int);
	virtual ~Rogers_Class();
};

class Square {
private:
	double length;
public:

	Square();
	Square(double);
	double getArea();
};

class Circle {
private:
	double radius;
public:

	Circle();
	Circle(double);
	double getArea();
};