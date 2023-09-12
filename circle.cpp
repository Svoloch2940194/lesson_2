#include "circle.h"

circle::circle() { r = 1; }
circle::circle(ld x)
{
	try
	{
		if (x <= 0) { error er(1); throw er; }
		else r = x;
	}
	catch (error er) { er.print(); r = 1; }
}

void circle::set_r(ld x)
{
	try
	{
		if (x <= 0) { error er(1); throw er; }
		else r = x;
	}
	catch (error er) { er.print(); }
}

ld circle::perimetr() { return 2 * acos(-1) * r; }
ld circle::square() { return acos(-1) * r * r; }