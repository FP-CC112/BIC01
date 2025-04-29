/*Realice un programa que reciba como dato un número entero n
 y calcule el factorial de dicho número. 
Recuerda que 0! = 1, 1! = 1 y n! = n ×(n −1)!*/

#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Ingrese en entero positivo: ";
    cin >> n;

    int factorial = 1;
    //Utilizando for
    for (int i = 1; i <= n; ++i){
        factorial *= i;
    }

    cout << "El factorial de " << n << " es: " <<factorial <<endl;

    //Utilizando while
    int factorial1 = 1;
    int j = 1;
    while(j <= n){
        factorial1 *= j;
        j++;
    }

    cout << "El factorial de " << n << " es: " <<factorial1 <<endl;


    //Utilizando do-while
    int factorial2 = 1;
    int k = 1;
    do{
        factorial2 *= k;
        k++;
    }while(k <= n);

    cout << "El factorial de " << n << " es: " <<factorial2 <<endl;


    return 0; 
}