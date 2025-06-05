/*
Programa  para determinar si tres tri?ngulos son v?lidos
En caso afirmativo, calcular su área
*/

#include <iostream>
#include <cmath>
using namespace std;

// Prototipos
bool esTriangulo(double a, double b, double c);
double areaTriangulo(double a, double b, double c);
void mostrarArea(double a, double b, double c, int id);



int main() {
    
    mostrarArea(3,4,5,1);
    mostrarArea(1,2,3,2);
    mostrarArea(7,24,25,3);

    

    return 0;
}

//Definiciones

bool esTriangulo(double a, double b, double c) {
    return (a + b > c) && (a + c > b) && (b + c > a);
}

double areaTriangulo(double a, double b, double c) {
    double s = (a + b + c) / 2.0;
    double area = sqrt(s * (s - a) * (s - b) * (s - c));
    return area;
}

void mostrarArea(double a, double b, double c, int id) {
    if (esTriangulo(a,b,c)) {
        cout << "Area del triangulo " << id << " es: " << areaTriangulo(a,b,c) <<endl; 
    } else {
        cout << "El triangulo " << id << " no es valido" <<endl;
    }
}
