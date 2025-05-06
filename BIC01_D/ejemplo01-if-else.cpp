// Escriba un programa que reciba una nota
// entre 0 y 20 y determine si el estudiante
// aprobó (nota >= 10).

#include <iostream>
using namespace std;

int main(){
    //Ingreso de datos
    float nota;
    cout << "Ingrese la nota del alumno (entre 1 y 20): ";
    cin >> nota;

    if (nota >= 0 && nota <= 20) { 
        if (nota >= 10){
            cout << "El alumno aprobó";
        } else { 
            cout << "El alumno desaprobó";
        }
    } else {
        cout << "Error, la nota debe estar entre 1 y 20";
    }



    return 0; 
}
