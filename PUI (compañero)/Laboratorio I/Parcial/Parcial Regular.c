#include <stdio.h>
#include <stdlib.h>
#include <string.h>


#define N 8
int main(int argc, char *argv[]) {

	/*
	0 = Codigo de libro
	1 = Codigo de Autor
	2 = Cantidad Disponibles
	3 = Precio
	4 = Año de Edición
	*/

	int Lib[N][5] = {
		{342,2,780,1400,2015},
		{224,5,210,3000,2000},
		{142,2,154,1200,2018},
		{413,7,245,2000,2010},
		{566,5,300,2400,2006},
		{626,2,250,1000,2005},
		{724,7,431,2800,2020},
		{851,5,532,1500,2002}
	};

	int i,j,cod_a,COD[N][2],ca = 0, a_ed,sum_a = 0, ex_aed = 0, csum_a = 0,may_p = 0,men_p = 99999;
	float pr_a;
	char msj_ae[] = "Anio de Edicion Inexistente";
	char str1[] = "El mayor y menor precios es";
	char str2[] = "Los precios modificados son";

	// Item a)
	printf("Ingrese un Codigo de Autor: ");
	scanf("%d", &cod_a);
	while(cod_a != 2 && cod_a != 5 && cod_a != 7) {
		printf("Ingrese otro Codigo de Autor: ");
		scanf("%d", &cod_a);

	}
	for(i = 0; i < N; i++) {
		if(cod_a == Lib[i][1] && Lib[i][4] < 2008) {
			COD[ca][0] = Lib[i][0];
			COD[ca][1] = Lib[i][2];
			ca++;
		}
	}
	printf("\nMatriz del Codigo de Autor %d\n",cod_a);
	printf("Codigo de Libro \t Cantidad\n");

	for(i = 0; i < ca; i++) {
		printf("%d \t\t\t %d\n", COD[i][0], COD[i][1]);
	}

	//Item b)

	printf("\nIngrese un Anio de Edicion: ");
	scanf("%d", &a_ed);
	for(i = 0; i < N; i++) {
		if(a_ed == Lib[i][4]) {
			ex_aed = 1;
			if (Lib[i][3] > 1500 && Lib[i][3] < 2800) {
				sum_a += Lib[i][2];
				csum_a++;
			}
		}
	}
	if(!ex_aed) {
		printf("%s", msj_ae);
	} else {
		pr_a = (sum_a / 100)  *  csum_a ;
		printf("\nPorcentaje de libros de Anio de Edicion %d: %.2f%% \n",a_ed, pr_a);
	}

	//Item c)
	for(i = 0; i < N; i++) {
		if(may_p < Lib[i][3]) {
			may_p = Lib[i][3];

		}
		if(men_p > Lib[i][3]) {
			men_p = Lib[i][3];
		}
	}
	printf("%s %d y %d \n", str1, may_p,men_p);
	printf("%s %.2f y %.2f", str2,may_p * 1.15,men_p * 0.9);

	//Item d)
	int pnt_r, Matriz2[N][3], cm = 0, ex2 = 0;
	char str3[] = "Autor Inexistente";
	printf("\n\nIngrese un Punto de Reposicion: ");
	scanf("%d", &pnt_r);
	printf("Ingrese un Anio de Edicion: ");
	scanf("%d", &a_ed);
	for(i = 0; i < N; i++) {
		if(Lib[i][2] < pnt_r && a_ed == Lib[i][4]) {
			ex2 = 1;

			Matriz2[cm][0] = Lib[i][0];
			Matriz2[cm][1] = Lib[i][1];
			Matriz2[cm][2] = pnt_r - Lib[i][2];

			cm++;
		
		}
	}
	if(!ex2) {
		printf("%s",str3);
	} else {
		printf("Matriz 2 \n");
		printf("Codigo de Libro \t Codigo de Autor \t Cantidad Solicitada\n");
		for(i = 0; i < cm; i++) {
			for(j = 0; j < 3; j++) {
				printf("%d\t\t\t\t", Matriz2[i][j]);
			}
			printf("\n");
		}
	}
	
	return 0;
}