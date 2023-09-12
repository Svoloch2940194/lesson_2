#pragma once

#include "figure.h"

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
