#include<iostream>
using namespace std;

int main() {
	int arr[] = {5, 3, 2, 8, 6, 9, 10};
	int n = sizeof(arr)/sizeof(arr[0]);

	int clave =  8;
	int indice = -1;

	//Busqueda lineal
	for(int i = 0; i < n; ++i) {
		if (arr[i] == clave) {
			indice =  i;
			break;
		}
	}

	if (indice != -1) {
		cout << "Elemento encontrado en: " << indice <<endl;
	} else {
		cout << "Valor no encontrado" <<endl;
	}
	return 0;
}

