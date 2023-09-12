#include "rectangle.h"

rectangle::rectangle() { a = 1; b = 1; }
rectangle::rectangle(ld x, ld y)
{
	try
	{
		if (x <= 0 || y <= 0) { error er(1); throw er; }
		else { a = x; b = y; }
	}
	catch (error er) { er.print(); a = 1; b = 1; }
}

void rectangle::set_a(ld x)
{
	try
	{
		if (x <= 0) { error er(1); throw er; }
		a = x;
	}
	catch (error er) { er.print(); }
}
void rectangle::set_b(ld x)
{
	try
	{
		if (x <= 0) { error er(1); throw er; }
		b = x;
	}
	catch (error er) { er.print(); }
}
ld rectangle::perimetr() { return 2 * (a + b); }
ld rectangle::square() { return a * b; }
