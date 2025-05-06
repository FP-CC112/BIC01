// Mostrar la tabla de multiplicar de un número 
// ingresado por el usuario.

#include <iostream>
using namespace std;

int main() {
    int numero;
    cout << "Ingrese un numero: ";
    cin >> numero;

    for(int i = 0; i <= 12; i++){
        cout << numero << " x " << i << " = " << numero * i << endl;
    }



    return 0;
}
