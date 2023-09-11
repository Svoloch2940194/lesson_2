#include "figure.h"

//triangle

triangle::triangle() { a = 1; b = 1; c = 1; }
triangle::triangle(ld x, ld y, ld z)
{
	try
	{
		if (x <= 0 || y <= 0 || z <= 0) throw "side cannot be negative";
		{
			if (min({ x,y,z }) + (x + y + z - min({ x,y,z }) - max({ x,y,z })) <= max({ x,y,z })) throw "this triangle doesn`t exist";
			else { a = x; b = y; c = z; }
		}
	}
	catch (const char* error) { cout << error << endl; x = y = z = 1; }
}

void triangle::set_a(ld x)
{
	try
	{
		if (x <= 0) throw "side cannot be negative";
		else
		{
			if (min({ x,b,c }) + (x + b + c - min({ x,b,c }) - max({ x,b,c })) <= max({ x,b,c })) throw "this triangle doesn`t exist";
			else a = x;
		}
	}
	catch (const char* error) { cout << error << endl; }
}
void triangle::set_b(ld x)
{
	try
	{
		if (x <= 0) throw "side cannot be negative";
		else
		{
			if (min({ a,x,c }) + (a + x + c - min({ a,x,c }) - max({ a,x,c })) <= max({ a,x,c })) throw "this triangle doesn`t exist";
			else b = x;
		}
	}
	catch (const char* error) { cout << error << endl; }
}
void triangle::set_c(ld x)
{
	try
	{
		if (x <= 0) throw "side cannot be negative";
		else
		{
			if (min({ a,b,x }) + (a + b + x - min({ a,b,x }) - max({ a,b,x })) <= max({ a,b,x })) throw "this triangle doesn`t exist";
			else c = x;
		}
	}
	catch (const char* error) { cout << error << endl; }
}

ld triangle::perimetr() { return a + b + c; }
ld triangle::square()
{
	ld p = (a + b + c) / 2;
	return sqrt(p * (p - a) * (p - b) * (p - c));
}

//rectangle

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

//circle

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