/*Escribe un programa que imprima los N primeros
términos de la sucesión
a = 0;
b = 1;
actual = a + b;
a = b;
b = actual;

Variante
Escribir un programa que pida al usuario que ingrese
un número entero y luego muestre
los números de la serie de Fibonacci
menores o iguales que el número ingresado.


*/

#include <iostream>
using namespace std;

int main(){
    int N;
    cout << "Ingrese el limite: ";
    cin >> N;
    int a = 0;
    int b = 1;
    int actual;

    //Implemente usando while
    for(; a <= N;){
        cout << a << "\t";
        actual = a + b;
        a = b;
        b = actual;
    }


    return 0; 
}