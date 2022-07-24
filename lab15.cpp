#include "iostream"
#include "vector"
#include "string"

using namespace std;

struct Autopartes{
	string autoparte;
	string color;
	int cantidad;
};




class Automovil1{
public:
	vector<Autopartes> elemento;
	void imprimirElemento() const{
		cout<<"\nPIEZAS DEL AUTOMOVIL: "<<endl;
		for(size_t i = 0; i < elemento.size(); i++){
			cout<<"-----"<<elemento[i].cantidad<<" "<<elemento[i].autoparte<<"(s) de color "<<elemento[i].color<<endl;
		}
	}	
		
};

class IBuilder{
public:
	virtual ~IBuilder() {}
	virtual void ProducirPuertas() = 0;
	virtual void ProducirLlantas() = 0;
	virtual void ProducirAsientos() = 0;
	virtual void ProducirMotor() = 0;	
	virtual void ProducirEspejos() = 0;
	virtual void ProducirVidrios() = 0;
	virtual void ProducirTimon() = 0;
	virtual void ProducirAutoparte()=0;
};

	
class BuilderEspecifico : public IBuilder {
private:
	Automovil1* autom;
	string color;
public:
	BuilderEspecifico() {
		this->Reset();
	}
	~BuilderEspecifico() {
		delete autom;
	}
	void Reset() {
		this->autom = new Automovil1();
	}
	void generar(string _autoparte, string _color,int _cantidad){
		Autopartes *pieza = new Autopartes();
		pieza->autoparte = _autoparte;
		pieza->color = _color;
		pieza->cantidad = _cantidad;
		this->autom->elemento.push_back(*pieza);
	}
	void ProducirPuertas() override {
		string color;
		int cantidad;
		cout<<"\nCANTIDAD DE PUERTAS: ";
		cin>>cantidad;
		cout<<"COLOR DE PUERTAS: ";
		cin>>color;
		Autopartes*pieza = new Autopartes();
		generar("Puerta",color,cantidad);
	}
	void ProducirLlantas() override {
		string color;
		int cantidad;
		cout<<"\nCANTIDAD DE LLANTAS: ";
		cin>>cantidad;
		cout<<"COLOR DE LLANTAS: ";
		cin>>color;
		Autopartes*pieza = new Autopartes();
		generar("Llanta",color,cantidad);
	}
	void ProducirAsientos() override {
		string color;
		int cantidad;
		cout<<"\nCANTIDAD DE ASIENTOS: ";
		cin>>cantidad;
		cout<<"COLOR DE ASIENTOS: ";
		cin>>color;
		Autopartes *pieza = new Autopartes();
		generar("Asiento",color,cantidad);
	}
	void ProducirMotor() override {
		string color;
		int cantidad=1;
		cout<<" \nGENERANDO UN MOTOR "<<endl;
		cout<<"COLOR DEL MOTOR: ";
		cin>>color;
		Autopartes *pieza = new Autopartes();
		generar("Motor",color,cantidad);
	}
	void ProducirEspejos() override {
		string color;
		int cantidad;
		cout<<"\nCANTIDAD DE ESPEJOS: ";
		cin>>cantidad;
		cout<<"COLOR DE ESPEJOS: ";
		cin>>color;
		Autopartes *pieza = new Autopartes();
		generar("Espejo",color,cantidad);
	}
	void ProducirVidrios() override {
		string color;
		int cantidad;
		cout<<"\nCANTIDAD DE VIDRIOS: ";
		cin>>cantidad;
		cout<<"COLOR DE VIDRIOS: ";
		cin>>color;
		Autopartes *pieza = new Autopartes();
		generar("Vidrio",color,cantidad);
	}
	void ProducirTimon() override {
		string color;
		int cantidad=1;
		cout<<"\nGENERANDO UN TIMON"<<endl;
		cout<<"COLOR DEL TIMON: ";
		cin>>color;
		Autopartes *pieza = new Autopartes();
		generar("Timon",color,cantidad);
	}
	void ProducirAutoparte() override{
		string color,autoparte;
		int cantidad=1;
		cout<<"\nNOMBRE DE LA AUTOPARTE: ";
		cin>>autoparte;
		cout<<"CANTIDAD: ";
		cin>>cantidad;
		cout<<"COLOR: ";
		cin>>color;
		Autopartes *pieza = new Autopartes();
		generar(autoparte,color,cantidad);
	}
	Automovil1* GetProducto() {
		Automovil1* result = this->autom;
		this->Reset();
		return result;
	}
};

class Director {
private:
	IBuilder* creado;
public:
	void set_builder(IBuilder* creado) {
		this->creado = creado;
	}
	void CrearNormal() {
		cin.ignore();
		this->creado->ProducirPuertas();
		this->creado->ProducirLlantas();
		this->creado->ProducirAsientos();
		this->creado->ProducirTimon();
		this->creado->ProducirVidrios();
		this->creado->ProducirEspejos();
		this->creado->ProducirMotor();
	}
	void BuildProductoCompleto() {
		cin.ignore();
		this->creado->ProducirLlantas();
		this->creado->ProducirAsientos();
		this->creado->ProducirTimon();
		this->creado->ProducirVidrios();
		this->creado->ProducirEspejos();
		this->creado->ProducirMotor();
		this->creado->ProducirPuertas();
		this->creado->ProducirAutoparte();
	}
};

void MenuUsuario(Director& Creador){
	
	BuilderEspecifico* creado = new BuilderEspecifico();
	Creador.set_builder(creado);
	Automovil1* p = creado->GetProducto();
	string opcion;
	while(true){
		cout<<"\t\t\tMENU"<<endl;
		cout<<"1. Crear un automovil general"<<endl;
		cout<<"2. Crear un automovil personalizado"<<endl;
		cout<<"3. Salir"<<endl;
		cin>>opcion;
		if(opcion=="1"){
			Creador.CrearNormal();
			p=creado->GetProducto();
			p->imprimirElemento();
			delete p;
		}
		else if(opcion=="2"){
			string opcion2;
			while(true){
				cout<<"\n1.Producir LLantas\n";
				cout<<"2.Producir Asientos\n";
				cout<<"3.Producir Timon\n";
				cout<<"4.Producir Motor\n";
				cout<<"5.Producir Puertas\n";
				cout<<"6.Producir Vidrios\n";
				cout<<"7.Producir Espejos\n";
				cout<<"8.Producir nuevo autoparte \n";
				cout<<"9.Salir";
				cout<<"\nIndicar opcion: ";
				cin>>opcion2;
				cin.ignore();
				if(opcion2 == "1")creado->ProducirLlantas();
				else if(opcion2 == "2") creado->ProducirAsientos();
				else if(opcion2 == "3") creado->ProducirTimon();
				else if(opcion2 == "4") creado->ProducirMotor();
				else if(opcion2 == "5") creado->ProducirPuertas();
				else if(opcion2 == "6") creado->ProducirVidrios();
				else if(opcion2 == "7") creado->ProducirEspejos();
				else if(opcion2 == "8") creado->ProducirAutoparte();
				else if(opcion2 == "9"){
					break;
				}
			}
			Creador.CrearNormal();
			p = creado->GetProducto();
			p->imprimirElemento();
			delete p;
		}
		else if(opcion=="3"){
			break;
		}
		else{
			cout<<"OPCION INVALIDA"<<endl;
		}
		
		
	}
	
}

int main(){
	Director* generar = new Director();
	MenuUsuario(*generar);
	delete generar;
	return 0;
}

