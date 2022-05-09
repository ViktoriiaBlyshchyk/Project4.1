#pragma once
#include "Figure.h"

class Trapeze :
	public Figure
{
	double b, h;

public:
	Trapeze(void);
	Trapeze(double, double, double);
	~Trapeze() {};

	virtual double Area();
};