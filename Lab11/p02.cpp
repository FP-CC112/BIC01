/*Escribir una función lógica de dos argumentos enteros, que 
devuelva true si uno divide al otro y false en caso contrario*/
#include <iostream>
using namespace std;

bool divide(int a, int b) {
    if (b != 0) {
        if (a % b == 0) {
        return true;
    }
    return false;
    }
    return false;
    
}

int main(){
    cout << divide(2,0) <<endl;
    cout << divide(0,2) <<endl;
    cout << divide(7,3) <<endl;
    cout << divide (2,4) <<endl;

    return 0; 
}