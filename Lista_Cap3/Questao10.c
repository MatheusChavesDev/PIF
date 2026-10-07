#include <stdio.h>

int main() {
    int i;

    for (i = 1; i <= 100; i++) {
        /* Imprime o múltiplo de 3 seguido de tabulação */
        printf("%d\t", i * 3);

        /* A cada 10 números impressos, insere uma quebra de linha */
        if (i % 10 == 0) {
            printf("\n");
        }
    }

    return 0;
}