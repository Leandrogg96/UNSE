#include <stdio.h>
#include <string.h>

#define MAX 30


// definir prototipo de funcion que muestra letras
void lineaCadena(char *puntero);
// definir prototipo de funcion que muestra palabras
void palabraCadena(char *puntero);

int main() {
	char cadena[MAX];
// ingresar la cadena de caracteres
	printf("Ingresar una cadena: ");
	scanf("%[^\n]%*c", cadena); // Uso la mascara %[^\n]%*c porque en el scanf no toma los espacios de una cadena
	//scanf("%s", cadena);
	//gets(cadena); //Otra forma de ingresar una cadena
	fflush(stdin);
	//printf("%s", cadena);
	// convocar a funcion que muestra letras
	lineaCadena(cadena);
	// convocar a funcion que muestra palabras
	palabraCadena(cadena);
	return 0;
}

// desarrollar la definicion de funcion que muestra letras
void lineaCadena(char *puntero) {
	int i;
	i = 0;
	printf("\n");
	while(puntero[i] != '\0') {
		printf("%c\n", puntero[i]);
		i++;
	}
}

// desarrollar la definicion de funcion que muestra palabras
void palabraCadena(char *puntero) {
	int i;
	i = 0;
	printf("\n");
	while(puntero[i] != '\0') {
		printf("%c", puntero[i]);
		if(puntero[i] == ' ') {
			printf("\n");
		}
		i++;
	}
}