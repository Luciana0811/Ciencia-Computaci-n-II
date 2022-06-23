#include<iostream>
#include "Cola.h"
#include <iostream>

using namespace std;
int main()
{
	Cola *cola1 = new Cola();
	while(true){
		string op;
		int ele,num;
		cout<<"\n1. INGRESAR X ELEMENTOS"<<endl;
		cout<<"2. ELIMINAR ELEMENTO"<<endl;
		cout<<"3. BUSCAR ELEMENTO"<<endl;
		cout<<"4. MOSTRAR COLA"<<endl;
		cout<<"5. SALIR"<<endl;
		cin>>op;
		if(op=="1"){
			cout<<"\nINDICAR LA CANTIDAD DE ELEMENTOS: ";
			cin>>ele;
			cout<<"\nINGRESAR LOS ELEMENTOS: "<<endl;
			for(int i=0;i<ele;i++){
				cin>>num;
				cola1->insertar(num);
			}
		}
		else if(op=="2"){
			cout <<"\nExtraemos un elemento de la cola:" <<cola1->eliminar()<<"\n";
			cola1->imprimir();
		}
		else if(op=="3"){
			cout<<"\nCOLA: "<<endl;
			cola1->imprimir();
			cout<<"\nINDICAR EL NUMERO QUE DESEA BUSCAR: ";
			cin>>ele;
			cola1->buscar(ele);
		}
		else if(op=="4"){
			cout<<"\nCOLA: "<<endl;
			cola1->imprimir();
		}
		else if(op=="5"){
			delete cola1;
			break;
		}
		else{
			cout<<"\nOpcion incorrecta"<<endl;
		}
		
	}
	return 0;
}
