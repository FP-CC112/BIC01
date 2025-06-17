#include <iostream>
using namespace std;
void duplicarValor(int &x) {
    cout << "La dirección de x es: " <<&x << endl;
    x = x * 2;
    cout << "Dentro de la función: " << x << endl;
}

int main() {
    int numero = 5;
    cout <<"La dirección de numero es: " << &numero << endl;
    cout << "Antes de llamar a la función: " << numero << endl;
    duplicarValor(numero);
    cout << "Después de llamar a la función: " << numero << endl;
    return 0;
}
