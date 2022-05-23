#include "Rectangulo.h"
#include "Figura.h"
#include "Elipse.h"
#include "Rectangulo.h"
#include "Cuadrado.h"
#include "Circulo.h"

#include <iostream>
using namespace std;


int main(){
	int x,y;
	string color;
	cout<<"\nINGRESAR EL COLOR PREDETERMINADO DE LAS FIGURAS: "<<endl;
	getline(cin,color);
	cout<<"\nINGRESAR LA POSICION DE LAS FIGURAS-"<<endl;
	cout<<"\nIndicar la posicion en la recta X"<<endl;
	cin>>x;
	cout<<"\nIndicar la posicion en la recta Y"<<endl;
	cin>>y;
	int coordenadas[2]= {x,y};
	Figura *vector[4];
	for(int i=0;i<4;i++){
		if (i==0){
			vector[i] = new Rectangulo(color,coordenadas[2],"Rectangular",10,13);
			
		}
		else if (i==1){
			vector[i] = new Elipse(color,coordenadas[2],"Elipse",5,12);
			
		}
		else if (i==2){
			vector[i] = new Cuadrado(color,coordenadas[2],"CUADRADO",10,10);
			
		}
		else if (i==3){
			vector[i] = new Circulo(color,coordenadas[2],"CIRCULO",10,10);
		}
	}
	cout<<"DATOS ESTABLECIDOS"<<endl;
	
	for (int i = 0; i < 4; i++)
	{
		cout<<"\nFIGURA:"<<i+1<<endl;
		vector[i]->imprimir();
		cout<<endl;
		vector[i]->area();
		
	}
	float max,parea=0;
	int aux;
	max=vector[0]->area();
	for (int i = 0; i < 4; i++)
	{
		parea=vector[i]->area();
		if (max==parea or max<parea)
		{
			max=parea;
			aux=i;
		}
	}
	cout<<endl<<"\nAREA MAXIMA"<<endl;
	vector[aux]->imprimir();
	vector[aux]->area();
	return 0;
}
	

