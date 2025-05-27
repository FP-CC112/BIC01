#include <iostream>
using namespace std;

int main(){
    int a[] ={17, 23, 5, 11}; //otra forma de inicializar

    int n = sizeof(a)/sizeof(a[0]);  //funcion sizeof() para recuperar el tamaño del arreglo


    //Burbuja creciente
    bool intercambio;
    for (int i = 0; i < n - 1;++i) {//pasadas
        intercambio = false;
        for (int j = 0; j < n - 1 - i ; ++j) { // comparaciones
            if (a[j] > a[j+1]) {
                int temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
                intercambio = true;
            }
        } 
        
        if (!intercambio) {
            break;
        }
    }

    //muesta el arreglo
    for (int i = 0; i < n; ++i) {
        cout << a[i] << " ";
    }

    return 0; 
}