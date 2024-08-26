/*
Para una cadena de caracteres sacar los espacios en blanco a derecha y/o a izquierda que posea el mismo.
Ej: “ Hola Mundo “, debería quedar como “Hola Mundo”.
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(int argc, char *argv[]) {
	char s[20];
	printf("Ingresa una palabra: ");
	gets(s);
	printf("Palabra Ingresada: .%s.\n",s);
	printf("tiene %d caracteres\n", strlen(s));
	int caracter = strlen(s);
	int i;
	/* //Borra Todos los espacios en blanco
	for(i = 0; i < caracter; i++) {
		if(isblank(s[i])) {
			for(j = i; j < caracter; j++) {
				s[j] = s[j + 1];
			}
		}
	}
	*/
	for(i = 0; i < caracter; i++) {
		s[i] = s[i + 1];
		if(i == caracter - 1)			
			s[i - 1] = '\0';
	}
	printf("Nueva Palabra Ingresada: .%s.\n",s);
	return 0;
}