// Autor: Farid
// Fecha: 2025-11-19
#include <stdio.h>

#define TAMANO_ARRAY 8
void main(void) {
 
    int arreglo[TAMANO_ARRAY] = {10, 20, 15, 20, 30, 10, 5, 20};
    int numero_buscar = 0;
    int contador = 0;
    int i; 

    printf("\n--- Contador de Ocurrencias en Arreglo ---\n");
    printf("Arreglo actual: {10, 20, 15, 20, 30, 10, 5, 20}\n");

    printf("Introduce el número entero que quieres buscar: ");
    if (scanf("%d", &numero_buscar) != 1) {
        printf("Entrada inválida. Saliendo.\n");
        return;
    }

    for (i = 0; i < TAMANO_ARRAY; i++) 
    {
        if (arreglo[i] == numero_buscar) 
        {
            contador++; 
        }
    }

    printf("\n--- Resultados de Búsqueda ---\n");
    printf("El número %d fue encontrado %d veces en el arreglo.\n", numero_buscar, contador);
}
