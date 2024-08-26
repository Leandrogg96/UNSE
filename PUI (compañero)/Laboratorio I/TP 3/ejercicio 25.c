/*
Invertir una cadena de caracteres sin utilizar la función strlen(). Ej. “Hola” se convierte en “aloH”
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(int argc, char *argv[]) {
	char s[20],ns[20];
	char aux;
	printf("Ingrese una palabra: ");
	scanf("%s", s);
	printf("Palabra ingresada: %s\n", s);
	int i = 0,j;
	while(s[i] != '\0') {
		printf("%c\n", s[i]);
		i++;
	}
	for(j = 0; j < i + 1; j++) {
		ns[j] = s[i - 1 - j];
	}
	printf("Nueva Palabra: %s\n", ns);
	return 0;
}