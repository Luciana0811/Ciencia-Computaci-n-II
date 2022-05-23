#ifndef PRODUCTOBANCARIO_H
#define PRODUCTOBANCARIO_H
#include <iostream>
using namespace std;

class ProductoBancario
{
	private:
		string usuario="LUCIANA HUAMAN COAQUIRA";
		double saldo=100.00;
		int numProductos=5;
	public:
		ProductoBancario();
		void imprimir();
		~ProductoBancario();    
};

#endif
