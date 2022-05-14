#ifndef rectangulo_H
#define rectangulo_H
#include <iostream>
using namespace std;
class Rectangulo1 {
	//ATRIBUTOS
private: 
	float altura;
	float base;
public:
	Rectangulo1(float , float); //CONSTRUCTOR
	~Rectangulo1(); // DESTRUCTOR
	void perimetro();
	void area();
	
};

#endif
