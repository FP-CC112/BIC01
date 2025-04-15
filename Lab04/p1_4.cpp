// Realizar un algoritmo que lea un número y 
//que muestre su raíz cuadrada y su raíz cúbica
#include <iostream>
#include<cmath> // pow()
using namespace std;

int main(){
    float x,y,z;
    cout << "ingrese un numero: ";
    cin >> x;

    y =pow(x,1.0/2.0);
    z = pow(x,1.0/3.0);

    cout << "raiz cuadrada: " << y << endl;    
    cout << "raiz cubica: " << z << endl; 


    return 0; 
}