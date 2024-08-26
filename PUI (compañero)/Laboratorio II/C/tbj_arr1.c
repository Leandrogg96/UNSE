/* Se desea obtener información respecto a la venta de 2 artículos en 2 sucursales de una empresa.

Usando arreglos, se pide:

Leer los precios de los 2 artículos y sus cantidades vendidas en las 2 sucursales.
Mostrar...
La cantidad total vendida de cada artículo.
La recaudación total obtenida por cada sucursal.
La recaudación total de la empresa. */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char argv[]) {

//Inicializacion de Variables
	double M[3][4];
	int i;
	printf("Ingrese los precios de los articulos");
	printf("\nIngrese el precio del ARTICULO 1: ");
	scanf("%lf",&M[0][0]);
	printf("\nIngrese el precio del ARTICULO 2: ");
	scanf("%lf",&M[1][0]);

	for(i = 1; i<3; i++) {
		printf("===== Sucursal %d =====\n", i);
		printf("ARTICULO 1\n");
		scanf("%lf",&M[0][i]);
		printf("ARTICULO 2\n"});
		scanf("%lf",&M[1][i]);
	}

	M[0][3] = M[0][1] + M[0][2];
	M[1][3] = M[1][1] + M[1][2];
	M[2][1] = (M[0][1] * M[0][0]) + (M[1][1] * M[1][0]);
	M[2][2] = (M[0][2] * M[0][0]) + (M[1][2] * M[1][0]);
	M[3][3] = (M[2][1] + M[2][2]);



	printf("\nCantidad total de ventas de articulo 1 [%f]\n",M[0][3]);
	printf("\nCantidad total de ventas de articulo 2 [%f]\n",M[1][3]);
	printf("\nLa recaudación total obtenida por cada sucursal 1 es [%f]\n",M[2][1]);
	printf("\nLa recaudación total obtenida por cada sucursal 2 es [%f]\n",M[2][2]);
	printf("\nLa recaudación total de la empresa es [%f]\n",M[3][3]);
	printf("Precio de Articulo 1:");


	return 0;
}