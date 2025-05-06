// Sumar los números pares entre 1 y 100.


#include <iostream>
using namespace std;

int main() {
    int par = 2;
    int suma = 0; // importante inicializar adecuadamente

    while (par <= 100) {
        suma += par;//suma = suma + par;
        par += 2; //par = par + 2;
    }

    cout << "La suma de los pares entre 1 y 100 es: " << suma <<endl;
    

    return 0;
}
