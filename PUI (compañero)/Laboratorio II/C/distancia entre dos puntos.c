#include <stdio.h>
#include <math.h>

struct matematica {
	double numero1;
	double numero2;
};

int main() {
	double aux, punto1, punto2,distancia;
	struct matematica punto;
	int menuOpc;
	do {
		printf("\n\nSeleccione una opcion:\n");
		printf("1) Calcular distancia entre dos puntos\n");
		printf("0) Salir\n");
		printf("Ingrese el numero de la Opcion: ");
		scanf("%d", &menuOpc);
		fflush(stdin);

		switch (menuOpc) {
			case 1:
				printf("\nIngresa x1: ");
				scanf("%lf", &punto.numero1);
				fflush(stdin);
				printf("Ingresa x2: ");
				scanf("%lf", &punto.numero2);
				fflush(stdin);
				punto1 = pow(punto.numero2 - punto.numero1, 2);

				printf("\nIngresa y1: ");
				scanf("%lf", &punto.numero1);
				fflush(stdin);
				printf("Ingresa y2: ");
				scanf("%lf", &punto.numero2);
				fflush(stdin);
				punto2 = pow(punto.numero2 - punto.numero1, 2);

				distancia = sqrt(punto1 + punto2);
				printf("\n\nDistancia: %lf", distancia);

				break;
		}


	} while(menuOpc);
	return 0;

}