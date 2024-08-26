/*
Un comercio almacena el precio de la mercadería de sus artículos en un vector denominado PRECIOS. Actualizar
los precios de toda la mercadería teniendo en cuenta el porcentaje de incremento que sufrirán los precios (el
incremento es un porcentaje entero). Mostrar el vector original y el resultante.
*/
#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	float PRECIOS[5] = {13.22,55.3,21.34,65.2,76.4};
	int por_aumento, i;
	printf("Porcentaje de aumento: ");
	scanf("%d", &por_aumento);
	printf("\nPrecios: \n");
	for (i = 0; i < 5; i++) {
		printf("%.2f\n", PRECIOS[i]);
	}
	printf("\nPrecios con aumento: \n");
	for (i = 0; i < 5; i++) {
		printf("%.2f\n", (float)PRECIOS[i] + PRECIOS[i] * por_aumento / 100);
	}
	return 0;
}