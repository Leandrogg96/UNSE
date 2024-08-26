// Importa bibliotecas que se utilizan.
#include <stdio.h>
#include <math.h>

// Define una estructura para representar un punto en el plano.
struct Punto {
    double x;
    double y;
};

// Función para calcular la distancia entre dos puntos.
double calcularDistancia(struct Punto p1, struct Punto p2) {
    return sqrt(pow(p2.x - p1.x, 2) + pow(p2.y - p1.y, 2));
}

int main() {
    struct Punto punto1, punto2;
    char respuesta;

    do {
        // Solicita las coordenadas del primer punto.
        printf("Ingrese las coordenadas del primer punto en el siguiente orden:\n - Coordenada en x: ");
        scanf("%lf", &punto1.x);
        printf(" - Coordenada en y: ");
        scanf("%lf", &punto1.y);


        // Solicita las coordenadas del segundo punto.
        printf("Ingrese las coordenadas del segundo punto en el siguiente orden:\n - Coordenada en x: ");
        scanf("%lf", &punto2.x);
        printf(" - Coordenada en y: ");
        scanf("%lf", &punto2.y);

        // Se llama a la funcion "calcularDistancia" para calcular la distancia entre los puntos ingresados.
        double distancia = calcularDistancia(punto1, punto2);

        // Muestra la distancia.
        printf("\nLa distancia entre los dos puntos es: %.2lf\n", distancia);
		printf("----------------------------------------------------------------------\n");
		
        // Pregunta al usuario si desea repetir.
        printf("Desea calcular la distancia entre otros dos puntos? (s/n): ");
        scanf(" %c", &respuesta);

    } while (respuesta == 's' || respuesta == 'S');

    return 0;
}