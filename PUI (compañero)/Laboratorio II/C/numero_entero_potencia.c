#include<stdio.h>

void potencia(int numero);

int main() {
	// Inicializacion de variables
	int numero;

	printf("Ingresar un valor entero: ");
	scanf("%d", &numero);
	potencia(numero);
	return 0;
}
// funcion potencia
// argumento: un numero entero
void potencia(int numero) {
	int i,num;
	i = 1;
	num = 2;
	if(numero > 0) {
		printf("%d ", num);
		while(i < numero) {
			num *= 2;
			printf("%d ", num);
			i++;

		}
	} else if(numero < 0) {
		printf("El número debe ser positivo");
	} else {
		printf("1");
	}
}
// debe completar la declaración y definición de la función