#include "triangle.h"

triangle::triangle() { a = 1; b = 1; c = 1; }
triangle::triangle(ld x, ld y, ld z)
{
	try
	{
		if (x <= 0 || y <= 0 || z <= 0) { error er(1); throw er; }
		{
			if (min({ x,y,z }) + (x + y + z - min({ x,y,z }) - max({ x,y,z })) <= max({ x,y,z })) { error er(2); throw er; }
			else { a = x; b = y; c = z; }
		}
	}
	catch (error er) { er.print();  a = b = c = 1; }
}

void triangle::set_a(ld x)
{
	try
	{
		if (x <= 0) { error er(1); throw er; }
		else
		{
			if (min({ x,b,c }) + (x + b + c - min({ x,b,c }) - max({ x,b,c })) <= max({ x,b,c })) { error er(2); throw er; }
			else a = x;
		}
	}
	catch (error er) { er.print(); }
}
void triangle::set_b(ld x)
{
	try
	{
		if (x <= 0) { error er(1); throw er; }
		else
		{
			if (min({ a,x,c }) + (a + x + c - min({ a,x,c }) - max({ a,x,c })) <= max({ a,x,c })) { error er(2); throw er; }
			else b = x;
		}
	}
	catch (error er) { er.print(); }
}
void triangle::set_c(ld x)
{
	try
	{
		if (x <= 0) { error x(1); throw x; }
		else
		{
			if (min({ a,b,x }) + (a + b + x - min({ a,b,x }) - max({ a,b,x })) <= max({ a,b,x })) { error er(2); throw er; }
			else c = x;
		}
	}
	catch (error er) { er.print(); }
}

ld triangle::perimetr() { return a + b + c; }
ld triangle::square()
{
	ld p = (a + b + c) / 2;
	return sqrt(p * (p - a) * (p - b) * (p - c));
}