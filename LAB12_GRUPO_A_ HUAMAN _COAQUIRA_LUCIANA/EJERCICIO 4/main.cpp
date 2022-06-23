
#include "iostream"
#include "stdlib.h"
#include "time.h"//para numeros aleatorios
#include "vector"//Para inserción
#include "Cola.h"
#include "Cola.cpp"


using namespace std;


void comparar(Cola &hombres,Cola &mujeres){//Compararemos ambas colas y sus elementos en orden
	for (int i = 1; i <= 3; i++)
	{
		//ordenamos e imprimimos
		if(i==1 && (hombres.obtener_dato(i)>mujeres.obtener_dato(i))){
			cout<<"Iteracion "<<i<<" ---> "<<hombres.obtener_dato(i)<<" (varones) es mayor que "<<mujeres.obtener_dato(i)<<" (mujeres)";
		}
		else
		{
			cout<<"Iteracion "<<i<<" ---> "<<hombres.obtener_dato(i)<<" (varones) es menor que "<<mujeres.obtener_dato(i)<<" (mujeres)";
		}
		cout<<endl;
		
	}
	
}

int main()
{
	srand(time(NULL));
	int num;
	Cola *edad_mujeres = new Cola();
	Cola *edad_hombres = new Cola();
	//LONGITUD DEFINIDA DE HOMBRES=3
	for (int i=0; i < 3; i++)
	{
		num=1+rand()%(30);//dará numeros entre 1 y 30
		edad_hombres->insertar(num);
	}
	//LONGITUD DEFINIDA DE MUJERES=2
	for (int i=0; i < 3; i++)
	{
		num=1+rand()%(30);//dará numeros entre 1 y 30
		edad_mujeres->insertar(num);
	}
	
	//mostrando los DATOS ALMACENADOS:
	cout<<"\n-----Cola de HOMBRES-----"<<endl;
	edad_hombres->imprimir();
	cout<<"\n-----Cola de MUJERES-----"<<endl;
	edad_mujeres->imprimir();
	cout<<endl;
	
	//COMPARAREMOS
	comparar(*edad_hombres,*edad_mujeres);
	//ELIMINAMOS OBJETOS
	system("pause");
	cout<<"Eliminando objetos..."<<endl;
	delete edad_mujeres;
	delete edad_hombres;
}

