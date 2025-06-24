#include <iostream>
#include <cstdlib> // rand() srand()
#include <ctime> // time()
using namespace std;

int main(){
    char c[] = {72, 'o', 108,'a','\0'}; //agregar caracter nulo
    char d[] = "Hola mundo";

    cout << c << endl;
    cout << d << endl;

    // TABLA ASCII
    for (int i = 32; i <=126; i++) {
        cout << i << "\t" << (char)i <<endl;
    }


    char cad[25];
    srand(time(0));
    for (int i = 0; i < 25; ++i) {
        cad[i] = 'A' + rand() % 26;
        cout << cad[i] << " ";
    }




    return 0; 
}