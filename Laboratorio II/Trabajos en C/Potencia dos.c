#include <stdio.h>

void potenciasDos(int num) {

	if (num > 0){
		int aux = 1;
		for(int i = 1; i <= num; i++){
			aux *= 2;
			printf("| %d ", aux);
		} 
		printf("|");
	} else if (num < 0) {
		printf("\nEl numero debe ser positivo.");
	} else if (num == 0) {
		printf("| 1 |");
	}
	
	 
}


int main() {
	
	int potencia = 0;
	printf("Ingresa un valor entero: ");
	scanf("%d", &potencia);
	
	potenciasDos(potencia);
	
	return 0;
}