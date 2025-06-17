#include <iostream>
using namespace std;

const int FILAS = 3; //Variable global
const int COLUMNAS = 3; //Variable global

// Función para imprime una matriz
void imprimirMatriz(int matriz[][COLUMNAS]) {
for (int i = 0; i < FILAS; i++) {
    for (int j = 0; j < COLUMNAS; j++) {
        cout << matriz[i][j] << " ";
    }
    cout << endl;
}
}
int main() {
    int miMatriz[FILAS][COLUMNAS] = {{1, 2, 3},{4, 5, 6},{7, 8, 9}};
    imprimirMatriz(miMatriz); //llamada

    return 0;
}
