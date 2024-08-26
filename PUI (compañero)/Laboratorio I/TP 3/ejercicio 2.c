//Generar el vector DÍGITOS con un número de 4 dígitos. Mostrar el vector resultante

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int DIGITOS[4],i,num,resto,n2,div,n3;
	printf("Ingresa un numero de 4 digitos: ");
	scanf("%d", &num);
	// Digitos separados de atras para adelante
	n3 = num;
	for(i = 0; i < 4; i++) {
		resto = n3 % 10;
		n3 /= 10;
		DIGITOS[i] = resto;
	}
	printf("\n=====================\n");
	for(i = 0; i < 4; i++) {
		printf("DIGITOS[%d]: %d ", i, DIGITOS[i]);
	}
	printf("\n=====================\n");
	// Digitos separados de adelante hacia atras
	n3 = num;
	n2 = 1000;
	for(i = 0; i < 4; i++) {		
		div = n3 / n2;
		n3 -= div * n2;
		DIGITOS[i] = div;
		n2 /= 10;
	}
	for(i = 0; i < 4; i++) {
		printf("DIGITOS[%d]: %d ", i, DIGITOS[i]);
	}
	return 0;
}