#include <stdio.h>

float calculoCubo(float numero) {
	
	float cubo;
	cubo = numero * numero * numero;
	
	return cubo;
}

void muestroCubo(float numero) {
	printf("El cubo del numero que ingresaste es: %.3f", numero);
}

int main() {
	
	float flotante;
	printf("Ingresa un numero para calcular su cubo: ");
	scanf("%f", &flotante);
	printf("\n----------------------------------------------------\n");

	
	float resultadoCubo;
	
	resultadoCubo = calculoCubo(flotante);
	muestroCubo(resultadoCubo);
	
	
	return 0;
}