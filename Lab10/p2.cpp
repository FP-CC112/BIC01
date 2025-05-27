/*
Escribir un programa que calcule los valores máximo y mínimo y sus 
respectivas posiciones dentro de una matriz dada por el usuario.
*/
#include <iostream>
#include <iomanip> //formato de salida setw()
using namespace std;

int main(){
    int A[10][13];
    int n = 10; //filas
    int m = 13; // columnas

    // Generando elementos de forma aleatoria entre -20 y 20
    srand(time(0));
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            A[i][j] = rand() % 41 - 20;
        }
    }

    cout << "\nMatriz generada\n";
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cout <<setw(3) << A[i][j] << " ";
        }
        cout << endl;
    }

    //Encontrando el elemento máximo y mínimo
    int elementoMax = A[0][0], elementoMin = A[0][0];
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            if (A[i][j] > elementoMax) {
                elementoMax = A[i][j];
            }

            if (A[i][j] < elementoMin) {
                elementoMin = A[i][j];
            }

        }
    }

    cout << "Elemento maximo: " << elementoMax <<endl;



    


    return 0; 
}