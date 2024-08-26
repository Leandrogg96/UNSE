/*

Dados dos números reales y un carácter que contiene la operación que desea realizar el
usuario con esos dos números (‘+’,‘-‘, ‘*’ y ‘/’);a partir de ellos muestre tanto la operación como su resultado.
Ejemplo: si se introducen 14.25, 22.50 y el carácter ‘+’, el programa deberá sumar los valores y mostrar “14.25+22.50=36.75”.

*/

#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	float num,num2, resultado;
	char op;

	printf("Ingrese un numero:\n");
	scanf("%f",&num);

	printf("Ingrese un numero:\n");
	scanf("%f",&num2);
	getchar();
	printf("Ingrese la operacion: (+,-, * y /)\n");
	scanf("%c", &op);
	if (op == '+') {
		resultado = num + num2;
	} else if (op == '-') {
		resultado = num - num2;
	} else if (op == '*') {
		resultado = num * num2;
	} else if (op == '/') {
		resultado = num / num2;
	} 
	printf("%.2f %c %.2f = %.2f", num,op,num2,resultado );


	return 0;
}
