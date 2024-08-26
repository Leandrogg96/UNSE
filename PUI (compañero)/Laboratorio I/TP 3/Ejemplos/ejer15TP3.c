/*Generar la matriz DIGITOS (3x3) con los dígitos del 1 al 9.*/
/*Diferentes recorridos por la matriz*/

#include <stdio.h>
#include <stdlib.h>

#define N 3


int main(int argc, char *argv[]) {
	int digitos[N][N];
	int i,j,numero = 1;
	for(i=0;i<N;i++){
		for(j=0;j<N;j++){
			digitos[i][j] = numero;
			numero++;
			}
	}
	
	/*Recorrido por Filas*/
	for(i=0;i<N;i++){
		for(j=0;j<N;j++){
			printf("[%d]",digitos[i][j]);
		}
		printf("\n");	
	}
	
	/*Recorrido por Columnas*/
	for(j=0;j<N;j++){
		printf("Columna %d\n",j+1);
		for(i=0;i<N;i++){
			printf("[%d]\n",digitos[i][j]);
		}
	}	
	
	/*Recorrido Triangular Superior*/
	printf("Elementos de la Triangular Superior\n");
	for(i=0;i<N-1;i++){
		for(j=i+1;j<N;j++){
			printf("[%d]",digitos[i][j]);
		}
		printf("\n");	
	}
	
	/*Recorrido Diagonal Principal*/
	printf("Elementos de la Diagonal Principal\n");
	for(i=0;i<N;i++){
		printf("[%d]",digitos[i][i]);
	}
	printf("\n");	
	
	/*Recorrido Triangular Inferior*/
	printf("Elementos de la Triangular Superior\n");
	for(i=1;i<3;i++){
		for(j=0;j<i;j++){
			printf("[%d]",digitos[i][j]);
		}
		printf("\n");	
	}
	return 0;
}