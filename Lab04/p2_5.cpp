/*
Escribir un programa que, al recibir como datos las ventas
de tres Farmacias, escriba
las mismas en forma descendente. Considera que 
todas las ventas son diferentes y no
utilices operadores lógicos para agrupar las condiciones.
*/
#include <iostream>
using namespace std;

int main(){
    float n1,n2,n3;

    cout << "Ingrese el total de venta de la primera farmacia: ";
    cin >> n1;
    cout << "Ingrese el total de venta de la segunda farmacia: ";
    cin >> n2;
    cout << "Ingrese el total de venta de la tercera farmacia: ";
    cin >> n3;

    if (n2 < n1){
        if(n3 < n2){
            cout << n1 << n2 << n3 <<endl;
        }else{// (n3 > n2)
            if(n3 < n1){
                cout << n1 << n3 << n2 <<endl;
            }else{
                cout << n3 << n1 << n2 <<endl;
            }
        }
    }else{
        if(n3 < n1){
            cout << n2 << n1 << n3 <<endl;
        }else{
            if(n3 < n2){
                cout << n2 << n3 << n1 <<endl;
            }else{
                cout << n3 << n2 << n1 <<endl;
            }
        }
    }

    return 0; 
}



