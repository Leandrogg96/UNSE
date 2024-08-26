/*
Determina si dos cadenas son anagramas (se considera que dos cadenas son anagramas si contienen exactamente los
mismos caracteres en el mismo o en diferente orden), ignorar los blancos y considerar que las mayúsculas y las
minúsculas son iguales
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {
	char cadena1[50],cadena2[50];
	printf("Ingrese la primera oracion: ");
	gets(cadena1);
	printf("Ingrese la segunda oracion: ");
	gets(cadena2);
	int i,c1 = 0,c2 = 0;
	i = 0;
	while(cadena1[i] != '\0') {
		if(cadena1[i] != ' ') {
			c1++;
		}
		i++;
	}
	i = 0;
	while(cadena2[i] != '\0') {
		if(cadena2[i] != ' ') {
			c2++;
		}
		i++;
	}
	if(c1 == c2) {
		printf("Es anagrama");
	} else printf("No es anagrama");
	return 0;
}