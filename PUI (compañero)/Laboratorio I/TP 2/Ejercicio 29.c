/*
Mostrar los divisores de un número ingresado sin considerar al 1 y al mismo número.
Si no se encuentran divisores mostrarel mensaje “El numero ingresado es primo”.
*/
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int num, div,b = 0;
	printf("Ingrese un numero: ");
	scanf("%d", &num);
	for(int i = 2; i<num && b == 0; i++) {
		if (num % i == 0) {
			printf("El numero %d es divisor de: %d\n", num, i);
		} else {
			b = 1;
		}
	}
	if (b == 1) {
		printf("El numero ingresado es primo");
	}
	return 0;
}