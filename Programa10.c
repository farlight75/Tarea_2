// Autor: Farid
// Fecha: 2025-11-18

#include <stdio.h>

#define TAMANO_ARRAY 5
void main(void) {
  
    int arreglo[TAMANO_ARRAY];
    int suma = 0;
    int i; // Contador del bucle

    printf("\n--- Sumador de Elementos de un Arreglo (Tamaño %d) ---\n", TAMANO_ARRAY);
    for (i = 0; i < TAMANO_ARRAY; i++) {
        do {
            printf("Introduce el valor para la posición [%d]: ", i);
            if (scanf("%d", &arreglo[i]) != 1) {
                printf("Entrada inválida. Limpiando buffer y reintentando.\n");
                while (getchar() != '\n'); 
            } else {
                break; 
            }
        } while (1);
    }

    for (i = 0; i < TAMANO_ARRAY; i++) {
        suma = suma + arreglo[i];
     }

    printf("\n--- Resultados ---\n");
    printf("La suma total de los %d elementos es: %d\n", TAMANO_ARRAY, suma);
}
