#include <stdio.h>

// definir prototipo de funcion que calcula
float calcubo(float numero);

// definir prototipo de funcion que muestra
void mcubo(float numero);

int main() {
	float numero,cubo;
// ingresar valor entero
	printf("Ingresar valor entero: ");
	scanf("%f",&numero);
// convocar a funcion que calcula
	cubo = calcubo(numero);
	mcubo(cubo);
// convocar a funcion que muestra
	return 0;
}

// desarrollar la definicion de funcion que calcula
float calcubo(float numero) {
	int i;
	float aux;
	aux = numero;
	i = 1;
	if(numero > 0 || numero < 0) {
		while(i < 3) {	
			aux *= numero;
			i++;
		}
		return aux;
	} else {
		return 0;
	}
}
// desarrollar la definicion de funcion que muestra

void mcubo(float numero) {
	printf("%.0f", numero);
}