#include <stdio.h>
#include <string.h>


struct Empleado {
	int legajo;
	char nombre[99];
} 

// Prototipos de funciones:
	//int main();
	//void leerEmpleado(int *legajo, char *nombre); // Solicita los datos relativos a un empleado y verifica que sean validos. 
	//int controlarLegajo(int legajo, int valorIngresado); // Valor de retorno: 1 si el legajo es multiplo de 'valorIngresado' y 0 en caso contrario.
	//int validarLegajo(int legajo); // Valida el legajo que sea un numero mayor que 1000 y menor que 9999.
	//void mostrarEmpleado(struct Empleado empleados[]); // Muestra los datos de un solo empleado. Se utiliza para generar el listado encolumnado.
	//int menu(); // Muestra un menu con las posibles operaciones que se pueden realizar.



int main() {
	int opcion;
	int DIM = 10;
	struct Empleado empleados[DIM];
	printf("Bienvenido al software de control. Que deseas hacer hoy?");
	
	do {
		opcion = menu();
		switch(opcion) {
			case 1:
				leerEmpleado(&empleado[].dia, &empleado[].legajo);
				break;
			case 2:
				mostrarTotEmpleados();
				break;
			case 3:
				mostrarLegM();
				break;
			case 4:
				mostrarLegNM();
				break;
			case 5:
				printf("Espero haber sido de ayuda. Hasta la proxima!\n");
				break;
			default:
                printf("Opcion no valida. Intentalo de nuevo.\n");
            	break;
        }
	
		}
	} while (opcion != 5);
	
	return 0;
}

// Desarollo de modulos:
int menu() {
	int opc;
	printf("\n1- Ingresar empleados. \n2- Mostrar todos. \n3- Mostrar los legajos multiplos. \n4- Mostrar los legajos no multiplos. \n5- Salir.");
	printf("\nIngrese su opcion: ");
	scanf("%d", &opc);
	
	return opc;
}

void leerEmpleado(int *legajo, char *nombre) {
	int i = 0;
	while (i < DIM) {
		do {
			printf("\nIngresa un nombre para el empleado %d:", i);
			scanf("%c", empleados[i].nombre);
			printf("\nIngresa el legajo del empleado %c", i);
			scanf("%d", empleados[i].legajo);
		} while (validarLegajo(empleados[i].legajo) == 0);
		i ++;
	} 
		
int validarLegajo(int legajo) {
    return (legajo >= 1000 && legajo <= 9999);
}

void mostrarEmpleado(struct Empleado empleado) {
    printf("Nombre: %s\n", empleado.nombre);
    printf("Legajo: %d\n", empleado.legajo);
}

void mostrarTotEmpleados(struct Empleado empleados[], int n) {
    for (int i = 0; i < n; i++) {
        printf("Empleado %d:\n", i + 1);
        mostrarEmpleado(empleados[i]);
    }
	
}