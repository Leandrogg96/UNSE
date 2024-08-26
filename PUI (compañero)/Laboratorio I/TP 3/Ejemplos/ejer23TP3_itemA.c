/*Para una cadena de caracteres:
a) Indicar la cantidad de veces que aparece un determinado carácter.
b) Mostrar la cantidad de vocales y de consonantes que contiene.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {
	char cadena[20];
	char caracter;
	int i, contador=0;
	printf("Ingrese una cadena:");
	gets(cadena);
	printf("Caracter a buscar?:");
	scanf("%c",&caracter);
	for (i=0;i<strlen(cadena);i++){
		if (cadena[i]==caracter){
			contador++;
		}
	}
	printf("La cantidad de ocurrencias es %d\n", contador);
	
	for (i=0;i<strlen(cadena);i++){
		if (cadena[i]==caracter){
			contador++;
		}
	}
	return 0;
}