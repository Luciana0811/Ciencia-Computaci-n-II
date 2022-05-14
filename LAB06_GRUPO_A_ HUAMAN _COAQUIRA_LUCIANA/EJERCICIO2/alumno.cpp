#include "alumno.h"
#include "iostream"

//CONSTRUCTOR
alumno::alumno(string _CUI,string _nombre,string _apellido,float _nota1,float _nota2,float _nota3) {
	CUI= _CUI;
	nombre= _nombre;
	apellido= _apellido;
	nota1= _nota1;
	nota2= _nota2;
	nota3= _nota3;
}

alumno::~alumno() {
}
void alumno::imprimir(){
	cout<<"INFORMACION DEL ALUMNO"<< endl;
	cout<<CUI<<"\t"<<nombre<<"\t" << apellido<<endl;
}

void alumno::promedio(){
	float promedio;
	promedio=(nota1+nota2+nota3)/3;
	cout<<"Su promedio es: " <<promedio;
}



