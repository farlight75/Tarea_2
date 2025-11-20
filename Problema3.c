// Autor: Farid
// Fecha: 2025-11-19
#include <stdio.h>

void main(void) {
    float dolares = 0.0;
    float pesos = 0.0;
    const float TASA_CAMBIO = 11.96; 

    do 
    {
        printf("\nIntroduce la cantidad en dólares a convertir (>= 0): ");
        if (scanf("%f", &dolares) != 1) {
            printf("Error: Entrada inválida. Saliendo.\n");
            return;
        }
        if (dolares < 0) {
            printf("La cantidad debe ser positiva.\n");
        }
    } while (dolares < 0);
    pesos = dolares * TASA_CAMBIO;
    printf("\n--- Resultado de Conversión ---\n");
    printf("$%.2f Dólares equivalen a $%.2f Pesos (Tasa: %.2f).\n", dolares, pesos, TASA_CAMBIO);
}
