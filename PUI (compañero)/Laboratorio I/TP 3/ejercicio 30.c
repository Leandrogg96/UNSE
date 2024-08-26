/*
Ejercicio 30: Contar la cantidad de palabras contenidas en una cadena de caracteres. Se considera que existe una palabra cuando
existe una transición de un espacio en blanco hacia un carácter imprimible. Tenga en cuenta que las cadenas solo
contiene palabras separadas por espacios en blanco
Modificar el programa anterior para que extraiga y muestre todas y cada una de las palabras contenidas en la cadena
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {
	char cadena[50], pb[6][10],ca[10];
	int i, palabra = 0, ct = 0;
	printf("Ingrese una oracion: ");
	gets(cadena);

	printf("\nOracion: %s  \n",cadena);
	for(i = 0; i <= strlen(cadena); i++) {
		ca[ct] = cadena[i];
		printf("%c",cadena[i]);
		if(cadena[i] == ' ' || i == strlen(cadena)) {
			ca[ct] = '\0';
			strcpy(pb[palabra], ca);
			ct = 0;
			printf("\n");
			palabra++;
		} else {
			ct++;
		}
	}
	printf("\n\n");
	for(i = 0; i < palabra + 1; i++) {
		printf("%s \n", pb[i]);
	}
	printf("\nCantidad de palabras: %d", palabra);
	return 0;
}