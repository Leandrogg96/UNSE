#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int n, cod, ingreso, may_ingreso = 0, sum = 0, may_cod = 0, ingreso_anual = 0;
	printf("Ingrese el numero de los contribuyentes: ");
	scanf("%d", &n);
	for(int i = 0; i < n; i++) {
		printf("Ingrese el codigo de contribuyente: ");
		scanf("%d", &cod);
		for(int j = 1; j <= 12; j++) {
			printf("Ingrese su ingreso mensual: \n");
			scanf("%d", &ingreso);

			if(may_ingreso < ingreso) {
				may_ingreso = ingreso;
			}
			sum += ingreso;


		}
		if(ingreso < sum) {
			may_cod = cod;
		}
		printf("El mayor ingreso mensual del contribuyente %d: %d", i + 1, may_ingreso);

	}
	printf("Codigo del contribuyente con mayor ingreso anual: %d", may_cod);

	return 0;
}