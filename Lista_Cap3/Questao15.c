#include <stdio.h>

int main() {
    int NUM, i;
    int encontrados = 0;

    printf("Informe um numero limite inteiro positivo (NUM): ");
    scanf("%d", &NUM);

    /* Validação para garantir que o número seja positivo */
    if (NUM <= 0) {
        printf("Erro: Por favor, informe um numero inteiro positivo (maior que zero).\n");
        return 1;
    }

    printf("\nMultiplos de 3 e 5 entre 1 e %d:\n", NUM);

    for (i = 1; i <= NUM; i++) {
        /* Operador logico E (&&) para verificar ambas as condicoes simultaneamente */
        if (i % 3 == 0 && i % 5 == 0) {
            printf("%d ", i);
            encontrados++;
        }
    }

    /* Caso nenhum numero satisfaça a condicao no intervalo */
    if (encontrados == 0) {
        printf("Nenhum numero no intervalo de 1 a %d e multiplo de 3 e 5 ao mesmo tempo.", NUM);
    }

    printf("\n");

    return 0;
}