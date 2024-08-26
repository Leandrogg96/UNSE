#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

bool esNumeroValido(const char *cadena) { // Funcion que recorre la cadena y cuenta los elementos discriminando entre enteros, decimales y puntos.
    int enteros = 0;
    int decimales = 0;
    int puntos = 0;

    while (*cadena != '\0') {
        if (*cadena >= '0' && *cadena <= '9') { // Limite de 10 digitos.
            if (puntos == 0) {
                enteros++;
            } else if (puntos == 1) {
                decimales++;
            } else {
                return false; // Mas de un punto decimal.
            }
        } else if (*cadena == '.') {
            if (puntos == 1) {
                return false; // Mas de un punto decimal.
            }
            puntos++;
        } else {
            return false; // Caracter no valido.
        }
        cadena++;
    }

    return (enteros == 3) && (decimales == 2);
}

float dobleNumero(float numero){ // Funcion que me devuelve el doble de un numero.
	return (numero * 2);
}

int main() {
    char numeroStr[20]; // Se asume un máximo de 20 caracteres para la cadena.

    printf("Ingrese un numero con tres posiciones enteras y dos decimales: ");
    scanf("%s", numeroStr);

    if (esNumeroValido(numeroStr)) {
        float numero = strtof(numeroStr, NULL);
        printf("------------------------------------------------------------------------\n");
        printf("Numero en formato float: %.2f\n", numero);
        float resultado = dobleNumero(numero);
        printf("------------------------------------------------------------------------\n");
        printf("El doble del numero proporcionado es: %.2f", resultado);
    } else {
        printf("El numero ingresado no cumple con el formato especificado.\n");
    }

    return 0;
}