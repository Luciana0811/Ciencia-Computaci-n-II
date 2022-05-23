#ifndef COLOR_H
#define COLOR_H

#include <iostream>

using namespace std;

class Color
{
private:
	string rgb;
public:
	Color(string);
	~Color();
	void printColor();
};


#endif

