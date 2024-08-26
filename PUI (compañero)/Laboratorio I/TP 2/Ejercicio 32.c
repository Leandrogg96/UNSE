#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>


int main(int argc, char *argv[]) {
	int n,cod, c_8 = 0;
	float rating,sum_rating = 0, rating_anual = 0, prom = 0;
	char tp;
	printf("Ingrese el numero de programas de la radio: ");
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		printf("Ingrese el codigo de programa: ");
		scanf("%d", &cod);
		getchar();
		printf("Ingrese el tipo de programa (P-I-N): ");
		scanf("%c", &tp);
		for (int j = 1; j <= 2; j++) {
			printf("Rating (0 - 10) del programa en el mes %d: ", j);
			scanf("%f", &rating);
			sum_rating += rating;
		}

		rating_anual = (float) sum_rating / 10;
		tp = tolower(tp);
		if (tp == 'i' && rating_anual > 8) {
			c_8++;
		}
		if (tp == 'p') {
			prom += sum_rating;
		}
	}
	printf("Cantidad de programas de interes general con un ratingsuperior a 8 puntos: %d \n", c_8);
	printf("Promedio del rating de los programas politicos: %.2f", prom / n);
	return 0;
}