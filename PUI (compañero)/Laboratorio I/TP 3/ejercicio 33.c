/*
Ingresar un conjunto de diez cadenas de caracteres.
Ordenar conjunto resultante
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define N 10

int main(int argc, char *argv[]) {
	char cadena[N][50], aux[50];
	int i,j = 0,p;
	for(i = 0; i < N; i++) {
		printf("Cadena %d: ", i + 1);
		gets(cadena[i]);
	}
	printf("\n Conjunto cadena sin ordenar Alfabeticamente\n");
	for(i = 0; i < N; i++) {
		printf("%s \n", cadena[i]);
	}

	//Metodo de ordenamiento por Seleccion
	for(i = 0; i < N - 1; i++) {
		p = i;
		for(j = i + 1; j < N; j++) {
			if(strcmp(cadena[p],cadena[j]) > 0 ) {
				p = j;
			}

		}
		strcpy(aux, cadena[p]);
		strcpy(cadena[p], cadena[i]);
		strcpy(cadena[i], aux);

	}	
	if(isupper(cadena[i]))
	printf("\n \nConjunto cadena ordenado Alfabeticamente\n");
	for(i = 0; i < N; i++) {
		printf("%s \n", cadena[i]);
	}
	return 0;
}