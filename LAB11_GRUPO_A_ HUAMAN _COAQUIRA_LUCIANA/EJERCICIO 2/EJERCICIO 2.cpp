#include <iostream>

using namespace std;

class Pila {
private:
	class Nodo {
	public:
		int info;
		Nodo *sig;
	};
	
	Nodo *raiz;
public:
	Pila();
	~Pila();
	void insertar(int x);
	int extraer();
	void imprimir();
};

Pila::Pila() // CONSTRUCTOR
{
	raiz = NULL;
}

Pila::~Pila() // DESTRUCTOR
{
	Nodo *reco = raiz;
	Nodo *bor;
	while (reco != NULL)
	{
		bor = reco;
		reco = reco->sig;
		delete bor;
	}
}

void Pila::insertar(int x)
{
	Nodo *nuevo;
	nuevo = new Nodo();
	nuevo->info = x;
	if (raiz == NULL)
	{
		raiz = nuevo;
		nuevo->sig = NULL;
	}
	else
	{
		nuevo->sig = raiz;
		raiz = nuevo;
	}
}

void Pila::imprimir()
{
	Nodo *reco = raiz;
	while (reco != NULL)
	{
		cout << reco->info << "-";
		reco = reco->sig;
	}
	cout << "\n";
}

int Pila::extraer()
{
	if (raiz != NULL)
	{
		int informacion = raiz->info;
		Nodo *bor = raiz;
		raiz = raiz->sig;
		delete bor;
		return informacion;
	}
	else
	{
		return -1;
	}
}


int main()
{
	Pila *pila1;
	pila1= new Pila();
	string opcion;
	int ele;
	while(true){
		cout<<" 1. INSERTAR ELEMENTO A LA PILA"<<endl;
		cout<<" 2. EXTRAER ELEMENTO A LA PILA"<<endl;
		cout<<" 3. IMPRIMIR PILA "<<endl;
		cout<<" 4. SALIR "<<endl;
		cin>>opcion;
		if(opcion=="1"){
			cout<<"INDICAR ELEMENTO QUE DESEA INSERTAR: ";
			cin>>ele;
			pila1->insertar(ele);
		}
		else if(opcion=="2"){
			cout<<"PILA : "<<endl;
			pila1->imprimir();
			cout<<"ELEMENTO EXTRAIDO DE LA PILA: "<< pila1->extraer()<<endl;
			pila1->imprimir();
		}
		else if(opcion=="3"){
			cout<<"PILA IMPRIMIDA: "<<endl;
			pila1->imprimir();
		}
		else if(opcion=="4"){
			break;
		}
		else{
			cout<<"OPCION INCORRECTA";
		}
	}
	delete pila1;
	return 0;
}


