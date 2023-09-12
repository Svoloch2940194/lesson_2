#pragma once

#include "figure.h"

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
