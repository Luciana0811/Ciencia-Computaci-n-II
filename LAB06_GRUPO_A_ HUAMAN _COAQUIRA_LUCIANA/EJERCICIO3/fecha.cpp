#include "fecha.h"
#include "iostream"
using namespace std;

//CONSTRUCTOR
usuario::usuario(string _nombre,string _apellido,int _edad,int _mes_n ,int _dia_n,int _anio_n, int _mes_a ,int _dia_a, int _anio_a) {
	nombre= _nombre;
	apellido= _apellido;
	edad= _edad;
	mes_n= _mes_n;
	dia_n= _dia_n;
	anio_n= _anio_n;
	mes_a= _mes_a;
	dia_a= _dia_a;
	anio_a= _anio_a;
}
usuario::~usuario() {
}

void usuario::imprimir(){
	cout<<"\nDATOS DEL USUARIO"<< endl;
	cout<<"\nNOMBRE: "<<nombre<<"\nAPELLIDOS: "<<apellido<<"\nFECHA DE NACIMIENTO: "<<dia_n<<"/"<<mes_n<<"/"<<anio_n<<"\nFECHA ACTUAL: "<<dia_a<<"/"<<mes_a<<"/"<<anio_a<<endl;
	cout<<"\nLA EDAD DEL USUARIO ES: "<<endl;
	edad2();
}

void usuario::edad2(){
	int respFech , respMes;
	
	if ( dia_a < dia_n  )
	{  
		dia_a = dia_a + 30; // Se le suma los 30 días (1 mes) a la fecha actual
		mes_a = mes_a - 1; // Se le resta un mes (30 días) al mes actual
		respFech =  dia_a - dia_n; //Se le resta fecha nacimiento al actual
	}
	else 
		respFech =  dia_a - dia_n;  //Se le resta fecha nacimiento al actual
	
	if( mes_a < mes_n )
	{  
		mes_a = mes_a + 12; // Se le suma los 12 meses (1 año) al mes actual
		anio_a = anio_a - 1 ; // Se le resta 1 año ( 12 meses) al año actual
		respMes = mes_a - mes_n; //Se le resta año nacimiento al actual
	}
	else //En caso de ser mayor el mes actual que el nacimiento
	   respMes = mes_a - mes_n; //Se le resta año nacimiento al actual
	
	edad=anio_a - anio_n ;
	cout << " \nEDAD: " <<edad<< endl; //Muestra edad
	cout << "MESES: " << respMes << endl; //Muestra mes
	cout << "DIAS: " << respFech << endl; //Muestra dia*/
	
}
