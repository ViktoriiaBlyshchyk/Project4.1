#pragma once
#include "Figure.h"

class RightTriangle :
	public Figure
{
	double b;
public:
	RightTriangle(void);
	RightTriangle(double, double);
	~RightTriangle() {};

	virtual double Area();
};