/*
Escribir un programa que almacene en un arreglo los primeros 50 números de Fibonacci
y los muestre por pantalla en orden inverso
*/
#include <iostream>
using namespace std;

int main(){
    long long fibo[50];

    fibo[0] = 0;
    fibo[1] = 1;

    for (int i = 2; i < 50; ++i) {
        fibo[i] = fibo[i-1] + fibo[i-2];
    }

    for (int j = 49;  j >= 0; --j) {
        cout << fibo[j] << endl;
    }



    return 0; 
}