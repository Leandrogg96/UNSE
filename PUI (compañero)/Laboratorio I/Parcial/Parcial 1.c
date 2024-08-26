#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <limits.h>

#define N 4
int main(int argc, char *argv[]) {
	int i,cod_e,cod_ed = 0,sem,ds,sem_p2 = 0, sem_p4 = 0,dig_e, may_l3 = INT_MIN, min_l3 = INT_MAX, may_cod, min_cod;
	float sueldo, sum_descuento = 0, nv_sueldo;
	char cod_l, up_cod_l;
	for(i = 0; i < N; i++) {
		printf("Codigo del Empleado: ");
		scanf("%d", &cod_e);
		while(cod_e == cod_ed || (cod_e < 1000 || cod_e > 10000)) {
			printf("Vuelve a ingresar el codigo de empleado: ");
			scanf("%d", &cod_e);
		}
		cod_ed = cod_e;
		printf("Codigo de Licencia: ");
		getchar();
		scanf("%c", &cod_l);
		printf("Ingresa el numero de semana en la que se realiza la solicitud (1-4): ");
		scanf("%d", &sem);
		while(sem < 1 || sem > 4) {
			printf("Numero de semana incorrecto, vuelva a ingresa otro numero: ");
			scanf("%d", &sem);
		}
		printf("Cantidad de Dias de Licencia Solicitados: ");
		scanf("%d", &ds);
		printf("Ingrese el sueldo: ");
		scanf("%f", &sueldo);

		switch(sem) {
			case 2:
				sem_p2 += ds;
				break;
			case 4:
				sem_p4 += ds;
				break;
		}
		up_cod_l = toupper(cod_l);
		switch(up_cod_l) {
			case 'A':
				nv_sueldo = (float) sueldo - sueldo * 0.13;
				sum_descuento += (float) sueldo * 0.13;
				break;
			case 'B':
				nv_sueldo = (float) sueldo - sueldo * 0.17;
				sum_descuento += (float) sueldo * 0.17;
				break;

			case 'C':
				nv_sueldo = (float) sueldo - sueldo * 0.21;
				sum_descuento += (float) sueldo * 0.21;
				break;
		}
		printf("\nSueldo a cobrar del empleado: %.2f \n", nv_sueldo);
		dig_e = cod_e % 10;
		if(dig_e == 3) {
			if(may_l3 < ds) {
				may_l3 = ds;
				may_cod = cod_e;
			}
			if(min_l3 < ds) {
				min_l3 = ds;
				min_cod = cod_e;
			}
		} else {
			printf("\nPara el Codigo de Empleado %d el primer digito es %d \n", cod_e, dig_e);
		}

	}
	printf("El ahorro que se hace la empresa segun las licencias es de: %0.2f", sum_descuento);

	if(sem_p2 < sem_p4) {
		printf("\nSemana que obtuvo mayor cantidad de licencias solicitadas 4 - dias solicitados %d", sem_p4);
	} else if(sem_p4 < sem_p2) {
		printf("\nSemana que obtuvo mayor cantidad de licencias solicitadas 2 - dias solicitados %d", sem_p2);
	}
	printf("El codigo de empleado con mayor cantidad de dias solicitados es: %d", may_cod);
	printf("El codigo de empleado con la menor cantidad de dias solicitados es: ", min_cod);

	return 0;
}