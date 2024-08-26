/*
Ejercicio 28: Ingresar el/los apellido/s y e/los nombres de una persona en una cadena de caracteres, y convertir todos sus
caracteres a mayúsculas. Mostrar el string resultante.
Modificar el programa anterior para que coloque solamente la primera letra de cada apellido y/o nombre en
mayúsculas.
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
		if(i == 0)
			apellido[i] = toupper(apellido[i]);
		if(isblank(apellido[i]))
			apellido[i+1] = toupper(apellido[i+1]);
		i++;
	}
	i = 0;
	while(nombre[i] != '\0'){
		if(i == 0)
			nombre[i] = toupper(nombre[i]);	
		if(isblank(nombre[i])){
			nombre[i+1] = toupper(nombre[i+1]);			
		}
			
		i++;
	}
	printf("%s %s", apellido, nombre);
	return 0;
}