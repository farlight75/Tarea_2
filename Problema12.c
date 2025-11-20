// Autor: Farid Díaz
// Fecha: 2025-11-19
#include <stdio.h>

#define MAX_ELEMENTOS 6
void main(void) {
    int arreglo[] = {5, -2, 0, 10, 0, -8};
    int positivos = 0;
    int negativos = 0;
    int nulos = 0;
    int i; 

    printf("\n--- Conteo de Polaridad en Arreglo ---\n");
    printf("Arreglo analizado: {5, -2, 0, 10, 0, -8}\n");

    for (i = 0; i < MAX_ELEMENTOS; i++) {
        int elemento = arreglo[i];
        
        if (elemento > 0) {
            positivos++; 
        } else if (elemento < 0) {
            negativos++; 
        } else {
            nulos++;    
        }
    }

    // --- SECCIÓN DE SALIDA DE RESULTADOS ---
    printf("\n--- Reporte de Polaridad ---\n");
    printf("Positivos: %d\n", positivos);
    printf("Negativos: %d\n", negativos);
    printf("Nulos (Ceros): %d\n", nulos);
}
