/*
Generar la matriz UNSE (Nx4) con los datos de los libros de la Biblioteca: código de libro, código de autor, año de
edición y precio. A partir de la misma se pide:
a) Para un determinado autor mostrar todos sus libros.
b) Incrementar el precio de los libros de un determinado año de edición, en un 20%.
*/
#include <stdio.h>
#include <stdlib.h>

#define N 4

int main(int argc, char *argv[]) {
	/* 	Columna:
		[0] = Codigo de Libro
		[1] = Codigo de Autor
		[2] = Anio de Edicion
		[3] = Precio 	
	*/
	float UNSE[N][4] = {
		{1,2,1995,89.00},
		{2,2,2000,20.30},
		{3,4,2005,50.55},
		{4,5,2005,60.44}
	};
	int i,j,cod_autor,anio_edicion;
	printf("Codigo de autor a mostrar: ");
	scanf("%d",&cod_autor);
		//a)	
	for(i = 0; i < N; i++) {	
		if(UNSE[i][1] == cod_autor){
			printf("Codigo de Libro: %.0f \t Codigo de autor: %.0f \t Anio de Edicion: %.0f \t Precio: $%.2f \n",UNSE[i][0],UNSE[i][1],UNSE[i][2],UNSE[i][3]);
		}
	}
	//b)
	printf("Ingrese un anio de edicion: ");
	scanf("%d",&anio_edicion);
	for(i = 0; i < N; i++) {
		if(UNSE[i][2] == anio_edicion){
			printf("Codigo de Libro: %.0f \t Codigo de autor: %.0f \t Anio de Edicion: %.0f \t Precio: $%.2f \n",UNSE[i][0],UNSE[i][1],UNSE[i][2],UNSE[i][3] *1.2);
		}
		
	}
	return EXIT_SUCCESS;
}