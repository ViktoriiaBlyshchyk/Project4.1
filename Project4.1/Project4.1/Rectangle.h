#pragma once
#include "Figure.h"

class Rectangle :
	public Figure
{
	double b;
public:
	Rectangle(void);
	Rectangle(double, double);
	~Rectangle() {};

	virtual double Area();
};