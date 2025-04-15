// Escribir un programa que permita
// calcular el máximo de 2 números enteros.

#include <iostream>
using namespace std;

int main(){
    int num1, num2;
    
    cout << "Ingrese el primer numero: ";
    cin >> num1;

    cout << "Ingrese el segundo numero: ";
    cin >>num2;

    if (num1 > num2){
        cout << "El mayor es " << num1 <<endl;
    }else{
        if(num1 == num2){
            cout << "Los numero son iguales" <<endl;
        }else{ // hay una condicion implicita (num1 > num2)
            cout << "El mayor es " << num2 <<endl;
        }
        
    }

    
    return 0; 
}