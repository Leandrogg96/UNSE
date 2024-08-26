#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	
	int n,i,b,aux = 0;
	int codemp;
	char codlic = '0';
	int numsem = 0;
	int cantdias = 0;
	float sueldo = 0.0;
	int sumasemdos = 0;
	int sumasemcuatro = 0;
	float descuento = 0;
	float sumades = 0.0;
	printf("Ingrese el numero de empleados: ");
	scanf("%d", &n);
	printf("\n");
	int mayor = -10000;
	int menor =  10000;
	int aux2 = 0;
	int aux3 = 0;
	int c = 0;
	
	aux = 0;
	
	i = 0;
	while (i < n){
		
		printf("Ingrese el codigo del empleado: ");
		scanf("%d", &codemp);
		printf("\n");
		
		b = 0;
		
		while (b == 0){
			
			if (aux == codemp | codemp <1000 | codemp > 9999){
				
				printf("Codigo invalido o repetido, ingrese nuevo codigo: ");
				scanf("%d", &codemp);
				printf("\n");
			}else {
				aux = codemp;
				b = 1;
			}
		}
		
		printf("Ingrese el tipo de licensia (A, B ,C): ");
		while(getchar()!= '\n');
		scanf("%c", &codlic);
		printf("\n");
		
		printf("Ingrese la semana a solicitar: ");
		scanf("%d", &numsem);
		printf("\n");
		
		b = 0;
		
		while (b == 0){		
			
			if(numsem < 1 | numsem >4){
				
				printf("Semana inexistente, ingrese una semana correcta: ");
				scanf("%d", &numsem);
				printf("\n");		
			} else {
				b = 1;
			}			
		}
		
		printf("Ingrese la cantidad de dias a solicitar: ");
		scanf("%d", &cantdias);
		printf("\n");		
		
		switch(numsem){
			
			case 2:
				sumasemdos = sumasemdos + cantdias;
			break;
			
			case 4:
				sumasemcuatro = sumasemcuatro + cantdias;
			break;	
			
		}
		
		printf("Ingrese el sueldo del empleado: ");
		scanf("%f", &sueldo);
		printf("\n");
		
		switch (codlic){
			
			case 'A':
				descuento = ((sueldo*13.0)/100.0);
				sueldo = sueldo - descuento;
			break;
			
			case 'B':
				descuento = ((sueldo*17.0)/100.0);
				sueldo = sueldo - descuento;
			break;
			
			case 'C':
				descuento = ((sueldo*21.0)/100.0);
				sueldo = sueldo - descuento;
			break;
			
		}
		
		printf("El sueldo del empleado %d, apliado el descuento es de %0.2f ", codemp, sueldo);
		printf("\n");
		
		sumades = sumades + descuento;
		
		
		int aux4 = (codemp/1000);
		if( aux4 == 3){
			if (cantdias > mayor){
				mayor = cantdias;
				aux2 = codemp;
			}
			
			if (cantdias < menor){
				menor = cantdias;
				aux3 = codemp;	
			}
			
			c = c +1;
		}
		
		i = i +1;
	}
	
	if(sumasemcuatro < sumasemdos){
		printf("La semana 2 fue la mas solicitada con %d dias",sumasemdos);
	}else if (sumasemcuatro > sumasemdos){
		printf("La semana 4 fue la mas solicitada con %d dias",sumasemcuatro);
	}
	
	printf("\n");
	
	printf("El ahorro que se hace la empresa segun las licensias es de: %0.2f", sumades);
	
	printf("\n");
	
	if (c == 0){
		printf("No se encontraron empleados con digito inicial 3");
	} else if (c > 0){
		printf("El empleado con menor dias solicitados con primer digito 3 es el %d , con %d dias ", aux3, menor);
		
		printf("\n");
		
		printf("El empleado con mayor dias solicitados con primer digito 3 es el %d , con %d dias ", aux2, mayor);
	}
	
}