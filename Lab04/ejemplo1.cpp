#include <iostream>
using namespace std;

int main(){
    char respuesta;
    cout << "Esta lloviendo?";
    cin >> respuesta;

    //sintaxis de la estructura condicional
    if(respuesta == 's') {
        cout << "debe llevar un paraguas" <<endl; 
    }

    if(respuesta == 'n'){
        cout << "No es necesario llevar un paraguas" <<endl; 
    }


    return 0; 
}