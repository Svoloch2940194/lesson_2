#include "circle.h"

circle::circle() { r = 1; }
circle::circle(ld x)
{
	try
	{
		if (x <= 0) throw "side cannot be negative";
		else r = x;
	}
	catch (const char* error) { cout << error << endl; r = 1; }
}

void circle::set_r(ld x)
{
	try
	{
		if (x <= 0) throw "side cannot be negative";
		else r = x;
	}
	catch (const char* error) { cout << error << endl; }
}

ld circle::perimetr() { return 2 * acos(-1) * r; }
ld circle::square() { return acos(-1) * r * r; }