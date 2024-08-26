#include <stdio.h>
#include <string.h>

#define max 2

struct infopersona {
	char nombre[15];
	char apellido[15];
	int edad;
	char pais[20];
	char provincia[20];
};


int main() {
	//Inicializacion de variables
	int i;

	//Inicializacion de estrucutas
	struct infopersona persona[max];

	for(i = 0; i < max; i++) {
		printf("\nEscriba el Nombre de la persona numero %d: ", i + 1);
		scanf("%s", &persona[i].nombre);
		fflush(stdin);

		printf("\nEscriba el Apellido de la persona numero %d: ", i + 1);
		scanf("%s", &persona[i].apellido);
		fflush(stdin);

		printf("\nEscriba la Edad de la persona numero %d: ", i + 1);
		scanf("%d", &persona[i].edad);
		fflush(stdin);

		printf("\nEscriba el Pais de la persona numero %d: ", i + 1);
		scanf("%s", &persona[i].pais);
		fflush(stdin);

		printf("\nEscriba la Provincia de la persona numero %d: ", i + 1);
		scanf("%s", &persona[i].provincia);
		fflush(stdin);
	}

	printf("\nLos Registros de personas son: \n");

	for(i = 0; i < max; i++) {
		printf("\n\n");
		printf("%s ", persona[i].nombre);
		printf("%s", persona[i].apellido);
		printf("\nEdad: %d", persona[i].edad);
		printf("\nPais: %s", persona[i].pais);
		printf("\nProvincia: %s", persona[i].provincia);

	}

	return 0;
}