#include "Disco.h"

Disco::Disco(){} //constructor

Disco::~Disco(){}//destructor

void Disco::def_tipo_disco(string c){
	tipoDisco=c;
}

void Disco::mostrar(){
	cout<<"------IMPRIMIR INFORMACION------\n"<<endl;
	cout<<"\nTIPO DE CONTENIDO: "<<tipoMultimedia<<endl;
	cout<<"TITULO DE CONTENIDO: "<<tituloContenido<<endl;
	cout<<"TITULO DE DISCO: "<<tipoDisco<<endl;
}

