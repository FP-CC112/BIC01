// Escriba un programa que determine
// el nivel de un jugador según su puntuación.
// Supongamos los siguientes niveles:
// Novato: 0 - 999 puntos
// Intermedio: 1000 - 4999 puntos
// Avanzado: 5000 - 9999 puntos
// Experto: 10000 puntos o más
#include <iostream>
using namespace std;

int main(){
    int puntuacion;

    cout << "Ingrese la puntuacion del jugador: ";
    cin >> puntuacion;

    if (puntuacion < 0) {
        cout << "Puntuacion invalida" <<endl;
    } else if (puntuacion < 1000) {
        cout << "Novato" <<endl;
    } else if (puntuacion < 50000) {
        cout << "Intermedio" << endl;
    } else if (puntuacion < 10000) {
        cout << "Avanzado " << endl;
    } else {
        cout << "Experto" <<endl;
    }

    return 0; 
}
