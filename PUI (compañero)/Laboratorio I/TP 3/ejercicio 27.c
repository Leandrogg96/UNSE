/*
Ingresar el/los apellido/s y e/los nombres de una persona en una cadena de caracteres, y convertir todos sus
caracteres a mayúsculas. Mostrar el string resultante.
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(int argc, char *argv[]) {
	char apellido[20], nombre[20];
	int i;
	printf("Ingrese el/los apellido/s: ");
	gets(apellido);
	printf("Ingrese el/los nombre/s: ");
	gets(nombre);
	i = 0;
	while(apellido[i] != '\0'){
		apellido[i] = toupper(apellido[i]);
		i++;
	}
	i = 0;
	while(nombre[i] != '\0'){
		nombre[i] = toupper(nombre[i]);
		i++;
	}
	printf("%s %s", apellido, nombre);
	return 0;
}