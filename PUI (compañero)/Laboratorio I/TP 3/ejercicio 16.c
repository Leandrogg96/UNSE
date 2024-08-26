/*
Generar la matriz K (Nx4) y a partir de ella generar un vector V con los valores de la matriz K que sean divisibles
entre 6
*/
#include <stdio.h>
#include <stdlib.h>

#define N 4

int main(int argc, char *argv[]) {
	int K[N][N], V[N*N];
	int i,j,c = 0;
	for(i = 0; i < N; i++) {
		for(j=0; j < N; j++) {
			printf("Ingrese una numero en la matriz K[%d][%d]:",i,j);
			scanf("%d",&K[i][j]);
		}
	}
	for(i = 0; i < N; i++) {
		for(j = 0; j < N; j++){
			if(K[i][j] % 6 == 0) {
				V[c] = K[i][j];
				c++;
			}
		}	
	}
	for(i = 0; i < N; i++) {
		for(j = 0; j < N; j++){
			printf("%d \t", K[i][j]);
		}
		printf("\n");
	}
	printf("\n\n Vector V:");
	for(i = 0; i < c; i++) {
		printf("%d \t", V[i]);
	}
	return 0;
}