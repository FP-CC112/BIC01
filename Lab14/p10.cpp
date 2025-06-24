/*
Escribir un programa que solicite una frase y lo imprima con sus letras ordenadas
de acuerdo al abecedario, en donde cada letra aparece tantas veces como en la frase.
Omitir los espacios y usar el abecedario ABCDEFGHIJKLMNOPQRSTUVWXYZ.
Por ejemplo:
Si se ingresa: "CUENTAN DE UN SABIO QUE UN DIA"
Da como resultado: "AAABCDDEEEIINNNNOQSTUUU"
Si se ingresa: "LA PALABRA MAGICA ES ABRACADABRA"
Da como resultado: "AAAAAAAAAAABBBCCDEGILLMPRRRS"
*/
#include <iostream>
#include <cstring>
using namespace std;

void ordenaCaracteres(const char str[]) {
    int n = strlen(str);
    for (char c = 'A'; c <= 'Z'; ++c) {
        for (int i = 0; i < n; ++i) {
            if (str[i] == c) {
                cout << str[i];
            }
        }
    }
    cout << endl;
}

void test(){
    ordenaCaracteres("CUENTAN DE UN SABIO QUE UN DIA");
    ordenaCaracteres("LA PALABRA MAGICA ES ABRACADABRA");  
}

int main(){
    test();


    return 0; 
}