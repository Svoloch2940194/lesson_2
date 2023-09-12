#include "rectangle.h"

rectangle::rectangle() { a = 1; b = 1; }
rectangle::rectangle(ld x, ld y)
{
	try
	{
		if (x <= 0 || y <= 0) throw "side cannot be negative";
		else { a = x; b = y; }
	}
	catch (const char* error) { cout << error << endl; a = 1; b = 1; }
}

void rectangle::set_a(ld x)
{
	try
	{
		if (x <= 0) throw "side cannot be negative";
		a = x;
	}
	catch (const char* error) { cout << error << endl; }
}
void rectangle::set_b(ld x)
{
	try
	{
		if (x <= 0) throw "side cannot be negative";
		b = x;
	}
	catch (const char* error) { cout << error << endl; }
}
ld rectangle::perimetr() { return 2 * (a + b); }
ld rectangle::square() { return a * b; }
