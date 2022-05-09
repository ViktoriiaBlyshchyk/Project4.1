#pragma once
#include "Figure.h"

class Circle :
	public Figure
{
	double pi = 3.14;

public:
	Circle(void);
	Circle(double);
	~Circle() {};

	virtual double Area();
};