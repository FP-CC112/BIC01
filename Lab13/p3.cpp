/*Escribir una función recursiva
 que permita calcular la suma de los n
primeros números naturales.*/

#include <iostream>
using namespace std;

int sumaRec(int n) {
    //Caso base
    if (n == 0)
        return 0;
    
    //Caso recursivo
    return n + sumaRec(n-1);
}

int main(){

    return 0; 
}