// Realizar un programa que pida al usuario dos números y muestre la “distancia” entre
// ellos

#include <iostream>
#include <cmath> // para abs()
using namespace std;

int main(){
    float a, b;
    cout << "Ingrese dos números: ";
    cin >> a >> b; //lectura de 2 numeros

    cout << "La distancia entre " << a << " y "
    << b << " es: " << abs(a-b);
    return 0; 
}