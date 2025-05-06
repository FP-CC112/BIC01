// Escribir un programa que genere
// un número aleatorio entre 1 y 10.

#include <iostream>
#include <cstdlib> //rand(), srand()
#include <ctime> //para time()
using namespace std;

int main(){

    int resultadoDado;
    srand(time(0));
    cout << "Lanzando el dado... " << endl;
    resultadoDado = 1 + rand() % 6; // aleatorio entre 1 y 10
    cout << "Resulado del dado es: " << resultadoDado <<endl;
    cout << "El valor de RAND_MAX es: " << RAND_MAX;
    return 0; 
}