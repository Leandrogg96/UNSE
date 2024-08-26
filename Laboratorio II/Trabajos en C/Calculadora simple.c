#include <stdio.h>

// Prototipo de funcion para la suma.

float suma(float num1, float num2);

// Prototipo de funcion para el producto.

float producto(float num1, float num2);

// Prototipo de funcion para la resta.

float resta(float num1, float num2);

// Prototipo de funcion para la division.

float division(float num1, float num2);

// Prototipo de funcion menu.

void menu();

// Programa principal.
int main() {

	menu();	

	return 0;
}

void menu() {
	int opcion;
	float num1, num2;
	
	do {
        // Mostrar menu de opciones.
        printf("Calculadora Simple");
        printf("\n---------------------------------------------------------\n");
        printf("1. Suma\n");
        printf("2. Producto\n");
        printf("3. Resta\n");
        printf("4. Division\n");
        printf("5. Salir\n");
        printf("---------------------------------------------------------\n");
        printf("Seleccione una opcion: ");
        scanf("%d", &opcion);
		printf("---------------------------------------------------------\n");
		
        // Verificar la opcion seleccionada.
        switch (opcion) {
            case 1:
                printf("Ingresaste a la funcion sumar. Ingrese dos operandos: ");
                scanf("%f %f", &num1, &num2);
                printf("Resultado: %.2f\n", suma(num1, num2));
           		printf("---------------------------------------------------------\n");
                break;
            case 2:
                printf("Ingresaste a la funcion producto. Ingrese dos operandos: ");
                scanf("%f %f", &num1, &num2);
                printf("Resultado: %.2f\n", producto(num1, num2));
           		printf("---------------------------------------------------------\n");
				break;
            case 3:
                printf("Ingresaste a la funcion resta. Ingrese dos operandos: ");
                scanf("%f %f", &num1, &num2);
                printf("Resultado: %.2f\n", resta(num1, num2));
                printf("---------------------------------------------------------\n");
                break;
            case 4:
                printf("Ingresaste a la funcion division. Ingrese dos operandos: ");
                scanf("%f %f", &num1, &num2);
                printf("Resultado: %.2f\n", division(num1, num2));
                printf("---------------------------------------------------------\n");
                break;
            case 5:
                printf("Saliendo del programa.\n");
                printf("---------------------------------------------------------\n");
                break;
            default:
                printf("Opcion no valida. Intentelo de nuevo.\n");
                printf("---------------------------------------------------------\n");
                break;
        }
    } while (opcion != 5);
}

float suma(float num1, float num2){
	return (num1 + num2);
}

float producto(float num1, float num2){
	return (num1*num2);
}

float resta(float num1, float num2){
	return (num1 - num2);
}

float division(float num1, float num2){
	if (num2 == 0){
		printf("Error: No se puede dividir por cero.\n");
		return 0.0;
	} 
	return (num1 / num2);
}