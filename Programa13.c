// Autor: Farid
// Fecha: 2025-11-19

#include <stdio.h>

#define CANTIDAD_PARES 100 // Necesitamos almacenar 100 pares

void main(void) {

    int arreglo_pares[CANTIDAD_PARES]; 
    int i; 
    int valor_par = 2; 

    printf("\n--- Generación y Almacenamiento de 100 Pares ---\n");

    for (i = 0; i < CANTIDAD_PARES; i++) {

        arreglo_pares[i] = valor_par;

      
        valor_par += 2;
    }
    printf("\n--- Contenido del Arreglo (Primeros 100 Pares) ---\n");
    for (i = 0; i < CANTIDAD_PARES; i++) {
        printf("%4d", arreglo_pares[i]); 
        if ((i + 1) % 10 == 0) {
            printf("\n");
        }
    }
}
