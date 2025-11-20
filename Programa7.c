// Autor: Farid
// Fecha: 2025-11-16
#include <stdio.h>

void main(void) {
    int dias_estancia = 0;
    float distancia_ida = 0.0;
    float distancia_total = 0.0;
    float precio_base = 0.0;
    float precio_final = 0.0;
    
    // Constantes del problema
    const float COSTO_KM = 0.23;
    const float DESCUENTO = 0.30;
    const int DIAS_UMBRAL = 7;
    const float DISTANCIA_UMBRAL = 500.0;

    printf("\n--- Cálculo de Boleto de Tren ---\n");
    do {
        printf("Introduce la distancia de SÓLO IDA (km): ");
        if (scanf("%f", &distancia_ida) != 1 || distancia_ida <= 0) {
            printf("Distancia inválida. Reintenta.\n");
            distancia_ida = -1.0; 
        }
    } while (distancia_ida <= 0);

    do {
        printf("Introduce el número de días de estancia: ");
        if (scanf("%d", &dias_estancia) != 1 || dias_estancia <= 0) {
            printf("Días inválidos. Reintenta.\n");
            dias_estancia = -1;
        }
    } while (dias_estancia <= 0);

    distancia_total = 2 * distancia_ida; // Ida y vuelta
    precio_base = distancia_total * COSTO_KM;
    precio_final = precio_base;


    if ((dias_estancia > DIAS_UMBRAL) && (distancia_total > DISTANCIA_UMBRAL)) {
        
        float descuento_aplicado = precio_base * DESCUENTO;
        precio_final = precio_base - descuento_aplicado;
        printf("\n¡Descuento aplicado! Condición de 30%% cumplida.\n");
    } else {
        printf("\nNo se aplican descuentos especiales.\n");
    }

    
    printf("\n--- Resumen del Viaje ---\n");
    printf("Distancia Total (km): %.2f\n", distancia_total);
    printf("Precio Base: $%.2f\n", precio_base);
    printf("Precio Final a Pagar: $%.2f\n", precio_final);
}
