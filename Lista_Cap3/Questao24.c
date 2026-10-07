#include <stdio.h>

int main() {
    int N, i, j;

    /* Validação para garantir que N seja um número ímpar entre 3 e 19 */
    do {
        printf("Informe uma dimensao impar N (entre 3 e 19): ");
        scanf("%d", &N);

        if (N < 3 || N > 19 || N % 2 == 0) {
            printf("Valor invalido! N deve ser um numero IMPAR entre 3 e 19.\n\n");
        }
    } while (N < 3 || N > 19 || N % 2 == 0);

    printf("\nPadrao em X (N = %d):\n\n", N);

    /* Laço externo: controla a linha atual (1 a N) */
    for (i = 1; i <= N; i++) {
        /* Laço interno: controla a coluna atual (1 a N) */
        for (j = 1; j <= N; j++) {
            /* Imprime '*' na diagonal principal (i == j) ou na secundária (i + j == N + 1) */
            if (i == j || i + j == N + 1) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n"); /* Avança para a próxima linha */
    }

    return 0;
}