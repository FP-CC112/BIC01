#include <iostream>
using namespace std;

int factorial(int n) {
    int resultado = 1;
    for (int i = 2; i <= n; ++i) {
        resultado *=i;
    }
    return resultado;
}

int factorialRecursivo(int n) {
    // Caso base
    if (n == 0 || n == 1)
        return 1;
    
    //Caso recursivo
    //n! = n * n-1* ... 2*1 = n*(n-1)!
    return n * factorialRecursivo(n-1);

}

int main(){
    cout << factorial(5) <<endl;
    cout << factorialRecursivo(5) <<endl;

  return 0; 
}

//STACK FRAME
/*
n = 4
-->  4 * factorialRecursivo(3);
    -->  3* factorialRecursivo(2);
       -->  2 * factorialRecursivo(1);
                return 1
            return 2*1
         return 3*2*1
    return 4*3*2*1

LIFO
---------------------    
factorialRecursivo(1)
---------------------
factorialRecursivo(2)
---------------------
factorialRecursivo(3)
---------------------
factorialRecursivo(4)
---------------------
*/

//stack overflow