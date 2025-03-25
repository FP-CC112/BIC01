# Laboratorio: Introducción a PSeInt y Visual Studio Code

## Objetivo
Familiarizar a los estudiantes con el uso del software PSeInt para escribir y ejecutar pseudocódigo, así como con el entorno de desarrollo Visual Studio Code para futuras implementaciones en C++ y otros lenguajes.

## 1. Introducción a PSeInt
### 1.1. ¿Qué es PSeInt?
PSeInt es una herramienta que permite escribir y ejecutar pseudocódigo de manera visual, ayudando a los estudiantes a aprender lógica de programación.

### 1.2. Instalación
1. Descargar desde [https://pseint.sourceforge.net/](https://pseint.sourceforge.net/)
2. Instalar el software siguiendo las instrucciones del instalador.

### 1.3. Interfaz de PSeInt
- Área de edición de código
- Panel de ejecución
- Panel de depuración
- Diagrama de flujo

### 1.4. Primeros Pasos en PSeInt
#### Ejercicio 1: "Hola Mundo"
Escribir un pseudocódigo que muestre en pantalla el mensaje "Hola, mundo".

```pseudocode
Algoritmo HolaMundo
    Escribir "Hola, mundo"
FinAlgoritmo
```

#### Ejercicio 2: Operaciones Básicas
Escribir un pseudocódigo que solicite dos números y muestre la suma, resta, multiplicación y división de ellos.

```pseudocode
Algoritmo OperacionesBasicas
    Definir num1, num2 Como Real
    Escribir "Ingrese el primer número:"
    Leer num1
    Escribir "Ingrese el segundo número:"
    Leer num2
    Escribir "Suma:", num1 + num2
    Escribir "Resta:", num1 - num2
    Escribir "Multiplicación:", num1 * num2
    Escribir "División:", num1 / num2
FinAlgoritmo
```

---

## 2. Introducción a Visual Studio Code 
### 2.1. ¿Qué es Visual Studio Code?
Visual Studio Code (VS Code) es un editor de código fuente desarrollado por Microsoft con soporte para múltiples lenguajes de programación.

### 2.2. Instalación
1. Descargar desde [https://code.visualstudio.com/](https://code.visualstudio.com/)
2. Instalar el software siguiendo las instrucciones del instalador.

### 2.3. Interfaz de VS Code
- Explorador de archivos
- Editor de código
- Terminal integrada
- Extensiones

### 2.4. Configuración básica
- Instalación de extensiones recomendadas: "PSeInt Syntax Highlighting", "C++", "Code Runner".

### 2.5. Creación de un archivo de pseudocódigo en VS Code
1. Abrir VS Code y crear un nuevo archivo con extensión `.psc`.
2. Escribir el pseudocódigo del Ejercicio 1 en este archivo.
3. Guardar y ejecutar desde PSeInt.

---

## 3. Ejercicios adicionales
#### Ejercicio 3: Determinar si un número es par o impar
```pseudocode
Algoritmo ParImpar
    Definir num Como Entero
    Escribir "Ingrese un número:"
    Leer num
    Si num MOD 2 = 0 Entonces
        Escribir "El número es par"
    Sino
        Escribir "El número es impar"
    FinSi
FinAlgoritmo
```

#### Ejercicio 4: Tabla de multiplicar de un número
```pseudocode
Algoritmo TablaMultiplicar
    Definir num, i Como Entero
    Escribir "Ingrese un número:"
    Leer num
    Para i <- 1 Hasta 10 Hacer
        Escribir num, " x ", i, " = ", num * i
    FinPara
FinAlgoritmo
```

---
## Resúmen
- Manejo de la interfaz de PSeInt y la ejecución de pseudocódigo.
- Escribir pseudocódigo en Visual Studio Code.

### Tarea:
Implementar un pseudocódigo que calcule el factorial de un número ingresado por el usuario.
