/*
Escribir un programa que pida al usuario 5 números reales y luego los muestre en el
orden contrario al que se introdujeron
*/

#include <iostream>
using namespace std;

int main(){
    double numeros[5]; // definición del arreglo
    int a[4] = {1,2}; // internamente 1,2,0,0

    cout << "El arreglo a es:\n";
     for (int i = 0; i < 4; ++i) {
        cout << a[i]  << " ";
    }

    //Ingresar datos
    for (int i = 0; i < 5; ++i) {
        cout << "Ingrese el elemento " << i + 1 << ": ";
        cin >> numeros[i];
    }

    cout << "\nElementos en forma contraria:\n";
    for (int j = 4; j >=0; --j) {
        cout << numeros[j] << " ";
    }

    return 0; 
}