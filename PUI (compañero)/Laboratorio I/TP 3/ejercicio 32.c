/*
Ingresar un conjunto de diez cadenas de caracteres.
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define N 10

int main(int argc, char *argv[]) {
	char cadena[N][50];
	int i;
	for(i = 0; i < N; i++) {
		printf("Cadena %d: ", i + 1);
		gets(cadena[i]);		
	}
	for(i = 0; i < N; i++){
		printf("%s \n", cadena[i]);
	}
	return 0;
}