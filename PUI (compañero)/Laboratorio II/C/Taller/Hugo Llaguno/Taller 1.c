#include <stdio.h>
#include <string.h>

struct Date
{
	int Dia;
	int Mes;
	int Anio;
};

void leerFecha (int *dia, int *mes, int *year);
int validarFecha (int dia, int mes, int year);
int calcularDias (int dia, int mes, int year);
int anioBisiesto (int year);
void diasemana (struct Date Fecha, int nro_dias_transcurridos);

int main(){
	int NroDias;
	struct Date Fecha;
	leerFecha(&Fecha.Dia, &Fecha.Mes, &Fecha.Anio);
	NroDias = calcularDias(Fecha.Dia, Fecha.Mes, Fecha.Anio);
	diasemana (Fecha, NroDias);
	return 0;
}


// Funcion por referencia: leerFecha
// Datos de entrada: &Fecha.Dia, &Fecha.Mes, &Fecha.Anio
// Datos de salida: dia, mes, year
// Descripcion: esta funcion carga el dia, mes y año de la variable Fecha hasta que la funcion validarFecha devuelva el valor 1
// Ejemplo 1:	Entrada: dia 1, mes 1, año 2005			Resultado esperado: Se repite el ciclo, se ingresa una nueva fecha
// Ejemplo 2:	Entrada: dia 28, mes 9, año 2022		Resultado esperado: Termina el ciclo
void leerFecha(int *dia, int *mes, int *year)
{
	do
	{
		printf("Ingrese una fecha igual o posterior al 01/01/2006\n");
		printf("Dia: ");
		scanf("%d", dia);
		printf("Mes: ");
		scanf("%d", mes);
		printf("A%cio: ", 164);
		scanf("%d", year);
	}
	while(validarFecha (*dia, *mes, *year) == 0);
};


// Funcion por valor: validarFecha
// Datos de entrada: dia, mes, year
// Datos de salida: Valida
// Descripcion: esta funcion controla si la fecha ingresade es valida, en caso de serlo devuelve el valor 1 caso contrario devuelve el valor 0
// Ejemplo 1:	Entrada dia 1, mes 1, año 2005		Resultado esperado: Valida = 0
// Ejemplo 2:	Entrada dia 28, mes 9, año 2022		Resultado esperado: Valida = 1
int validarFecha (int dia, int mes, int year)
{
	int Valida = 0;
	if((year>=2006) && (mes>0) && (mes<13) && (dia>0))
	{
		if(mes=2)
		{
			if(anioBisiesto(year) == 1)
			{
				if(dia<30)
				{
					Valida = 1;
				}
			}
			else	// if(anioBisiesto(year) == 1)
			{
				if(dia<29)
				{
					Valida = 1;	
				}
			}	// fin del else if(anioBisiesto(year) == 1)	
		}
		else	// if(mes=2)
		{
			if((mes=4) || (mes=6) || (mes=9) || (mes=11))
			{
				if(dia<31)
				{
					Valida = 1;
				}
			}
			else	// if((mes=4) || (mes=6) || (mes=9) || (mes=11))
			{
				if(dia<32)
				{
					Valida = 1;
				}
			}	// fin del else if((mes=4) || (mes=6) || (mes=9) || (mes=11))
		}	// fin del if(mes=2)
	}	// fin del if((year>=2006) && (mes>0) && (mes<13) && (dia>0))
	return Valida;
};


// Funcion por valor: calcularDias
// Datos de entrada: &Fecha.Dia, &Fecha.Mes, &Fecha.Anio
// Datos de salida: CDias
// Descripcion: esta funcion calcula y devuelve la cantidad de dias transcurridos entre la fecha ingresada y el 1/1/2006
// Ejemplo 1:	Entrada dia 1, mes 1, año 2006		Resultado esperado: CDias = 0
// Ejemplo 2:	Entrada dia 28, mes 9, año 2022		Resultado esperado: CDias = 6114
int calcularDias(int dia, int mes, int year)
{
	int CDias = 0;
	int CMes = 1;
	int CAnio = 2006;
	
	while(CAnio != year)
	{
		if(anioBisiesto(CAnio) == 1)
		{
			CDias += 366;
		}
		else	// if(anioBisiesto(CAnio) == 1)
		{
			CDias += 365;
		}	// fin del else if(anioBisiesto(CAnio) == 1)
		CAnio++;
	}	// fin del while(CAnio != year)
	
	while(CMes != mes)
	{
		if(CMes == 2)
		{
			CDias += 28;
		}
		else	// if(CMes == 2)
		{
			if((CMes == 4) || (CMes == 6) || (CMes == 9) || (CMes == 11))
			{
				CDias += 30;
			}
			else	// if((CMes == 4) || (CMes == 6) || (CMes == 9) || (CMes == 11))
			{
				CDias += 31;
			}	// fin del else if((CMes == 4) || (CMes == 6) || (CMes == 9) || (CMes == 11))
		}	// fin del else if(CMes == 2)
		CMes++;
	}	// fin del while(CMes != mes)
	
	CDias += (dia-1);
	return CDias;
};


// Funcion por valor: anioBisiesto
// Datos de entrada: year
// Datos de salida: Bisiesto
// Descripcion: esta funcion controla si el año ingresado es bisiesto, en caso de serlo devuelve el valor 1 caso contrario devuelve el valor 0
// Ejemplo 1:	Entrada año 2006		Resultado esperado: Bisiesto = 0
// Ejemplo 2:	Entrada año 2020		Resultado esperado: Bisiesto = 1
int anioBisiesto(int year)
{
	int Bisiesto = 0;
	if(((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
	{
		Bisiesto = 1;
	}	// fin del else if(((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
	return Bisiesto;
};


// Funcion por valor: diasemana
// Datos de entrada: Fecha, NroDias
// Datos de salida:
// Descripcion: esta funcion determina el dia de la semana de acuerdo al numero de dias transcurridos entre la fecha ingresada y el 1/1/2006
// Ejemplo 1:	Entrada nro_dias_transcurridos 0		Resultado esperado: El dia fue Domingo
// Ejemplo 2:	Entrada nro_dias_transcurridos 6114		Resultado esperado: El dia fue Miercoles
void diasemana (struct Date Fecha, int nro_dias_transcurridos)
{
	int dia_semana;
	char dia[10];
	dia_semana = nro_dias_transcurridos % 7;
	
	switch(dia_semana)
	{
		case 0:
			{
				strcpy(dia, "Domingo");
				break;
			}	// fin del case 0
		case 1:
			{
				strcpy(dia, "Lunes");
				break;
			}	// fin del case 1
		case 2:
			{
				strcpy(dia, "Martes");
				break;
			}	// fin del case 2
		case 3:
			{
				strcpy(dia, "Miercoles");
				break;
			}	// fin del case 3
		case 4:
			{
				strcpy(dia, "Jueves");
				break;
			}	// fin del case 4
		case 5:
			{
				strcpy(dia, "Viernes");
				break;
			}	// fin del case 5
		case 6:
			{
				strcpy(dia, "Sabado");
				break;
			}	// fin del case 6
	}	// fin del switch(dia_semana)
	printf("El %d/%d/%d fue un dia %s", Fecha.Dia, Fecha.Mes, Fecha.Anio, dia);
};