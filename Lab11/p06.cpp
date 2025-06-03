/*
Un número entero n se dice que es perfecto si la suma de sus divisores incluyendo 1 y
excluyéndose él coincide consigo mismo. Escribir una función que decida si un número
es perfecto. Por ejemplo 6 es un número perfecto 1 + 2 + 3 = 6.
*/
#include <iostream>
using namespace std;
bool esPerfecto(int n){
    int suma=0;
    for (int i = 1; i < n; i++){
        if (n%i==0){
            suma +=i;
        }
    }
    return suma == n;
}
int main(){
    int num;
    cout<<"Ingrese un numero entrero positivo: ";
    cin >> num;
    if (esPerfecto(num)){
        cout <<"Es un numero perfecto. " <<endl;
    }else{
        cout <<"No es un numero perfecto. "<<endl;
    }
    return 0;
}