#include <iostream>
#include "alumno.h"

using namespace std;

int main()
{
	alumno p1= alumno("20202023","luciana","huaman",12,15,15);
	p1.imprimir();
	p1.promedio();

	return 0;
}
