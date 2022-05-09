#include "RightTriangle.h"

RightTriangle::RightTriangle(void)
{}

RightTriangle::RightTriangle(double a, double b)
	: Figure(a), b(b)
{}

double RightTriangle::Area()
{
	return 0,5 * GetA() * b;
}