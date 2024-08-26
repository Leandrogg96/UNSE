/*
Dado el vector TEMPEATURAS que contiene las temperaturas promedio de los meses del año, mostrar aquellas
temperaturas que correspondan a los trimestres pares del año con el siguiente formato
*/
#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	float TEMPERATURAS[12] = {30.80,33.40,12.33,26.5,16.3,10.8,40.3,55.2,33.21,11.2,08.3,05.65};
	int i;
	printf("Trimestre\tMes\tTemperatura Promedio\n");
	printf("_____________________________________________\n");
	for (i = 0; i < 12; i++){
		if(i >= 4 && i <=6) {
			if(i == 4) {
				printf("Segundo");
			}
			printf("\t\t%d\t\t%.1f\n",i,TEMPERATURAS[i]);
		} else if(i >=9 && i <= 12) {
			if(i == 9) {
				printf("Cuarto");
			}
			printf("\t\t%d\t\t%.1f\n",i,TEMPERATURAS[i]);
		}
	}
	return 0;
}