#include<iostream>
#include<list>

using namespace std;

template <class P>
P num_menor(P num[5]) {
	P min = num[0];
	for (int i = 0; i < 5; i++) {
		if (num[i] <= min)
			min = num[i];
	}
	return min;
}

template <class P>
P num_mayor(P num[5]) {
	P max = num[0];
	for (int i = 0; i < 5; i++) {
		if (num[i] >= max)
			max = num[i];
	}
	return max;
}

int main() {
	int list_array[5] = { 10,7,2, 8, 6 };
	float list_float[5] = { 12.1, 8.7, 5.6, 8.4, 1.2 };

	cout << "MENOR ENTERO DEL ARREGLO ENTERO: " <<endl;
    cout<<num_menor<int>(list_array) << endl;
	cout << "MAYOR ENTERO DEL NUMERO ENTERO: " <<endl;
    cout<< num_mayor<int>(list_array) << endl;
	cout << "MENOR FLOAT DEL ARREGLO ENTERO" <<endl;
    cout<<num_menor<float>(list_float) << endl;
	cout << "MAYOR FLOAT DEL ARREGLO ENTERO " << endl;
    cout<<num_mayor<float>(list_float);
	return 0;
}