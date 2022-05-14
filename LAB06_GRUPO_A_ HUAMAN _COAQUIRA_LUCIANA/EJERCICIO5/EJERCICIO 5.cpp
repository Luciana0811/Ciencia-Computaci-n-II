#include <iostream>
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>

using namespace std;

class ARREGLO{
	private:
		int _Arreglo[3][3];
	public:
	void Arreglo(){
		for(int f=0; f<5;f++){
			_Arreglo[f][d]=0;

		}
	}
		
		
	void llenar(){
		srand(time(0));
		for(int f=0;f<3;f++){
			for(int c=0;c<3;c++){
				_Matrix[f][c]=rand() %9;
			}
		}
	}
			
	void imprimir(){
	cout<<"\nMOSTRAR MATRIZ\n"<<endl;
		for(int f=0;f<3;f++){
			for(int c=0;c<3;c++){
				cout<<setw(3)<<_Matrix[f][c];
			}
			cout<<endl;
		}
	}
	
	void buscar(int numero){
		int co,fi;
		bool verifica;
		for(int f=0;f<3;f++){
			for(int c=0;c<3;c++){
				if(numero==_Matrix[f][c]){
					co=c;
					fi=f;
					verifica =true;
				}
			}
		}
		
		if(verifica == true){
			cout<<"EL NUMERO " << numero <<" SE ENCUENTRA EN LA COLUMNA " << co<<" Y EN LA FILA "<<fi <<endl;
		}
		else{
			cout<<"VALOR NO ENCONTRADO"<<endl;
		}
	}
		
};


	
int main(){
	int numero;
	MATRIX Mal;
	Mal.llenar();
	cout<<"QUE NUMERO DESEA BUSCAR: "<<endl;
	cin>>numero;
	Mal.buscar(numero);
	Mal.imprimir();
	
}
	
