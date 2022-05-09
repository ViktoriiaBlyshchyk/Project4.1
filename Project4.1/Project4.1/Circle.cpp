#include "Circle.h"

Circle::Circle(void)
{}

Circle::Circle(double a)
	: Figure(a)
{}

double Circle::Area()
{
	return pi * pow(GetA(), 2);
}