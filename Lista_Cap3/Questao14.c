#include <stdio.h>

int main() {
    int i;
    long int soma_quadrados = 0;

    printf("--- Sequencia de Numeros e Seus Quadrados ---\n");

    for (i = 1; i <= 100; i++) {
        long int quadrado = (long int)i * i;
        printf("%d -> %ld\n", i, quadrado);
        soma_quadrados += quadrado;
    }

    printf("\n---------------------------------------------\n");
    printf("Soma total dos quadrados (1 a 100): %ld\n", soma_quadrados);

    return 0;
}