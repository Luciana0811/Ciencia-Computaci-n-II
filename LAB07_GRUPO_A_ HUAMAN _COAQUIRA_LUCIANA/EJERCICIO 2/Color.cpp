#include "Color.h"

#include <iostream>

using namespace std;

Color::Color(string _rgb){ // constructor
	rgb = _rgb;
}

Color::~Color(){}//destructor

void Color::printColor(){
	cout<<rgb;
}
