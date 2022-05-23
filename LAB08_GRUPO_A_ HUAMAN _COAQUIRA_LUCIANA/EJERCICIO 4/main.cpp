#include "Rectangulo.h"
#include "Figura.h"
#include "Elipse.h"
#include "Rectangulo.h"
#include "Cuadrado.h"
#include "Circulo.h"

#include <iostream>
using namespace std;


int main(){
	int coordenadas[2]= {0,0};
	string opcion;
	while(true){
		cout<<"---------INDICAR LA FIGURA---------\n"<<endl;
		cout<<"1. RECTANGULO "<<endl;
		cout<<"2. ELIPSE "<<endl;
		cout<<"3. CUADRADO "<<endl;
		cout<<"4. CIRCULO "<<endl;
		cout<<"5. SALIR " <<endl;
		cin>>opcion;
		if (opcion=="1"){
			Rectangulo fig = Rectangulo("VERDE",coordenadas[2],"Rectangular",10,13);
			fig.imprimir();
			fig.area();
			fig.perimetro();
			fig.cambioTamanio();

		}
		else if (opcion=="2"){
			Elipse fig1 = Elipse("Amarillo",coordenadas[2],"Elipse",5,12);
			fig1.imprimir();
			
		}
		else if (opcion=="3"){
			Cuadrado fig3 = Cuadrado("VERDE",coordenadas[2],"CUADRADO",10,10);
			fig3.imprimir();
			fig3.area();
			fig3.perimetro();
			fig3.cambioTamanio();
			
		}
		else if (opcion=="4"){
			Circulo fig4 = Circulo("ROJO",coordenadas[2],"CIRCULO",10,10);
			fig4.imprimir();
			fig4.area();
			
		}
		else if (opcion=="5"){
			break;
		}
		else{
			cout<<"OPCION NO VALIDA"<<endl;
		}
	}
	return 0;
}
	

