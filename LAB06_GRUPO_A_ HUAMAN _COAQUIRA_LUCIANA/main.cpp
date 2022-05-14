#include "arreglo.h"
#include <iostream>
using namespace std;

int main(){
	int opc=0;
	int insertar;
	int borrar;
	Arreglo a = Arreglo();
	while(opc!=4){
		cout << "INDICAR LA ACCION QUE DESEA REALIZAR\n: " << endl;
		cout << "1. INSERTAR ELEMENTO" << endl;
		cout << "2. ELIMINAR ELEMENTO" << endl;
		cout << "3. IMPRIMIR ARRAY " << endl;
		cout << "4. SALIR" << endl;
		cin >> opc;
		if(opc==1){
			cout << "INDICAR EL NUMERO QUE DESEA INSERTAR" << endl; cin >> insertar;
			a.insertarenarreglo(insertar);
		}
		else if(opc==2){
			cout << "INDICAR EL NUMERO QUE DESEA BORRAR" << endl; cin >> borrar;
			a.borrardearreglo(borrar);
		}
		else if(opc==3){
			a.imprimirarreglo();
		}
	}
}
