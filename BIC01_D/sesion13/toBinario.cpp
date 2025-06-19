/*
Escribir un programa que convierta
un número en base 10 a base binaria
Entrada 8
Salida 1000
*/

#include <iostream>
#include <string> //manejo de cadenas en C++
using namespace std;


string decimalToBinarioRecursiva(int n);

int main(){

    string s1 = "Hola ";
    string s2 = "Mundo.";

    cout << "Longitud de s1: " << s1.length() <<endl;
    cout << "Concatenar: s1 y s2" << s1 + s2 <<endl;
    cout << "Convertimos a cadena" << to_string(2) << endl;


    return 0; 
}