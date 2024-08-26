//Generar el vector EDADES con 8 números enteros y mostrar el vector resultante

#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	int EDADES[8], i;
	for(i = 0; i < 8; i++) {
		printf("Ingresa un numero entero: ");
		scanf("%d",&EDADES[i]);
	}
	for(i = 0; i < 8; i++) {
		printf("EDADES[%d]: %d ",i,EDADES[i]);
	}
	return 0;
}