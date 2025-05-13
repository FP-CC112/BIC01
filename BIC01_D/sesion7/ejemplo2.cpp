#include <iostream>
using namespace std;

int main() {
    char tipo;
    float promedio;

    cout << "Ingrese tipo de estudiante (A, B, C): ";
    cin >> tipo;

    cout << "Ingrese promedio (0-20): ";
    cin >> promedio;

    if (promedio < 0 || promedio > 20) {
        cout << "Promedio fuera de rango. Programa terminado." << endl;
    } else if (promedio >= 16) {
        switch (tipo) {
            case 'A':
            case 'a':
                cout << "Estudiante ORDINARIO con promedio " << promedio 
                     << " recibe bonificación de 100 soles." << endl;
                break;
            case 'B':
            case 'b':
                cout << "Estudiante BECADO con promedio " << promedio 
                     << " recibe bonificación de 200 soles." << endl;
                break;
            case 'C':
            case 'c':
                cout << "Estudiante DEPORTISTA con promedio " << promedio 
                     << " recibe bonificación de 150 soles." << endl;
                break;
            default:
                cout << "Tipo de estudiante inválido." << endl;
        }
    } else {
        cout << "Estudiante con promedio insuficiente. No recibe bonificación." << endl;
    }

    return 0;
}
