// Solicite al usuario una contraseña y no lo deje
// continuar hasta que sea correcta.

#include <iostream>
using namespace std;

int main() {
    int password = 123;
    int entrada;


    do {
        cout << "Ingrese su password: ";
        cin >> entrada;

        if (entrada != password) {
            cout << "password incorrecto. Intente otra vez." <<endl;
        }

    } while (entrada != password); // NO OLVIDAR el punto y coma final


    cout << "Acceso concedido " <<endl;
    

    return 0;
}


