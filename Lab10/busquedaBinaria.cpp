#include <iostream>
using namespace std;

int main(){
    int arr[] = {2, 5, 6, 7, 11, 12, 15, 17};
    int n = sizeof(arr)/sizeof(arr[0]);

    int clave = 11;
    int indice = -1;

    int izquierda = 0;
    int derecha = n - 1;

    while (izquierda <= derecha) {
        int medio = (izquierda + derecha) / 2;
        if (arr[medio] == clave) {
            indice = medio;
            break;
        } else if (arr[medio] < clave) {
            izquierda = medio + 1;
        } else {
            derecha = medio - 1;
        }
    }

    if (indice != -1) {
        cout <<  "Elemento encontrado en: " << indice <<endl;
    } else {
        cout << "No se encuentra en el arreglo" <<endl;
    }

  return 0; 
}