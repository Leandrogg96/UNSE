#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	int num, resto;
	int invertido = 0;
	printf("Ingresa un numero entero postivo: ");
	scanf("%d", &num);
	while(num != 0) {
		resto = num % 10;
		printf("Resto: %d \n", resto);
		num = num / 10;
		invertido = invertido * 10 + resto;
	}
	
	printf("Numero invertido: %d", invertido);
	return 0;
}