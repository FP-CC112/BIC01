// Menú interactivo: Crear un programa que muestre un menú 
// (usando switch) con opciones para calcular el área de
// diferentes figuras geométricas. El programa debe 
// permitir al usuario elegir una opción
//  repetidamente (usar do-while).

#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int opcion;
    double area;

    //Aplicacion de do-while

    do {
        cout << "Menú de opciones:" <<endl;
        cout << "1. Calcular el área de un círculo " <<endl;
        cout << "2. Calcular el área de un cuadrado " <<endl;
        cout << "3. Calcular el área de un triángulo " <<endl;
        cout << "4. Salir " <<endl;
        cin >> opcion;

        switch (opcion) {
            case 1: {
                double radio;
                cout << "ingrese el radio: ";
                cin >> radio;
                area = M_PI * pow(radio,2);
                cout << "El área del círculo es: " << area <<endl;
                break;
            }
            case 2: {
                double lado;
                cout << "Ingrese el lado del cuadrado: ";
                cin >> lado;
                area = pow(lado,2);
                cout << "El área del cuadrado es: " << area <<endl;
                break;
            }
            case 3: {
                double base, altura;
                cout << "Ingrese la base y altura respectivamente: ";
                cin >> base >> altura;
                area = base * altura /2;
                cout << "El área del triángulo es: " << area <<endl;
                break;
            } 
            case 4: 
                cout << "Saliendo del programa ...";
                break;
            default: 
                cout << "Opcion no valida " <<endl;
        }
    } while (opcion != 4);

    return 0; 
}