#include <iostream>
#include <cstring> 
#include <string> // para manejar cadenas al estilo C++
using namespace std;

int main(){
    //lectura de cadenas al estilo C
    char nombres[50];
    cout << "Ingrese sus nombres: ";
    cin.getline(nombres, 50); // ????
    cout << "Hola " << nombres <<endl;

    //lectura de cadenas al estilo C++
    string cadena("Juan Perez");
    cout << "Hola " << cadena <<endl;

    return 0; 
}