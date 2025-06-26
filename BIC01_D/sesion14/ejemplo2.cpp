#include <iostream>
#include <cstring> // para utilizar funciones con cadenas al estilo C
#include <string> // para manejar cadenas al estilo C++
using namespace std;

int main(){
    // Lectura de cadenas al estilo C
    char nombres[50];
    cout << "Ingrese sus nombres: ";
    cin.getline(nombres, 50); 
    cout << "Hola " << nombres <<endl;

    // // Lectura de cadenas al estilo C++
    // string cadena("Juan Perez");
    // cout << "Hola " << cadena <<endl;

    return 0; 
}