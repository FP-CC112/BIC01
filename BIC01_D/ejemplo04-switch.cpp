// Escriba un programa que muestre el nombre del mes 
// a partir de su número (1 al 12).


#include <iostream>
using namespace std;

int main(){
    int mes;

    cout << "Ingrese el número del mes (entre 1 y 12): ";
    cin >> mes;

    switch (mes) {
        case 1: cout << "Enero " << endl; break;
        case 2: cout << "Febrero " << endl; break;
        case 3: cout << "Marzo " << endl; break;
        case 4: cout << "Abril " << endl; break;
        case 5:{ // importante las llaves para delimitar el bloque del case.
            int dia = 05;
            int year = 2025; 
            cout << "Mayo " << endl; 
            cout << dia << " " << year <<endl;
            break;
        }
        case 6: 
            cout << "Junio " << endl;
            break;
        case 7: cout << "Julio " << endl; break;
        case 8: cout << "Agosto " << endl; break;
        case 9: cout << "Setiembre " << endl; break;
        case 10: cout << "octubre " << endl; break;
        case 11: cout << "Noviembre " << endl; break;
        case 12: cout << "Diciembre " << endl; break;
        default: 
        cout << "Número de mes no valido " <<endl; 
    }

    return 0; 
}


/*
#include <iostream>
using namespace std;

int main() {
    int mes;

    cout << "Ingrese el número del mes (1 al 12): ";
    cin >> mes;

    // Usamos una estructura if-else para determinar el nombre del mes
    if (mes == 1) {
        cout << "Enero" << endl;
    } else if (mes == 2) {
        cout << "Febrero" << endl;
    } else if (mes == 3) {
        cout << "Marzo" << endl;
    } else if (mes == 4) {
        cout << "Abril" << endl;
    } else if (mes == 5) {
        cout << "Mayo" << endl;
    } else if (mes == 6) {
        cout << "Junio" << endl;
    } else if (mes == 7) {
        cout << "Julio" << endl;
    } else if (mes == 8) {
        cout << "Agosto" << endl;
    } else if (mes == 9) {
        cout << "Septiembre" << endl;
    } else if (mes == 10) {
        cout << "Octubre" << endl;
    } else if (mes == 11) {
        cout << "Noviembre" << endl;
    } else if (mes == 12) {
        cout << "Diciembre" << endl;
    } else {
        cout << "Número de mes no válido. Ingrese un número entre 1 y 12." << endl;
    }

    return 0;
}
*/