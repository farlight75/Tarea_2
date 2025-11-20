// Autor: Farid
// Fecha: 2025-11-17

void main(void) {
    int N = 0; 
    int i;     

    printf("\n--- Generador de Tabla de Multiplicar ---\n");

    printf("Introduce un número entero (N): ");
    if (scanf("%d", &N) != 1) {
        printf("Entrada inválida. Saliendo.\n");
        return; 
    }

    printf("\nTabla del %d:\n", N);

    for (i = 1; i <= 10; i++) {
  
        printf("%d x %2d = %d\n", N, i, N * i);
    }
}
