// Escribir un programa que, al recibir como dato el
//precio de un producto importado,incremente 11 % 
//el mismo si es inferior a 1500 soles y en 8 % si fuera mayor o igual
// a dicho precio; además, debe escribir el nuevo precio
//del producto. Escribir el nuevo precio del producto

#include <iostream>
using namespace std;

int main(){
    float p , inc ;
    cout << "ingrese el precio: " << endl;
    cin >> p;

    if (p < 1500){
        inc = p*1.1;
        cout << "el nuevo precio: " << inc <<endl;
    
    }else{
        inc = p*1.08;
        cout << "el nuevo precio " << inc;
        
    }
    return 0; 
}