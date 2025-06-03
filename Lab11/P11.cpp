#include <iostream>
using namespace std;
double calcularMedia(int n){
    double suma=0;
    double num;
    for (int i=0, i<n;i++){
        cout <<"Ingrese numero: " <<(i+1)<<": ";
        cin>>num;
        suma+=num;
    }
    return suma / n;
}
 int main(){
    int n;
    cout <<"INgrese la cantidad de numeros (n>0): ";
    cin>> n;
    if (n>0){
        double media =calcularMedia(n);
        cout<<"La media es: "<< media<<endl;
    }else{
        cout <<"Cantidad invalida: "<<endl;
    }
    return 0;
 }
 