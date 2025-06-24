/*
"Caminante, son tus huellas el camino y nada
más; caminante, no hay camino, se hace camino al andar. Al andar se hace el camino,
y al volver la vista atrás se ve la senda que nunca se ha de volver a pisar. Caminante
no hay camino sino estelas en la mar."
*/

#include <iostream>
#include <iomanip> //setw()
using namespace std;

int main(){
    char texto[] = "Caminante, son tus huellas el camino y nada más;"
    " caminante, no hay camino, se hace camino al andar. Al andar"
    " se hace el camino, y al volver la vista atrás se ve la senda"
    " que nunca se ha de volver a pisar. Caminante no hay camino sino estelas en la mar.";



    for (int i = 0; i < 5; i++) {
        cout << setw(20) << "Contador " << i+1 << setw(5) << i*1000 <<endl;
    }
    return 0; 
}