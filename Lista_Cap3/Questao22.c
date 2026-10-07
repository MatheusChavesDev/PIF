#include <stdio.h>

int main() {
    int n, i, j;
    int numero = 1;

    printf("Introduza o numero de linhas (N): ");
    scanf("%d", &n);

    /* Validacao para garantir que N seja um inteiro positivo */
    if (n <= 0) {
        printf("Erro: Por favor, introduza um numero inteiro positivo (maior que zero).\n");
        return 1;
    }

    printf("\nTriangulo de Floyd (%d linhas):\n\n", n);

    /* Laço externo: controla a linha atual (de 1 ate N) */
    for (i = 1; i <= n; i++) {
        /* Laço interno: imprime 'i' numeros na linha 'i' */
        for (j = 1; j <= i; j++) {
            printf("%d ", numero);
            numero++; /* Incrementa o contador global de numeros */
        }
        printf("\n"); /* Avança para a linha seguinte no ecrã */
    }

    return 0;
}