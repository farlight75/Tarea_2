// Autor: Farid
// Fecha: 2025-11-19
#include <stdio.h>

void main(void) {
    float monto_compra = 0.0;
    float monto_pagar = 0.0;
    const float UMBRAL_DESCUENTO = 2500.0;
    const float PORCENTAJE_DESCUENTO = 0.08; // 8%

    printf("\n--- Cálculo de Descuento ---\n");
    do {
        printf("Introduce el monto total de la compra: ");
        if (scanf("%f", &monto_compra) != 1 || monto_compra < 0) {
            printf("Monto inválido. Reintenta.\n");
            monto_compra = -1.0; // Forzar el bucle a continuar
        }
    } while (monto_compra < 0);

    // Inicializamos monto a pagar con el monto original.
    monto_pagar = monto_compra;

    if (monto_compra > UMBRAL_DESCUENTO) {
        float descuento_aplicado = monto_compra * PORCENTAJE_DESCUENTO;
        monto_pagar = monto_compra - descuento_aplicado;
        printf("\n¡Felicidades! Se aplicó un 8%% de descuento ($%.2f).\n", descuento_aplicado);
    } else {
        printf("\nLa compra no califica para descuento.\n");
    }

    printf("El cliente debe pagar: $%.2f\n", monto_pagar);
}
