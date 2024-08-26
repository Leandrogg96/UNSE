/*
Contar la cantidad de palabras contenidas en una cadena de caracteres. Se considera que existe una palabra cuando
existe una transición de un espacio en blanco hacia un carácter imprimible. Tenga en cuenta que las cadenas solo
contiene palabras separadas por espacios en blanco
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>


int main(int argc, char *argv[]) {
	char cadena[50];
	int i, palabra = 1;
	printf("Ingrese una oracion: ");
	gets(cadena);
	i = 0;
	while(cadena[i] != '\0') {
		if(isblank(cadena[i]))
			palabra++;
		i++;
	}
	printf("\nOracion: %s",cadena);
	printf("\nCantidad de palabras: %d", palabra);
	return 0;
}