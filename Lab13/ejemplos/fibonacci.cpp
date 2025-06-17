#include <iostream>
using namespace std;

int fibonacci(int n) {
    if (n == 0 || n ==1)
        return n;

    int a = 0, b = 1, temp;
    for (int i = 2; i <=n; ++i) {
        temp = a + b;
        a = b;
        b = temp;
    }
    return b;
}


int fibonacciRec(int n) {
    //Caso base
    if (n == 0 || n == 1)
        return n;

    //Caso recursivo
    return fibonacciRec(n-1) + fibonacciRec(n-2);
}
int main(){

    cout << fibonacci(8) <<endl;
    cout << fibonacciRec(8) <<endl;

    return 0; 
}