/*
Escribir un programa que al recibir como dato una cadena de caracteres formada por
números y letras, en ese orden, imprima de forma sucesiva cada letra tantas veces
como indica el número que lo precede. Ejemplo si la cadena es 4p6c2f, el programa
debe imprimir ppppccccccff
*/

#include <iostream>
#include <cstring>
using namespace std;

void repetirCaracteres(const char str[]) {
    int n = strlen(str);
    int repeticiones = 0;

    for (int i = 0; i < n; ++i) {
        if (isdigit(str[i])) {
            repeticiones = repeticiones * 10 + (str[i] - '0');
        } else if (isalpha(str[i])){
            for (int j = 0; j < repeticiones; ++j) {
                cout << str[i];
            }
            repeticiones = 0;
        }
    }
    cout << endl;
}

void test() {
    repetirCaracteres("4p6c2f");
    repetirCaracteres("4p6c12f");  
}

int main(){
    test();

    return 0; 
}