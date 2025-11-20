// Autor: Farid
// Fecha: 2025-11-18
#include <stdio.h>

void main(void) {
    float capital = 0.0;
    float tasa_anual = 0.0;
    float interes_mensual = 0.0;
    float monto_final = 0.0;

    printf("\n--- Cálculo de Inversión Mensual ---\n");
    printf("Introduce Capital Inicial: ");
    if (scanf("%f", &capital) != 1 || capital <= 0) {
        printf("Capital inválido. Saliendo.\n");
        return;
    }

    printf("Introduce Tasa de Interés ANUAL (%%): ");
    if (scanf("%f", &tasa_anual) != 1 || tasa_anual < 0) {
        printf("Tasa inválida. Saliendo.\n");
        return;
    }
    interes_mensual = capital * (tasa_anual / 100.0 / 12.0);
    monto_final = capital + interes_mensual;
    printf("\n--- Resultados de la Inversión ---\n");
    printf("Interés ganado en el mes: $%.2f\n", interes_mensual);
    printf("Monto Final al terminar el mes: $%.2f\n", monto_final);
}
