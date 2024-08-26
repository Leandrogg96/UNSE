/*
Generar el vector PRECIOS con los siguientes valores: 13.25, 18.20, 43.99, 106.45, y 81.93. Mostrar los valores del
arreglo, el precio promedio, así también como el mayor y el menor precio
*/
#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	float PRECIOS[5] = {13.25,18.20,43.99,106.45,81.93};
	float sum = 0, may = 0.00, men = 999.00;
	int i;
	for (i = 0; i < 5; i++) {
		printf("PRECIOS[%d]: %.2f ",i,PRECIOS[i]);
		sum += PRECIOS[i];
		if (PRECIOS[i] > may) {
			may = PRECIOS[i];
		}
		if (PRECIOS[i] < men) {
			men = PRECIOS[i];
		}
	}
	printf("\n====================\n");
	printf("Promedio: %.2f \n Mayor Precio: %.2f \n Menor Precio: %.2f", sum / 5, may ,men);
	return 0;
}