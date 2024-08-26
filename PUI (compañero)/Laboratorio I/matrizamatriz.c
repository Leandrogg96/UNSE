#include <stdio.h>
#include <stdlib.h>
#define M 3


int main(int argc, char *argv[]) {
	int n,i,j,l=0,p=0,cont=0;
	printf("Ingrese la cantidad de filas \n");
	scanf("%d",&n);
	int B[n][M];
	int A[n][M];
	for(i=0;i<n;i++){
		for(j=0;j<M;j++){
			printf("[%d][%d] \n",i,j);
			scanf("%d",&A[i][j]);
		}
	}
	// VECTOR ORIGINAL CON TABLA 
	printf("%12s \t %10s \t %10s\n","CODIGO","MES","MONTO");
	printf("-------------------------------------------------------\n");
	for(i=0;i<n;i++){
		for(j=0;j<M;j++){
			printf("%10d \t",A[i][j]);
		}
	printf("\n");	
	if (A[i][1] % 2 == 0) {
		cont++;
	    }
	}
	
	for(i=0;i<M;i++){
		if(A[i][1] % 2 == 0) {
			p=0;
			for(j=0;j<M;j++){
				B[l][p]=A[i][j];
				p++;
			}	
		l++;	
		}
	}
	
	for(l=0;l<cont;l++){
		for(p=0;p<M;p++){
			printf(" %d ",B[l][p]);
		}
		printf("\n");
	}
	return 0;
}