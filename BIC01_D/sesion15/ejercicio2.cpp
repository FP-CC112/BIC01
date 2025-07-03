/*
Dado un número N (máx. 20), 
se ingresan N palabras de hasta 20 caracteres cada una, 
almacenadas en un arreglo bidimensional de caracteres.
Implemente: 
Una función recursiva que verifique si una palabra es palíndroma.
Un programa que cuente cuántas palabras lo son.
INPUT:
Número de palabras: 5
Palabras: radar sol oso casa ana
OUTPUT:
Palíndromos encontrados: 3
(Palabras: radar, oso, ana)   // EJERCICIO COMPLETAR

*/

#include <iostream>
#include <cstring>
using namespace std;

bool esPalindromo(char palabra[], int i, int j) {
    if (i == j) 
        return true;
    if (palabra[i] != palabra[j])
        return false;
    
    return esPalindromo(palabra, i+1, j-1);
}


int main(){
    const int N = 20;

    const int MAX_LONG = 21;

    char palabras[N][MAX_LONG];

    //INPUT
    int n, contador = 0;
    cout << "Número de palabras: ";
    cin >> n;

    cout << "Palabras: ";

    for (int i = 0; i < n; i++) {
        cin >> palabras[i];
        int len = strlen(palabras[i]);

        if (esPalindromo(palabras[i], 0, len - 1)){
            contador++;
        }

    }

    cout << "Palíndromos encontrados: " << contador <<endl;





    return 0; 
}

