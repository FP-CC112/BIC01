/*Escribir un programa que al recibir como datos dos 
variables de tipo entero, obtenga
el resultado de la siguiente función:
f (x) = x/5 si y = 1
      = x^x si y = 2
      = 6x/2 si y = 3, 4
      = 1 en otro caso
*/
#include <iostream>
#include <cmath> //pow();
using namespace std;

int main(){
    int x, y;
    cout << "Ingrese el valor de x: ";
    cin >> x;
    cout << "Ingrese el valor de y: ";
    cin >> y;

    switch (y){
    case 1:
        cout << x/5.0 <<endl;
        break;
    case 2:
        cout << pow(x,x) <<endl;
        break;
    case 3:
    case 4:
        cout << 6*x/2.0 << endl;
        break;
    
    default:
        cout << "1" << endl; 
        break;
    }


    return 0; 
}