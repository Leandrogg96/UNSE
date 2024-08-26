#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {
	char ciudadDeOrigen[20];
	char ciudadDepartamento[40]="";
		
	printf("Ingrese su ciudad de origen:");
	gets(ciudadDeOrigen);
	printf("Su ciudad de origen es:%s\n",ciudadDeOrigen);
	printf("Su ciudad tiene %d caracteres\n",strlen(ciudadDeOrigen));
	strcmp(ciudadDeOrigen,"Santiago");
	if (strcmp(ciudadDeOrigen,"Santiago")==0){
		printf("No le vendo entradas\n");
	}
	
	strcpy(ciudadDeOrigen,"Frias");
	printf("Su nueva ciudad de origen es:%s\n",ciudadDeOrigen);

	strcat(ciudadDepartamento,ciudadDeOrigen);
	printf("Ciudad Departamento es:%s\n",ciudadDepartamento);
	
	strcat(ciudadDepartamento,"-");
	printf("Ciudad Departamento es:%s\n",ciudadDepartamento);

	strcat(ciudadDepartamento,"Choya");
	printf("Ciudad Departamento es:%s\n",ciudadDepartamento);
	return 0;
}