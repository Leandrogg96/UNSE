#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <time.h>


int main(int argc, char *argv[]) {
	int N, cod_sc, dni, sueldo, ingreso, sum_sueldo, prom_sueldo, mp_sc, antg, c_antg;
	int promg_sueldo = INT_MAX;
	for (int i = 0; i < 3; i++) {
		printf("Codigo de la sucursal %d: ", i + 1);
		scanf("%d", &cod_sc);
		printf("Cantidad de empleados de la sucursal: ");
		scanf("%d", &N);
		for (int j = 0; j < N; j++) {
			printf("======= Empleado %d =======\n", j + 1);
			printf("DNI del empleado: ");
			scanf("%d", &dni);
			printf("Sueldo del empleado: ");
			scanf("%d", &sueldo);
			printf("Anio de ingreso del empleado: ");
			scanf("%d", &ingreso);
			sum_sueldo += sueldo;
			antg = 2022 - ingreso;	

			if ( antg >= 15 & antg < 25 ) {
				c_antg++;
			}
		}
		prom_sueldo = sum_sueldo / N;
		if (prom_sueldo < promg_sueldo ) {
			promg_sueldo = prom_sueldo;
			mp_sc = cod_sc;
		}

		printf("Cantidad de empleados con antiguedad mayor o igual a 15 y menor a 25 anios: %d \n", c_antg);

	}

	printf("Codigo de la sucursal con el menor promedio de sueldo: %d \n", mp_sc);
	return 0;
}