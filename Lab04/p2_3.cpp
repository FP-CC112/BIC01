// Escribir un programa que, al recibir como dato el
// promedio de un alumno del curso,
// escriba aprobado en caso de que
// el promedio sea mayor o igual a 10 y reprobado en
// caso contrario
#include <iostream>
using namespace std;

int main(){
    float x;
    cout << "escriba su promedio: ";
    cin >> x;
    if(x >= 10) {
        cout << "aprobado";
    }else{
        cout << "desaprobado";
    }


    return 0; 
}