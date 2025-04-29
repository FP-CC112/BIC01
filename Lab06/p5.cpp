/*Escribir un programa que lea 10 números enteros
y calcule la suma y el promedio de ellos*/

#include <iostream>
using namespace std;

int main(){
    int n;
    int suma = 0;
    float promedio;
    cout << "Ingrese 10 numeros enteros: ";
    for(int i = 1; i <= 10; ++i){
        cout << "Ingrese el numero " << i <<": ";
        cin >> n;
        suma += n ;
    }

    cout << "La suma es: " << suma <<endl;
    cout << "El promedio es: " << suma/10.0 <<endl;


    return 0; 
}