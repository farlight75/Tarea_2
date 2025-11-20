// Autor: Farid
// Fecha: 2025-11-19

#include <stdio.h>

void main(void) {
    int num1 = 0;
    int num2 = 0;

    printf("\n--- Verificador de Divisibilidad ---\n");

    printf("Introduce el número a ser DIVIDIDO (Num1): ");
    if (scanf("%d", &num1) != 1) return;

    do {
        printf("Introduce el número DIVISOR (Num2, distinto de 0): ");
        if (scanf("%d", &num2) != 1) return;
        if (num2 == 0) {
            printf("El divisor no puede ser cero. Intenta de nuevo.\n");
        }
    } while (num2 == 0);


    if (num1 % num2 == 0) {
        printf("\nRESULTADO: %d SÍ es divisor de %d.\n", num2, num1);
    } else {
        printf("\nRESULTADO: %d NO es divisor de %d. Resto: %d\n", num2, num1, num1 % num2);
    }
}
