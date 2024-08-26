#include <stdio.h>

int main() {
	
	int dim = 3, contador = 0;
	int num[dim] = {0}, suma[dim] = {0};
	
	printf("Ingresa tres numeros enteros positivos: \n");
	
	for(int i = 0; i < dim; i++){
		scanf("%d", &num[i]);
	}
	
	printf("-----------------------------------------------------------------------------------------------");

	
	for(int i = 0; i < dim; i++){
		
		contador = 0;
		
		if(num[i] > 1){
			printf("\nLa sucesion del numero %d es: \n\n|", num[i]);
			while (num[i] != 1){
				contador += 1;
				if(num[i] % 2 == 0){
					num[i] = num[i] / 2;
					printf(" %d |", num[i]);
					suma[i] += num[i];
				}else{
					num[i] = (num[i] * 3) + 1;
					printf(" %d |", num[i]);
					suma[i] += num[i];
				}
			}
			
		printf("\n\nLuego de %d pasos, el resultado finalmente es 1, por lo que la sucesion se acaba.\n", contador);
		printf("-----------------------------------------------------------------------------------------------");
		} else{
			printf("\n\nEl valor ingresado no puede ser procesado.\n\n");
			printf("-----------------------------------------------------------------------------------------------");
		}
	}
	
	printf("\nEl resultado de las sumas de los elementos de las sucesiones es: \n");
	for(int i = 0; i < dim; i++){
		printf("\nSucesion %d: %d", i+1, suma[i]);
	}
	printf("\n-----------------------------------------------------------------------------------------------\n");

	
	return 0;
}