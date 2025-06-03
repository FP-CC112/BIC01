#include <iostream>
#include <cmath>
using namespace std;
void fTrigonometricas(double a){
    cout<<"Sen( "<<a<<") = "<<sin(a)<<endl;
    cout<<"Cos("<<a<<") = "<<cos(a)<<endl;
    if(cos(a)!=0) {
        cout<<"Tang("<<a<<") =  "<<tan(a)<<endl;}
    else{
        cout<<"No existe tangente de "<<a<<endl;
    }
    if(sin(a)!=0) {
        cout<<"Cotan( "<<a<<") = "<<1/tan(a)<<endl;}
    else{
        cout<<"No existe Cotangente de "<<a<<endl;
    }
}

int main(){
    double a;
    cout<<"Ingrese un angulo en radianes: ";
    cin>>a;
    cout<<"Funciones trigonometricas:"<<endl; 
    fTrigonometricas(a);
    return 0;
}