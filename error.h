#pragma once

#include "head.h"

class error
{
	ll type_of_error;
public:
	error(ll type) { type_of_error = type; }
	void print()
	{
		if (type_of_error == 1) cout << "side cannot be negative" << endl;
		if (type_of_error == 2) cout << "this triangle doesn`t exist" << endl;
	}
};