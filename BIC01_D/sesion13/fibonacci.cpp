#include <iostream>
using namespace std;

// 0, 1 , 2,  3, 5 ...

int fibonacci(int n) {
    if(n == 0)
        return 0;
    if (n == 1)
        return 1;
    
    int a = 0, b = 1, c;
    for(int i = 2; i <= n; ++i) {
        c = a + b;
        a = b;
        b = c;
    }
    return b;
}

int fibonacciRecursivo(int n) {
    //Caso base
    if(n == 0)
        return 0;
    if (n == 1)
        return 1;
    
    //Caso recursivo: fib(n) = fib(n-1) + fib(n-2)
    return fibonacciRecursivo(n-1) + fibonacciRecursivo(n-2);
}

int main(){
    cout << fibonacci(5) << endl;
    cout << fibonacciRecursivo(5) << endl;

    return 0; 
}