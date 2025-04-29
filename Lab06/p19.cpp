/*Escriba un programa que reciba un
 número y determine si es primo o no*/

#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "ingrese un entero: ";
    cin >> n;
    bool esPrimo = true;

    if (n == 1){
        esPrimo = false;
    } else{
        for(int  i = 2; i < n; i++){
            if(n % i == 0){
                esPrimo = false;
                break; //terminar el ciclo
            }
        }
    }

    if(esPrimo){
        cout << n << " es primo" <<endl;

    }else{
        cout << n  << " no es primo" << endl;
    }




    return 0; 
}