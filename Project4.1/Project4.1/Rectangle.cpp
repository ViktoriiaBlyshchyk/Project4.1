#include "Rectangle.h"

Rectangle::Rectangle(void)
{}

Rectangle::Rectangle(double a, double b)
	: Figure(a), b(b)
{}

double Rectangle::Area()
{
	return GetA() * b;
}