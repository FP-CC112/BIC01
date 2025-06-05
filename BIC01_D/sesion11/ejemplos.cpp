#include <iostream>
using namespace std;

// Prototipos
void saludar();
int sumar(int a, int b);
void menu();



int main(){

    //Llamada
    saludar();
    int resultado = sumar(3,4);
    cout << "La suma es: " << resultado;

    menu();

    return 0; 
}

//Definición
void saludar() {
    cout << "Bienvenidos a funciones en C++" <<endl;
}

int sumar(int a, int b) {
    int suma = a + b;
    return suma;
}

void menu() {
    cout << "Menu de opciones " << endl;
    cout << "1. Sumar dos enteros" <<endl;
    cout << "2. Enviar saludo" <<endl;
}
