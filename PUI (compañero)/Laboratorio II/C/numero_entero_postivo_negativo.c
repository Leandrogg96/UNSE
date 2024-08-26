#include<stdio.h>

void positivo_negativo(int numero);

int main() {
	// Inicializacion de variables
	int numero;

	printf("Ingresar un valor entero: ");
	scanf("%d", &numero);
	positivo_negativo(numero);
	return 0;
}
// funcion positivo_negativo
// argumento: un numero entero
void positivo_negativo(int numero) {
	if(numero > 0) {
		printf("El número es positivo");
	} else if(numero < 0) {
		printf("El número es negativo");
	} else {
	    printf("El número no es positivo ni negativo");
	}
}
// debe completar la declaración y definición de la función