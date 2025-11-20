// Autor: Farid
// Fecha: 2025-11-17
#include <stdio.h>

void main(void) {
    float sueldo_base = 0.0;
    float sueldo_nuevo = 0.0;
    float aumento_porc = 0.0;
    const float UMBRAL_SUELDO = 1000.0;

    printf("\n--- Cálculo de Aumento Salarial ---\n");
    do {
        printf("Introduce el sueldo base del trabajador: ");
        if (scanf("%f", &sueldo_base) != 1 || sueldo_base <= 0) {
            printf("Sueldo inválido. Reintenta.\n");
            sueldo_base = -1.0; 
        }
    } while (sueldo_base <= 0);

    if (sueldo_base < UMBRAL_SUELDO) {

        aumento_porc = 0.15;
    } else {

        aumento_porc = 0.12;
    }


    sueldo_nuevo = sueldo_base * (1 + aumento_porc);

    printf("\n--- Resultados ---\n");
    printf("Sueldo Base: $%.2f\n", sueldo_base);
    printf("Aumento Aplicado: %.0f%%\n", aumento_porc * 100);
    printf("Nuevo Sueldo: $%.2f\n", sueldo_nuevo);
}
