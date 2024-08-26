#include <stdio.h>

int main() {
	
	// Declaro variables:
	int j, k; 
	int *ptr; // El operador "*" es de deferencia.
	
	// Inicializo variables:
	printf("Ingresa un valor entero: ");
	scanf("%d", &j);
	printf("\nIngresa otro valor entero: ");
	scanf("%d", &k);
	
	// Asigno al puntero "ptr" la direccion de memoria de la variable "k":
	ptr = &k; // El operador "&" es de referencia.
	
	printf("\nEl primer valor que ingresaste, 'X1', tiene el valor: %d y esta alojado en la direccion: %p\n", j, &j); // El operador "&" es de referencia.
	printf("\nEl segundo valor que ingresaste, 'X2', tiene el valor: %d y esta alojado en la direccion: %p\n", k, &k); // El operador "&" es de referencia.
	printf("\nDurante el intercambio, el puntero auxiliar almacena la direccion de 'X1': %p y esta alojado en la direccion: %p\n", ptr, &ptr); // El operador "&" es de referencia.
	printf("\nPor lo tanto, el valor del entero al que apunta el puntero es: %d", *ptr); // El operador "*" es de deferencia.
	
	return 0;
}