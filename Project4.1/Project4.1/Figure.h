#pragma once
#include <iostream>

using namespace std;

class Figure
{
	double a;

public:
	Figure(void);
	Figure(double a);
	~Figure() {};

	double GetA() { return a; }

	virtual double Area() = 0;
};