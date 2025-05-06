// Leer dos números del usuario, luego calcular:​

// La suma, resta, multiplicación y división​

// La potencia del primero elevado al segundo​

// La raíz cuadrada de ambos​

// Mostrar los resultados en consola

#include <iostream>
#include <cmath>  //para pow() ,  sqrt()
using namespace std;

int main(){
    //ingreso de datos
    int num1;
    int num2;

    float suma, resta, producto, division, potencia, raiz;

    cout << "Ingrese el primer numero: ";
    cin >> num1;

    cout << "Ingrese el segundo numero: ";
    cin >> num2;

    //procesamos datos

    suma = num1 + num2;
    resta = num1 - num2; 
    producto = num1 * num2; 
    division = num1 * 1.0 / num2;
    potencia = pow(num1, num2) ;
    raiz = sqrt(num1);

    //Mostramos el resultado
    cout << "El valor de la suma es: " << suma <<endl;
    cout << "El valor de la resta es: " << resta <<endl;;
    cout << "El valor del producto es: " << producto <<endl;;
    cout << "El valor de la division es: " << division <<endl;
    cout << "El valor de la potencia es: " << potencia <<endl;
    cout << "El valor de la raiz cuadrada es: " << raiz <<endl;


    return 0; 
}