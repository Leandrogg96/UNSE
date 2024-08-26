#include <stdio.h>
#include <string.h>

// Prototipo de funcion mostrar cada caracter de la cadena en una nueva linea.
void mostrarCaracteres(char cadena[]);

// Prototipo de funcion para mostrar cada palabra de la cadena en una nueva linea.
void mostrarPalabras(char cadena[]);

int main() {
	
	// Establece un limite para la cadena ingresada.
    char cadena[100];

    // Solicitar al usuario que ingrese una cadena.
    printf("Ingrese una cadena: ");
    fgets(cadena, sizeof(cadena), stdin);

    // Eliminar el caracter de salto de linea al final de la cadena ingresada por fgets.
    if (cadena[strlen(cadena) - 1] == '\n') {
        cadena[strlen(cadena) - 1] = '\0';
    }

    // Llamar a la funcion para mostrar cada caracter en una nueva linea.
    mostrarCaracteres(cadena);

    // Llamar a la funcion para mostrar cada palabra en una nueva linea.
    mostrarPalabras(cadena);

    return 0;
}

// Funcion para mostrar cada caracter de la cadena en una nueva linea.
void mostrarCaracteres(char cadena[]) {
    printf("\n--------------------------------------------------------------\n");
	int longitud = strlen(cadena);

    printf("Caracteres de la cadena por linea:\n\n");
    for (int i = 0; i < longitud; i++) {
        printf("%c\n", cadena[i]);
    }
}

// Funcion para mostrar cada palabra de la cadena en una nueva linea.
void mostrarPalabras(char cadena[]) {
	printf("\n--------------------------------------------------------------\n");
    printf("Palabras de la cadena por lineas:\n\n");
    char *token = strtok(cadena, " ");
    while (token != NULL) {
        printf("%s\n", token);
        token = strtok(NULL, " ");
    }
}
