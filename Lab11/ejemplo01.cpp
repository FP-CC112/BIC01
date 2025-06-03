#include <iostream>
using namespace std;

// prototipos
void saludar();
int sumar(int, int);
bool esPar(int a);
void mostrarMenu();
void modificar(int x) {
    x = 20;
    cout << "El valor de x en la función es:" << x <<endl;
}


int main(){
    // llamada a la función
    saludar();

    int resultado;
    resultado = sumar(4, 6);
    cout << "La suma es: " << resultado<<endl;

    cout << esPar(4) <<endl;

    mostrarMenu();

    int a = 1;
    modificar(a);
    cout << "El valor de a fuera de la función es: " << a <<endl;
    return 0; 
}


//Definición funcion saludar:
void saludar() {
    cout << "Hola, bienvenidos a BIC01" <<endl;
}

//Definición funcion sumar:
int sumar(int a, int b) {
    int suma = a + b;
    return suma;
}

//Definicion funcion esPar;
bool esPar(int a) {
    if (a % 2 == 0) {
        return true;
    } else {
        return false;
    }
    // return (a % 2 == 0);
}

void mostrarMenu() {
    cout << "******* MENÚ ************" <<endl;
    cout << "1. Sumar " << endl;
    cout << "2. Saludar " << endl;
    cout << "3. Verificar si es par " << endl;
}
