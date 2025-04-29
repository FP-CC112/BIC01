/*Escribe un programa que imprima los N primeros
términos de la sucesión
a = 0;
b = 1;
actual = a + b;
a = b;
b = actual;
*/

#include <iostream>
using namespace std;

int main(){
    int N;
    cout << "Ingrese la cantidad de términos: ";
    cin >> N;
    int a = 0;
    int b = 1;
    int actual;

    for(int i = 0; i < N; ++i){
        cout << a << "\t";
        actual = a + b;
        a = b;
        b = actual;
    }


    return 0; 
}