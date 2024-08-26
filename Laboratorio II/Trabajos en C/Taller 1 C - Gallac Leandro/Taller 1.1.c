#include <stdio.h>

struct Empleado {
    int legajo;
    char nombre[100];
};

// Prototipos de funciones
int menu(); // Despliega un menu de opciones.
void leerEmpleado(int *legajo, char *nombre);	// Se cargan los empleados en un arreglo de empleados de dimension 10.
int controlarLegajo(int legajo, int valorIngresado); // Se verifica que el 'legajo' de un empleado sea multiplo de algun numero ingresado.
int validarLegajo(int legajo); // Se valida que el 'legajo' de cada empleado sea un numero entre 1000 y 9999 inclusive.
void mostrarEmpleado(struct Empleado empleado); // Muestra por pantalla un empleado en especifico.
void mostrarEmpleados(struct Empleado empleados[], int contador); // Se muestra por pantalla todos los empleados cargados.

int main() {
    int opcion;
    int i = 0;
    const int DIM = 10;
    struct Empleado empleados[DIM];

    printf("Bienvenido al software de control. Que deseas hacer hoy?\n");

    do {
        opcion = menu();

        switch (opcion) {
            case 1:
                if (i < DIM) {
                    leerEmpleado(&(empleados[i].legajo), empleados[i].nombre);
                    i++;
                } else {
                    printf("No se pueden ingresar mas empleados. La lista esta llena.\n");
                }
                break;
            case 2:
                mostrarEmpleados(empleados, i);
                break;
            case 3: {
                int divisor;
                printf("Ingrese el divisor para mostrar legajos multiplos: ");
                scanf("%d", &divisor);
                mostrarLegM(empleados, i, divisor);
                break;
            }
            case 4: {
                int divisor;
                printf("Ingrese un valor para mostrar legajos que no sean multiplos: ");
                scanf("%d", &divisor);
                mostrarLegNM(empleados, i, divisor);
                break;
            }
            case 5:
                printf("Espero haber sido de ayuda. Hasta la proxima!\n");
                break;
            default:
                printf("Opción no valida. Intentalo de nuevo.\n");
                break;
        }
    } while (opcion != 5);

    return 0;
}

int menu() {
    int opc;
    printf("\n1- Ingresar empleado. \n2- Mostrar todos los empleados. \n3- Mostrar los legajos multiplos. \n4- Mostrar los legajos no multiplos. \n5- Salir.\n");
    printf("\nIngrese su opcion: ");
    scanf("%d", &opc);
    return opc;
}

void leerEmpleado(int *legajo, char *nombre) {
    do {
        printf("Legajo: ");
        scanf("%d", legajo);
    } while (validarLegajo(*legajo) == 0);

    printf("Nombre: ");
    scanf("%s", nombre);
}

int controlarLegajo(int legajo, int valorIngresado) {
    return (legajo % valorIngresado == 0);
}

int validarLegajo(int legajo) {
	if (!(legajo >= 1000 && legajo <= 9999)) {
		printf("El legajo debe ser un numero entre 1000 y 9999 inclusive.\n");
	}
	return (legajo >= 1000 && legajo <= 9999);
}

void mostrarEmpleado(struct Empleado empleado) {
    printf("Nombre: %s\n", empleado.nombre);
    printf("Legajo: %d\n", empleado.legajo);
}

void mostrarEmpleados(struct Empleado empleados[], int contador) {
    if (contador == 0) {
        printf("No hay empleados para mostrar.\n");
        
    }else {
		printf("\nListado de empleados:\n");
	    for (int i = 0; i < contador; i++) {
       		printf("Empleado %d:\n", i + 1);
       		mostrarEmpleado(empleados[i]);
    }
	
	}

    
}

void mostrarLegM(struct Empleado empleados[], int contador, int divisor) {
    printf("\nEmpleados con legajos multiplos de %d:\n", divisor);
    for (int i = 0; i < contador; i++) {
        if (controlarLegajo(empleados[i].legajo, divisor)) {
            mostrarEmpleado(empleados[i]);
        }
    }
}

void mostrarLegNM(struct Empleado empleados[], int contador, int divisor) {
    printf("\nEmpleados con legajos no multiplos de %d:\n", divisor);
    for (int i = 0; i < contador; i++) {
        if (!controlarLegajo(empleados[i].legajo, divisor)) {
            mostrarEmpleado(empleados[i]);
        }
    }
}