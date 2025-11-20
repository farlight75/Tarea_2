// Autor: Farid Díaz
// Fecha: 2025-11-19

#include <stdio.h>

void main(void) {
    int suma = 0;
    int i; 

    printf("\n--- Suma de Pares entre 10 y 50 ---\n");


    for (i = 10; i <= 50; i = i + 2) {
        suma = suma + i;
    }

    printf("El rango de suma es del 10 al 50.\n");
    printf("La suma total de los números pares es: %d\n", suma);
}
