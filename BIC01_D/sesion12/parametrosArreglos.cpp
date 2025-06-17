#include <iostream>
using namespace std;

const int FILAS = 3;
const int COL = 3;


// Definición de la función
void modificarArray(int arr[5], int size) {
    for (int i = 0; i < size; i++) {arr[i] *= 2;}
}

int main() {
    int a[FILAS][COL];

    filas

    int miArray[] = {1, 2, 3, 4, 5};
    int tamano = sizeof(miArray) / sizeof(miArray[0]);
    modificarArray(miArray, tamano); // llamada
    cout << "Array modificado: ";
    for (int i = 0; i < tamano; i++) {
        cout << miArray[i] << " ";
    }
    cout << endl;
}
