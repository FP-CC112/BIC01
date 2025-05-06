# Repaso: Estructuras de Control en C++

# Sesión 5
## 1. Estructuras Condicionales

### 1.1. Instrucción `if-else`

Permite ejecutar un bloque de código si una condición se cumple y otro bloque si no se cumple.

```cpp
#include <iostream>
using namespace std;

int main() {
    //ingreso de datos
    int numero;
    cout << "Ingrese un número: ";
    cin >> numero;

    //Procesamiento - salida
    if (numero % 2 == 0) {
        cout << "El número es par." << endl;
    } else {
        cout << "El número es impar." << endl;
    }
    return 0;
}
```

#### Ejercicio Propuesto:

* Escriba un programa que reciba una nota entre 0 y 20 y determine si el estudiante aprobó (nota >= 10).

---

### 1.2. Instrucción `if - else if - else`

Permite verificar múltiples condiciones de forma secuencial.

```cpp
#include <iostream>
using namespace std;

int main() {
    int nota;
    cout << "Ingrese su nota: ";
    cin >> nota;

    if (nota >= 18) {
        cout << "Excelente." << endl;
    } else if (nota >= 14) {
        cout << "Bueno." << endl;
    } else if (nota >= 10) {
        cout << "Regular." << endl;
    } else {
        cout << "Desaprobado." << endl;
    }
    return 0;
}
```

#### Ejercicio Propuesto:

* Escriba un programa que determine el nivel de un jugador según su puntuación.

---

### 1.3. Condicionales anidadas

Permite incluir un `if` dentro de otro `if`.

```cpp
#include <iostream>
using namespace std;

int main() {
    int edad;
    char sexo;
    cout << "Ingrese su edad: ";
    cin >> edad;
    cout << "Ingrese su sexo (M/F): ";
    cin >> sexo;

    if (edad >= 18) {
        if (sexo == 'M') {
            cout << "Es un hombre adulto." << endl;
        } else {
            cout << "Es una mujer adulta." << endl;
        }
    } else {
        cout << "Es menor de edad." << endl;
    }
    return 0;
}
```

#### Ejercicio Propuesto:

* Escriba un programa que determine si una persona puede votar, y si es hombre o mujer.

---

### 1.4. Estructura `switch`

Se utiliza cuando se desea comparar una variable con múltiples valores constantes.

```cpp
#include <iostream>
using namespace std;

int main() {
    int dia;
    cout << "Ingrese un número de día (1-7): ";
    cin >> dia;

    switch (dia) {
        case 1: cout << "Lunes"; break;
        case 2: cout << "Martes"; break;
        case 3: cout << "Miércoles"; break;
        case 4: cout << "Jueves"; break;
        case 5: cout << "Viernes"; break;
        case 6: cout << "Sábado"; break;
        case 7: cout << "Domingo"; break;
        default: cout << "Día inválido";
    }
    cout << endl;
    return 0;
}
```

#### Ejercicio Propuesto:

* Escriba un programa que muestre el nombre del mes a partir de su número (1 al 12).

---

#  Sesión 6
## 2. Estructuras Repetitivas

### 2.1. Bucle `do-while`

Ejecuta el bloque de código al menos una vez y luego repite mientras se cumpla la condición.

```cpp
#include <iostream>
using namespace std;

int main() {
    int n;
    do {
        cout << "Ingrese un número positivo: ";
        cin >> n;
    } while (n <= 0);

    cout << "Ingresaste: " << n << endl;
    return 0;
}
```

#### Ejercicio Propuesto:

* Solicite al usuario una contraseña y no lo deje continuar hasta que sea correcta.

---

### 2.2. Bucle `while`

Repite el bloque de código mientras la condición sea verdadera.

```cpp
#include <iostream>
using namespace std;

int main() {
    int contador = 1;
    while (contador <= 5) {
        cout << "Número: " << contador << endl;
        contador++;
    }
    return 0;
}
```

#### Ejercicio Propuesto:

* Sumar los números pares entre 1 y 100.

---

### 2.3. Bucle `for`

Utiliza una variable de control que se inicializa, verifica y actualiza automáticamente.

```cpp
#include <iostream>
using namespace std;

int main() {
    for (int i = 1; i <= 10; i++) {
        cout << i << " al cuadrado es " << i * i << endl;
    }
    return 0;
}
```

#### Ejercicio Propuesto:

* Mostrar la tabla de multiplicar de un número ingresado por el usuario.

---

## Resumen de las Estructuras de Control

* **`if`, `else`, `else if`**: Permiten tomar decisiones en función de condiciones.
* **Condicionales anidadas**: Permiten decisiones jerárquicas.
* **`switch`**: Alternativa cuando se evalúan muchas constantes.
* **`while`**: Repite mientras una condición es verdadera.
* **`do-while`**: Repite al menos una vez.
* **`for`**: Repite un número determinado de veces.

## Ejercicios 

1. **Menú interactivo:** Crear un programa que muestre un menú (usando `switch`) con opciones para calcular el área de diferentes figuras geométricas. El programa debe permitir al usuario elegir una opción repetidamente (usar `do-while`).

2. **Sistema de login con intentos:** El usuario tiene 3 intentos para ingresar la contraseña correcta. Usar `while` o `for`, y condicionales anidadas para verificar usuarios y contraseñas.

3. **Cálculo de estadísticas:** Ingresar números hasta que se ingrese un número negativo. Calcular y mostrar el promedio, número mayor y menor. Usar combinación de `while`, `if` y variables auxiliares.

4. **Juego adivinanza:** El programa genera un número aleatorio y el usuario debe adivinarlo. Indicar si el número es mayor o menor. Usar `do-while` o `while`, y condicionales.

5. **Generador de secuencias:** Pedir al usuario un tipo de secuencia (pares, impares, Fibonacci, etc.) y la cantidad de términos. Combinar `switch` para opciones y `for` o `while` para generar la secuencia.
