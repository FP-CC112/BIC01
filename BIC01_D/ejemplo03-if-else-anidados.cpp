// Escriba un programa que determine si una persona 
// puede votar, y si es hombre o mujer.

#include <iostream>
using namespace std;

int main() {
    int edad;
    char sexo;

    cout << "Ingrese la edad: ";
    cin  >> edad;

    cout << "Ingrese el sexo: (f para mujer, h para hombre) ";
    cin >> sexo;

    if (edad >= 18) {
        if (sexo == 'f') {
            cout << "Puede votar. Es mujer." <<endl;
        } else if (sexo == 'm') {
            cout << "Puede votar. Es hombre." <<endl;
        } else {
            cout << "Puede votar. Sexo no reconocido." <<endl; 
        }
    } else {
        if (sexo == 'f') {
            cout << "No puede votar. Es mujer." <<endl;
        } else if (sexo == 'm') {
            cout << "No puede votar. Es hombre." <<endl;
        } else {
            cout << "No puede votar. Sexo no reconocido." <<endl; 
        }
    }
    
    return 0;
}
