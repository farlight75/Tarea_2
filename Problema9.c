// Autor: Farid
// Fecha: 2025-11-18
#include <stdio.h>
#define MAX_NUMEROS 100

void main(void) {
    int numero;
    int positivos = 0;
    int negativos = 0;
    int nulos = 0;
    int i; // Contador del bucle

    printf("\n--- Contador de Polaridad (100 números) ---\n");

    for (i = 1; i <= MAX_NUMEROS; i++) {
        printf("Introduce número %d de %d: ", i, MAX_NUMEROS);

        if (scanf("%d", &numero) != 1) {
            printf("\nError de lectura. Finalizando programa prematuramente.\n");
            break;
        }

        if (numero > 0) {
            positivos++; // Si es positivo
        } else if (numero < 0) {
            negativos++; // Si es negativo
        } else {
            nulos++;     // Si es cero (nulo)
        }
    }

    printf("\n--- Reporte Final ---\n");
    printf("Números positivos: %d\n", positivos);
    printf("Números negativos: %d\n", negativos);
    printf("Números nulos (ceros): %d\n", nulos);
}
