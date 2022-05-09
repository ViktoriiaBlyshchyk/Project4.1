#include "Trapeze.h"

Trapeze::Trapeze(void)
{}

Trapeze::Trapeze(double a, double b, double h)
	: Figure(a), b(b), h(h)
{}

double Trapeze::Area()
{
	return (GetA() + b) * h / 2;
}