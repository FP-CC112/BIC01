/*Realizar un programa que, dado un número entero 
positivo, calcule la suma de sus dígitos*/

#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Ingrese un número: ";
    cin >> n;
    int suma = 0;
    while(n > 0){
        suma += n%10;
        n /=10;
    }

    cout << "La suma es: " << suma <<endl;

    return 0; 
}