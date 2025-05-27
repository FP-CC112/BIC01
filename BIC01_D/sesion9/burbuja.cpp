#include <iostream>
using namespace std;

// BURBUJA CRECIENTE

int main(){
    int A[] = {17, 23, 5, 11, 0, -11, 14, 234, -34};

    //almacenamos el tamaño del arreglo A
    int n = sizeof(A)/sizeof(A[0]);

    //Algoritmo Burbuja creciente
    for (int i = 0; i < n - 1; ++i) { //recorridos n-1
        for (int j = 0; j < n; ++j) { // intercambios
            if (A[j] > A[j+1]) {
                int temp = A[j];
                A[j] = A[j+1];
                A[j+1] = temp;
            }
        }
    }
    cout << A[n] << endl;

    for (int i = 0; i < n; ++i) {
        cout << A[i] << " ";
    }



  return 0; 
}