// Autor: Farid
// Fecha: 2025-11-19

#include <stdio.h>
#include <math.h> 

void main(void) {

    float radio = 0.0;
    float area = 0.0;
    float circunferencia = 0.0;
    const float PI = 3.1415926535; // Definición local de PI

    // SECCIÓN DE ENTRADA Y VALIDACIÓN

    do {
        printf("\nIntroduce el radio del círculo (debe ser positivo): ");
        if (scanf("%f", &radio) != 1) {
            printf("Error: Entrada inválida. Saliendo.\n");
            return;
        }
        if (radio < 0) {
            printf("Radio no válido. Intenta de nuevo.\n");
        }
    } while (radio < 0);

    area = PI * pow(radio, 2);
    circunferencia = 2 * PI * radio;
    printf("\n--- Resultados del Círculo ---\n");
    
    printf("El Área es: %.2f\n", area);
    printf("La Circunferencia es: %.2f\n", circunferencia);
}
