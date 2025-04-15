//un programa que reciba dos números enteros y
// compruebe si son iguales o no.
#include <iostream>
using namespace std;

int main(){
    int a,b;
    cout << "Escriba 2 numeros: " << endl;
    cin >> a >> b;
    
    if (a == b){
        cout << "Los numeros son iguales";
    }else{ 
        cout << "Los numeros no son iguales";
    }
}
