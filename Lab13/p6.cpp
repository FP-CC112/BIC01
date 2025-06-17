/*Crea una función recursiva que determine si una palabra es palíndromo.
Ejemplo: esPalindromo(“reconocer”) = true*/

#include <iostream>
#include <cstring> //srtlen()
#include <string>
using namespace std;


bool esPalindromo(char s[], int izquierdo, int derecho) {
    //Caso base
    if(izquierdo >= derecho)
        return true;
    
    if (s[izquierdo] != s[derecho])
        return false;
    
    //Caso recursivo
    return esPalindromo(s,izquierdo + 1, derecho - 1);
}

int main(){
    string s1 = "Hola";
    string s2 = " Mundo";
    string s3 = s1 + s2;
    cout << s3 <<endl;
    cout << s1.length() <<endl;
    cout << s2.length() <<endl;
    cout << s3.length() <<endl;


    if (s1 == s2) {
        cout << "Las cadenas son iguales";
    } else {
        cout << "Las cadenas no son iguales" <<endl;
    }


    char p[] = "reconocer"; // "reconocer\0"

    //string p = "reconocer";

    int n = strlen(p); //sizeof(p)/sizeof(p[0]);

    if (esPalindromo(p, 0, n-1)) {
        cout << "La cadena es palindromo" <<endl;
    } else {
        cout << "La cadena no es palindromo" << endl;
    }



    return 0; 
}