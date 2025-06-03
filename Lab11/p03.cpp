/*Escribir una función que convierta una temperatura
dada en grados Celsius a grados
Fahrenheit. La fórmula de conversión es: F = 9
5C + 32*/
#include <iostream>
using namespace std;

double celsiusFarenheit(double celsius) {
    double resultado = 9.0/5*celsius + 32;
    return resultado;
}


int main(){
    double celsius = 1;
    cout << celsiusFarenheit(celsius) <<endl;

    return 0; 
}