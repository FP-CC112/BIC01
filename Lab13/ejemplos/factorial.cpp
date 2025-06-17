#include <iostream>
using namespace std;

int factorial(int n) {
    int resultado = 1;
    for(int i = 2; i <= n; ++i) {
        resultado *= i;
    }
    return resultado;
}

int factorialRec(int n) {
    //Caso base
    if (n == 1 || n == 0)
        return 1;
    //Caso recursivo
    return n * factorialRec(n-1);
}

int main(){
    cout << factorial(10) <<endl;
    cout << factorial(35) << endl;

    return 0; 
}