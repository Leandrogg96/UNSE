// Incluyo bibliotecas que se usaran en el trasncurso del programa.
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Declaro constantes.
#define PALS 4 
#define MAXLON 80

int main (){
	
	char *listaPal[PALS];    // Declaro un array de punteros a caracteres.
	char linea[MAXLON+1];    // Declaro un array de caracteres (string).
	int i;				     // Declaro una variable entera como 'contador'.
	
	for(i = 0; i < PALS; i++)     // Ciclo 'for' para el ingreso de las palabras (4).
	{
		printf("Teclea una palabra: "); 					       // Indica por pantalla el ingreso de una palabra.
		gets(linea);											   // Lee la palabra ingresada por el usuario y la almacena en el array 'linea'.
		listaPal[i] = malloc((strlen (linea) + 1) * sizeof(char)); // Asignacion dinamica de la memoria para almacenar la palabra en 'listaPal'.
		strcpy (listaPal[i], linea);                               // Copia la palabra ingresada y almacenada en 'linea' en la memoria asignada anteriormente ('listaPal').
	}
	
	for(i = 0; i < PALS; i++) // Ciclo 'for' para mostrar las palabras ingresadas.
	{
		printf("Palabra %i: %s\n", i, listaPal[i]); // Muestra las palabras con sus respectivos indices almacenadas en 'listaPal'.
	}
	
	for(i = 0; i < PALS; i++) // Ciclo 'for' para liberar la memoria luego de su asignacion dinamica.
	{
		free (listaPal[i]); // Libera la memoria en cada palabra almacenada.	
	}
	
	return 0; // Finaliza el programa.
}