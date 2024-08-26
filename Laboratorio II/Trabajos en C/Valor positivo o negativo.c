#include <stdio.h>

void identificadorDeSigno(int num) {
	
	if (num > 0) {
		printf("\nEl numero que ingresaste es positivo.");
	} else if (num < 0) {
		printf("\nEl numero que ingresaste es negativo.");
	} else if (num == 0) {
		printf("El numero que ingresaste es igual a cero.");
	}
	
}


int main() {
	
	int valor;
	printf("Ingresa un valor entero: ");
	scanf("%d", &valor);
	
	identificadorDeSigno(valor);
	printf("\n-----------------------------------------------------------------------------------");
	
	printf("\nValor = %d", valor);
	
	
	return 0;
}