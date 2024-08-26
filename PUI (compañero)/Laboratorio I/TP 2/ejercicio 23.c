#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	int monto_final, N, P, precio;
	printf("Cantidad de clientes atendidos por dia: ");
	scanf("%d", &N);	
	for (int i = 0; i < N; i++) {
		printf("Cantidad de productos en el carro del cliente %d: ", i + 1);
		scanf("%d", &P);
		for (int j = 0; j < P; j++) {
			printf("Precio del producto %d: ", j + 1);
			scanf("%d", &precio);
			monto_final += precio;
		}		
	}
	printf("\n========================================\n");
	printf("Monto recaudado: %d", monto_final);
	return 0;
}