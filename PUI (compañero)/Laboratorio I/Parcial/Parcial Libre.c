#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <string.h>

#define N 8
int main(int argc, char *argv[]) {

	float Ventas[N][9] = {
		{2345,8,12,2017,1010101889,48000,12,5,0},
		{2446,10,12,2017,1011100747,2500000,5,10,0},
		{3467,15,11,2017,3031103645,800000,10,10,0},
		{3898,17,11,2017,3030100577,60000,50,21,0},
		{4545,17,11,2017,20210100577,60000,50,21,0},
		{6587,17,11,2017,10100100577,60000,50,21,0},
		{2532,8,10,2017,2020100576,8000,20,0,0},
		{9845,12,10,2017,2021104577,3000,100,0,0}
	};
	float venta_promedio;
	int i, j, total_ventas=0,total_descuento=0, total_productos_vend=0, mayor_venta=INT_MIN, menor_venta=INT_MAX, cant_vent_subcat10,cant_vent_subcat11,cant_vent_subcat20,cant_vent_subcat21,cant_vent_subcat30,cant_vent_subcat31;
	int  cod_subcategoria, mont_total_des31,mont_total_des30, mont_total_des21, mont_total_des20, mont_total_des11, mont_total_des10;
	char p_vent[200]="";
	/* a) */
	/*printf("Cargar la matriz Ventas\n\n");
	for ( i=0 ; i<N ; i++ ){

		printf("Codigo de Pedido: ");
		scanf("%f", &Ventas[i][0]);

		printf("Dia Pedido: ");
		scanf("%f", &Ventas[i][1]);

		printf("Mes Pedido: ");
		scanf("%f", &Ventas[i][2]);

		printf("Anio Pedido: ");
		scanf("%f", &Ventas[i][3]);

		printf("Identificacion del Producto: ");
		scanf("%f", &Ventas[i][4]);

		printf("Monto Venta: ");
		scanf("%f", &Ventas[i][5]);

		printf("Cantidad Vendida: ");
		scanf("%f", &Ventas[i][6]);

		printf("Porcentaje de Descuento: ");
		scanf("%f", &Ventas[i][7]);

		Ventas[i][8]=(Ventas[i][5]*Ventas[i][7])/100;
		printf("Monto Descuento: %.0f", Ventas[i][8]);

		printf("\n\n");
	}*/
	for(i = 0; i < N; i++) {
		Ventas[i][8] = (Ventas[i][5] * Ventas[i][7]) / 100;
		printf("Monto Descuento: %.0f \n", Ventas[i][8]);
	}
	printf("\n");
	printf("Codigo de Pedido\tDia de Pedido\tMes de Pedido\tAnio de Pedido\tIdentificacion del Producto\t Monto de Venta\tCantidad Vendida\tPorcentaje de Descuento\tMonto Descuento\n");
	printf("________________________________________________________________________________________________________________________________________________________________________________\n");
	for ( i=0 ; i<N ; i++ ) {
		for ( j=0 ; j<9 ; j++ ) {
			printf("%.0f\t", Ventas[i][j]);
		}
		printf("\n");
	}
	/* b)*/
	for ( i=0 ; i<N ; i++ ) {
		total_ventas = total_ventas + Ventas[i][5];
		total_descuento = total_descuento + Ventas[i][8];
		total_productos_vend = total_productos_vend + Ventas[i][6];
		if ( Ventas[i][5] > mayor_venta) {
			mayor_venta=Ventas[i][5];
		}
		if ( Ventas[i][5] < menor_venta ) {
			menor_venta=Ventas[i][5];
		}
	}
	venta_promedio = total_ventas / N;
	printf("\t\t(numero trismestre)Trismistre-(Anio Ingresado)\n");
	printf("Total de Ventas(Brutos):$%d\tTotal Descuentos:$%d\tTotal de Productos Vendidos:%d\n",total_ventas, total_descuento, total_productos_vend);
	printf("Venta Promedio:$%.0f\tMayor Venta:$%d\tMenor Venta:$%d\n\n",venta_promedio, mayor_venta, menor_venta);

	// c) 1010101889
	for ( i=0 ; i<N ; i++) {
		cod_subcategoria =  Ventas[i][4] / 1000000;
		cod_subcategoria %= 100;
		printf("%d",cod_subcategoria);
		switch (cod_subcategoria) {
			case 10:
				cant_vent_subcat10 += Ventas[i][6];
				mont_total_des10 += Ventas[i][5]-Ventas[i][8];
				break;
			case 11:
				cant_vent_subcat11 += Ventas[i][6];
				mont_total_des11 += Ventas[i][5]-Ventas[i][8];
				break;
			case 20:
				cant_vent_subcat20 += Ventas[i][6];
				mont_total_des20 += Ventas[i][5]-Ventas[i][8];
				break;
			case 21:
				cant_vent_subcat21 += Ventas[i][6];
				mont_total_des21 += Ventas[i][5]-Ventas[i][8];
				break;
			case 30:
				cant_vent_subcat30 += Ventas[i][6];
				mont_total_des30 += Ventas[i][5]-Ventas[i][8];
				break;
			case 31:
				cant_vent_subcat31 += Ventas[i][6];
				mont_total_des31 += Ventas[i][5]-Ventas[i][8];
				break;
		}
	}
	printf("Codigo de subcategoria: 10 - Nombre: Silla\nCantidad vendida %d- Monto total con descuento $%d\n",cant_vent_subcat10, mont_total_des10);
	printf("Codigo de subcategoria: 11 - Nombre: Mesa\nCantidad vendida %d- Monto total con descuento $%d\n",cant_vent_subcat11, mont_total_des11);
	printf("Codigo de subcategoria: 20 - Nombre: Libreria\nCantidad vendida %d- Monto total con descuento $%d\n",cant_vent_subcat20, mont_total_des20);
	printf("Codigo de subcategoria: 21 - Nombre: Etiquetas\nCantidad vendida %d- Monto total con descuento $%d\n",cant_vent_subcat21, mont_total_des21);
	printf("Codigo de subcategoria: 30 - Nombre: Pendrives\nCantidad vendida %d- Monto total con descuento $%d\n",cant_vent_subcat30, mont_total_des30);
	printf("Codigo de subcategoria: 31 - Nombre: Telefonos\nCantidad vendida %d- Monto total con descuento $%d\n\n",cant_vent_subcat31, mont_total_des31);

	// d)
	char str3[20] = "";
	for ( i=0 ; i<N ; i++ ) {
		if( ((Ventas[i][1] >= 15 && Ventas[i][2] == 11) ||  (Ventas[i][1] <= 15 && Ventas[i][2] == 12)) && Ventas[i][7]>20 ) {
			switch ((int) Ventas[i][2]) {
				case 11:
					sprintf(str3,"%.0f",Ventas[i][3]);
					strcat(p_vent,"NOVIEMBRE-");
					strcat(p_vent, str3);
					strcat(p_vent,"-");
					sprintf(str3,"%.0f",Ventas[i][4]);
					strcat(p_vent, str3);
					strcat(p_vent,"\n");
					break;
				case 12:
					sprintf(str3,"%.0f",Ventas[i][3]);
					strcat(p_vent,"DICIEMBRE-");
					strcat(p_vent, str3);
					strcat(p_vent,"-");
					sprintf(str3,"%.0f",Ventas[i][4]);
					strcat(p_vent, str3);
					strcat(p_vent,"\n");
					break;
			}
		}
	}
	printf("%s",p_vent);
	return 0;
}