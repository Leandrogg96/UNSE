/*
Modificar el ejercicio 2 para que a partir del vector DIGITOS para indicar si el número ingresado es capicúa o no
*/
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int DIGITOS[4],i,num,resto,reves = 0,copia;
	printf("Ingresa un numero de 4 digitos: ");
	scanf("%d", &num);
	copia = num;
	for(i = 0; i < 4; i++) {
		resto = copia % 10;
		copia /= 10;
		DIGITOS[i] = resto;
		reves = reves * 10 + resto;
	}
	printf("\n=====================\n");
	if(num == reves) printf("El numero %d es capicua", num);

	return 0;
}