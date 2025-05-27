/*
Escribir un programa que, al recibir como dato un arreglo bidimensional cuadrado de
tipo entero y dimensión 10, imprima la diagonal de dicho arreglo y a continuación
ordene los elementos de dicha diagonal en forma ascendente.
*/
#include <iostream>
#include <cstdlib> // rand(), srand()
#include <ctime> // time()
using namespace std;

int main(){

    int A[10][10];
    int n = 10;

    // Generando elementos de forma aleatoria entre 1 y 20
    srand(time(0));
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            A[i][j] = rand() % 20 + 1;
        }
    }
    


    //Imprimir la diagonal
    for (int i = 0;  i < n; ++i) {
        cout << A[i][i] << " ";
    }

    // Ordenando forma creciente
    for (int i = 0; i < n - 1;++i) {//pasadas
        for (int j = 0; j < n-1; ++j) { // comparaciones
            if (A[j][j] > A[j+1][j+1]) {
                int temp = A[j][j];
                A[j][j] = A[j+1][j+1];
                A[j+1][j+1] = temp;
            }
        } 
    }

    cout << "\nDiagonal ordenada\n";
    for (int i = 0;  i < n; ++i) {
        cout << A[i][i] << " ";
    }

    return 0; 
}