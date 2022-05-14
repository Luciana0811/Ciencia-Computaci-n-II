
#define arreglo_H
#include<iostream>
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>
#include <iostream>
using namespace std;

class Arreglo{

	public:
		int arreglo[5] = {-322, -322, -322, -322, -322};
		Arreglo();
		~Arreglo();
		void insertarenarreglo(int);
		void borrardearreglo(int);
		void imprimirarreglo();
};

