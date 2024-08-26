/*Generar el vector EDADES con 8 números enteros y mostrar el vector resultante.*/
#include <stdio.h>
#include <stdlib.h>

#define DIM 8

int main(int argc, char *argv[]) {
	int edades[DIM];
	int i;
	printf("Generacion/Carga del Vector Edades\n");
	for (i=0;i<DIM;i++){
		printf("Ingrese el elemento %d del vector:",i+1);
		scanf("%d",&edades[i]);
	}
	
	printf("El vector Edades Generado es el siguiente: ");
	for (i=0;i<DIM;i++){
		printf("[%d]",edades[i]);
	}
	
	return 0;
}