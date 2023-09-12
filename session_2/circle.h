#pragma once

#include "figure.h"

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