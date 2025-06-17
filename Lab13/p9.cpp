/*Escribe una función recursiva que 
convierta un número decimal en su
representación binaria 
como una cadena de texto.
Ejemplo: binario(10) = "1010"*/
#include <iostream>
#include <string>
using namespace std;

string decimalBinario(int n) {
    //Caso base
    if(n == 0)
        return "";
    
    return decimalBinario(n/2) + to_string(n%2);
}

// Resolver el ejercicio sin usar string


int main(){

    cout << decimalBinario(0) <<endl;

    return 0; 
}