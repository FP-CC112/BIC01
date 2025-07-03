/*
Implemente un programa con funciones: 
(a) para calculo del area del circulo,
(b) el area de un cuadrado y 
(c) los volumenes de un cilindro y 
(d) de un prisma.
El programa debe hallar la diferencia de volumenes de un cilindro
y un prisma de base cuadrada, que sean de la misma altura, 
en los cuales la base del cilindro circunscribe a la base del prisma.
INPUT:
Radio del circulo base: 5
Altura de ambas figuras: 20

OUTPUT:
Volumen del cilindro: 1570.8
Volumen del prisma: 1000.00
Diferencia de volúmenes (cilindro - prisma): 500.00
El cilindro tiene mayor volumen.
*/

#include <iostream>
#include <cmath>
#include <cstdlib>
#include <cstring>
using namespace std;
//const double PI = 3.1416;

//a)
double areaCirculo(double radio) {
    return M_PI * pow(radio,2);
}

//b)
double areaCuadrado(double radio) {
    return 2 * radio * radio;
}

// c)
double volumenCilindro(double radio, double altura) {
    return areaCirculo(radio) * altura;
}

// d)
double volumenPrisma(double radio, double altura) {
    return areaCuadrado(radio) * altura;
}

int main(){

    double radio, altura;
    cout << "Radio del circulo base: ";
    cin >> radio;
    cout << "Altura de ambas figuras: ";
    cin >> altura;

    //OUTPUT
    double vCil = volumenCilindro(radio, altura);
    double vPrisma = volumenPrisma(radio, altura);

    cout << "Volumen del cilindro: " << vCil <<endl;
    cout << "Volumen del prisma: " << vPrisma <<endl;

    cout << "Diferencia de volúmenes (cilindro - prisma): " << vCil - vPrisma <<endl;

    cout << "El cilindro tiene mayor volumen.";

    


    return 0; 
}