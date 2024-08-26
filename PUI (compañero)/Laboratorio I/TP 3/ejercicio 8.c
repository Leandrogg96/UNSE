/*
Generar con 6 elementos los vectores CANTIDAD y PRECIO, y con sus valores genere el vector TOTAL A
PAGAR. Mostrar los arreglos con el siguiente formato:
*/
#include <stdio.h>
#include <stdlib.h>

#define N 6

int main(int argc, char *argv[]) {
	int CANTIDAD[N] = {2,3,1,4,6,2};
	float PRECIO[N] = {4.50,15.99,30.33,44.12,09.55,80.67};
	float Total[N], sum;
	int i;
	for (i = 0; i < N; i++) {
		Total[i] = (float) CANTIDAD[i] * PRECIO[i];
		sum += Total[i];
	}
	printf("CANTIDAD\tPRECIO\t\tTOTAL A PAGAR\n");
	printf("_________________________________________\n");
	for (i = 0; i < N; i++) {
		printf("%d \t\t %.2f \t\t %.2f \n", CANTIDAD[i], PRECIO[i], Total[i]);
	}
	printf("\t\t\t\t____________________\n");
	printf("\t\tTOTAL\t\t%.2f",sum);
	return 0;
}