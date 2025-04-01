Algoritmo celsiusFarenheit
	Definir tempFarenheit, tempCelsius Como Real
	Definir opciones Como Entero;
	
	Escribir "Seleccione una opción: ";
	Escribir "1. Convertir Celsius a Farenheit";
	Escribir "2. Convertir Farenheit  a Celsius";
	Leer opciones;
	
	Segun opciones Hacer
		1:
			Escribir "Ingrese la temperatura en grados Celsuis: ";
			Leer tempCelsius;
			
			tempFarenheit = 9/5 * tempCelsius + 32;
			
			Escribir "La temperatura en grados Farenheit es: ", tempFarenheit;
		2:
			Escribir "Ingrese la temperatura en grados Farenheit: ";
			Leer tempFarenheit;
			
			tempCelsius = 5/9 * (tempFarenheit - 32);
			
			Escribir "La temperatura en grados Celsius es: ", tempCelsius;
		
		De Otro Modo:
			Escribir "Error, la opción no es válida"
	Fin Segun

FinAlgortmo