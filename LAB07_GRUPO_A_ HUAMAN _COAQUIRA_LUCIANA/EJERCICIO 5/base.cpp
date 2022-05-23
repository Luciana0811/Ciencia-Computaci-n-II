#include "base.h"

base::base (int _operador)
{
	operador = _operador;
}

base::~base()
{
}

int base::Operador(){
	return operador;
}   
