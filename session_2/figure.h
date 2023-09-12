#pragma once
#include "head.h"

class figure
{
protected:
public:
	virtual ld square() { return 0; };
	virtual ld perimeter() { return 0; };
	template<class T>
	bool operator==(T x) { return  abs(this->square() - x.square()) < 1e-8; };
};