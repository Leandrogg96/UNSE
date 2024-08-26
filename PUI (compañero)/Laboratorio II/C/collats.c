#include <stdio.h>

unsigned long long collatz(unsigned long long numero)
{
	unsigned long long iteraciones = 0;
	while (numero != 1)
	{
		if (numero % 2 == 0)
		{
			numero = numero / 2;
		}
		else
		{
			numero = (3 * numero) + 1;
		}

		printf("%llu,", numero);
		iteraciones++;
	}
	return iteraciones;
}

int main()
{
	unsigned long long numero;
	printf("Ingrese un numero: ");
	scanf("%llu", &numero);
	unsigned long long iteraciones = collatz(numero);
	printf("\nLas iteraciones para llegar a 1 desde %llu fueron: %llu\n", numero, iteraciones);
	
	return 0;
}