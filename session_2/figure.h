#pragma once
#include "include.h"

class figure
{
protected:
public:
	virtual ld square() { return 0; };
	virtual ld perimeter() { return 0; };
	template<class T>
	bool operator==(T x) { return  abs(this->square() - x.square()) < 1e-8; }
};

class triangle : public figure
{
	ld a, b, c;
public:
	triangle();
	triangle(ld x, ld y, ld z);

	void set_a(ld x);
	void set_b(ld x);
	void set_c(ld x);

	ld perimetr();
	ld square();
};

class rectangle : public figure
{
	ld a, b;
public:
	rectangle();
	rectangle(ld x, ld y);

	void set_a(ld x);
	void set_b(ld x);

	ld perimetr();
	ld square();
};

class circle : public figure
{
	ld r;
public:
	circle();
	circle(ld x);

	void set_r(ld x);
		
	ld perimetr();
	ld square();
};