// Autor: Farid Díaz
// Fecha: 2025-11-19

#include <stdio.h>

void main(void) {
    int N = 0; 
    long long producto = 1; 
    int i; 

    printf("\n--- Producto de los N Primeros Naturales (N!) ---\n");

    do {
        printf("Introduce el límite (N) para el producto (1-20): ");
     
        if (scanf("%d", &N) != 1 || N <= 0 || N > 20) { 
            printf("N debe ser un entero entre 1 y 20.\n");
            N = -1; 
        }
    } while (N <= 0 || N > 20);

    for (i = 1; i <= N; i++) {
        producto = producto * i; 
    }

 
    printf("\n--- Resultado ---\n");
    printf("El producto de los primeros %d números naturales (1 * 2 * ... * %d) es:\n", N, N);
    printf("Producto: %lld\n", producto); 
}
