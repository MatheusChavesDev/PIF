#include <stdio.h>

int main() {
    int L, i, j;

    /* Validação para garantir que L esteja entre 3 e 20 */
    do {
        printf("Informe a dimensao do lado L (entre 3 e 20): ");
        scanf("%d", &L);

        if (L < 3 || L > 20) {
            printf("Valor invalido! Digite um numero inteiro entre 3 e 20.\n\n");
        }
    } while (L < 3 || L > 20);

    printf("\nQuadrado vazado (L = %d):\n\n", L);

    /* Laço externo: controla a linha atual (1 a L) */
    for (i = 1; i <= L; i++) {
        /* Laço interno: controla a coluna atual (1 a L) */
        for (j = 1; j <= L; j++) {
            /* Imprime 'X' se for borda (primeira/última linha ou primeira/última coluna) */
            if (i == 1 || i == L || j == 1 || j == L) {
                printf("X");
            } else {
                printf(" ");
            }
        }
        printf("\n"); /* Avança para a próxima linha */
    }

    return 0;
}