/*
Escribe un programa que permita calcular
calcular la raíz de una ecuación cuadrática

p(x) = ax^2 + bx + c
discriminante = b^2 - 4ac
Si discriminante > 0 entonces las raices son reales diferentes
Si discriminante == 0 entonces las raices son iguales
Si discriminante < 0 entonces las raices son complejas
*/

#include <iostream>
#include<cmath>
using namespace std;

int main(){
    double a, b, c, discriminante, raiz1, raiz2;
    double real, imag;
    cout << "Ingrese los coeficientes de su polinomio: ";
    cin >> a >> b >> c;

    discriminante = b*b - 4*a*c;
    
    if(discriminante > 0){
        raiz1 = (-b + sqrt(discriminante))/2*a;
        raiz2 = (-b - sqrt(discriminante))/2*a;
        cout << "Las raices son reales diferences:\n";
        cout << "raiz 1: " << raiz1 <<endl;
        cout << "raiz 2: " << raiz2 <<endl;
    }else if (discriminante == 0){
        raiz1 = (-b + sqrt(discriminante))/2*a;
        cout << "Las raices son reales iguales:\n";
        cout << "raiz 1: " << raiz1 <<endl;
        cout << "raiz 2: " << raiz1 <<endl;

    }else{
        real = -b/2*a;
        imag = sqrt(-discriminante)/2*a;

        cout << "Las raices son complejas:\n";
        cout << "raiz 1: " << real <<" + " <<imag << " i "<<endl;
        cout << "raiz 2: " << real <<" - " <<imag << " i "<<endl;

    }






    return 0; 
}