#include <stdio.h>
#include <stdlib.h>

#define CANTIDAD 1.0
#define M 50.0
#define N 10.0
#define P 5.0

int main(int argc, char **argv){
	printf("a) n / p +3 = %.2f\n", N / P+3);
	printf("b) m/p+n-1*cantidad = %.2f\n",M/P+N-1*CANTIDAD);
	printf("c) m-3*n+4*cantidad = %.2f\n", M-3*N+4*CANTIDAD);
	printf("d) cantidad/5 = %.2f\n", CANTIDAD / 5);
	return (EXIT_SUCCESS);
}