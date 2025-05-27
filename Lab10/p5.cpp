/*Escriba un programa que pida al usuario que ingrese 
dos matrices de 3 ×3 y calcule
la suma así como la diferencia de las 2 matrices*/


#include <iostream>
using namespace std;

int main(){

    // Definir e inicalizar matriz A
    int A[3][3] = {{1,2,3}, {5,2,7}, {7,13,27}};
    // De finir e inicializar matriz B
    int B[3][3] = {{1,0,0}, {0,1,0}, {0,0,1}};

    //matriz suma
    int S[3][3] = {0}; //buena práctica

    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            S[i][j] = A[i][j] + B[i][j];
        }
    }


    //Producto de matrices
    int P[3][3] = {0};
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            //P[i][j] = 0;
            for (int k = 0; k < 3; ++k) {
                P[i][j] = P[i][j] + A[i][k]*B[k][j];
            }
        }
    }

    
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            cout << P[i][j] << " "; 
        }
        cout << endl;
    }

    return 0; 
}