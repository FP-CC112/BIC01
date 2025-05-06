// Dados dos puntos en el plano realizar un programa que permita determinar la pendiente
// de la recta que pasa por esos puntos.

#include <iostream>
using namespace std;

int main(){
    double x1, y1, x2, y2;
    double pendiente;
    cout << "Ingrese las coordenadas (x1,y1) del primer punto: ";
    cin >> x1 >> y1;
    cout << "Ingrese las coordenadas (x2,y2) del segundo punto: ";
    cin >> x2 >> y2;

    pendiente = (y1-y2)/(x1 - x2);

    //Estructura Condicional
    if (x1 != x2){
        cout << "La pendiente es: " << pendiente;
    }else{
        cout << "NO EXISTE pendiente ";
    }


    


    return 0; 
}