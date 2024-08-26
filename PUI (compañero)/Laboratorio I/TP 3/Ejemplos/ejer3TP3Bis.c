/*Generar el vector EDADES con 8 números enteros y mostrar el vector resultante.
  Version en la que se inicializa el vector*/
#include <stdio.h>
#include <stdlib.h>

#define DIM 4

int main(int argc, char *argv[]) {
	int edades[DIM]={2,4,6,8};
	int i;

	
	printf("El vector Edades Generado es el siguiente: ");
	for (i=0;i<DIM;i++){
		printf("[%d]",edades[i]);
	}
	
	return 0;
}