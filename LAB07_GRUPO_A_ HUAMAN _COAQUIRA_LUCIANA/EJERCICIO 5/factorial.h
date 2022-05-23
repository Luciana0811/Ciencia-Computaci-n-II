#ifndef FACTORIAL_H
#define FACTORIAL_H

#include "base.h"

#include <iostream>

using namespace std;

class factorial : public base
{
private:
public:
	factorial(int);
	~factorial();
	void dev_factorial();
};

#endif

