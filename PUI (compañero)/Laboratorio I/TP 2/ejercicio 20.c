#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
int dni, dt,empleado,cont_m,cont_v,sueld_v,mayor_s,maydni,maysexo,maydt,suel,gast_m,gast_v,total_e;
char sexo;
int i = 0;
printf("Cantidad de empleados: \n");
scanf("%d", &empleado);
	while(i<empleado) {

		printf("------------------------------\n");

		printf("ingrese el dni del empleado \n");

		printf("------------------------------\n");

		scanf("%d",&dni);

		printf("------------------------------\n");

		printf("ingrese los dias trabajados del empleado \n");

		printf("------------------------------\n");

		scanf("%d",&dt);

		printf("------------------------------\n");

		printf("ingrese el sexo del empledo Femenino(f) o Masculino(m)\n");

		printf("------------------------------\n");

		(getchar()!='\n');

		scanf("%c",&sexo);

		if (dt<20 && sexo=='f')
			cont_m=cont_m+1;

		if (sexo=='m') {
			sueld_v=(sueld_v+dt*300);
			cont_v=cont_v+1;
		}
		if (i==1) {
			mayor_s=dt*300;

			maydni=dni;

			maysexo=sexo;

			maydt=dt;

		} else {
			suel=dt*300;

			if (suel>mayor_s)
				mayor_s=suel;

			maydni=dni;

			maysexo=sexo;

			maydt=dt;

		}
		if (sexo=='f')
			gast_m=gast_m+dt*300;

		else {

			gast_v=gast_v+dt*300;
		}

		total_e=total_e+dt*300;
		i++;
	}


	return 0;
}
