/*
Implemente un programa que simule el comportamiento
de una máquina Expendedora

La máquina tiene 4 productos
1. Agua (s/1.50)
2. Galleta (s/ 2.00)
3. Gaseosa (s/2.50)
4. Chocolate (3.00)
5. Salir

El usuario tiene una tarjeta con un saldo inicial de 10 soles

La máquina debe mostrar las opciones repetidamente
hasta que el usuario decida salir o se quede sin saldo

*/

#include <iostream>
using namespace std;

int main(){
    double saldo = 10.0;
    int opcion; //variable sin inicializar


    do {
        cout << "Saldo actual: " << saldo <<endl;

        cout << "----Seleccione un producto ------\n";
        cout << "1. Agua (s/1.50)\n"; 
        cout << "2. Galleta (s/ 2.00)\n";
        cout << "3. Gaseosa (s/2.50)\n";
        cout << "4. Chocolate (3.00)\n";
        cout << "5. Salir\n";

        cin >>opcion;

        if (opcion < 1 || opcion > 5) {
            cout << "Opci+on inválida, intente de nuevo....\n";
            continue;
        }

        if (opcion == 5) {
            cout << "Gracias  por usar la máquina. Hasta pronto\n";
            break; // FINALIZA EL BUCLE DONDE SE ENCUENTRA
        }

        double precio = 0; // ámbito adecuado para precio

        switch (opcion) {
            case 1: 
                cout << "Eligió Agua\n";
                precio = 1.50;
                break;
            case 2: 
                cout << "Eligió Galleta\n";
                precio = 2.00;
                break;
            case 3: 
                cout << "Eligió Gaseosa\n";
                precio = 2.50;
                break;
            case 4: 
                cout << "Eligió Chocolate\n";
                precio = 3.00;
                break;  
            // default:
            //     cout << "opción inválida"; 
            //     break;
        }

        if (saldo < precio) {
            cout << "Saldo insuficiente\n"; 
        }else {
            cout << "Entregando producto......\n";
            saldo = saldo - precio; //actualizamos el saldo del usuario

        }

        if (saldo < 1.50) {
            cout << "Saldo insuficiente para seguir comprando\n";
            break;
        }





    } while (opcion != 5);



    return 0; 
}