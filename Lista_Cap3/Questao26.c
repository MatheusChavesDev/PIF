#include <stdio.h>

int main() {
    int A, B, i, j;
    long int soma_primos = 0;
    int qtd_primos = 0;

    do {
        printf("Informe o valor de A (inteiro positivo): ");
        scanf("%d", &A);
        printf("Informe o valor de B (inteiro positivo, maior que A): ");
        scanf("%d", &B);

        if (A <= 0 || B <= 0 || A >= B) {
            printf("Entrada invalida! Certifique-se de que A e B sao positivos e A < B.\n\n");
        }
    } while (A <= 0 || B <= 0 || A >= B);

    printf("\nNumeros primos no intervalo [%d, %d]:\n", A, B);

    /* Laço externo: percorre todos os números do intervalo [A, B] */
    for (i = A; i <= B; i++) {
        if (i <= 1) {
            continue; /* O número 1 e valores menores não são primos */
        }

        int eh_primo = 1;

        /* Laço interno: testa se 'i' possui divisores além de 1 e ele mesmo */
        for (j = 2; j * j <= i; j++) {
            if (i % j == 0) {
                eh_primo = 0;
                break; /* Encontrou divisor, interrompe a checagem de 'i' */
            }
        }

        /* Se for primo, exibe o número e acumula na soma */
        if (eh_primo) {
            printf("%d ", i);
            soma_primos += i;
            qtd_primos++;
        }
    }

    if (qtd_primos == 0) {
        printf("Nenhum numero primo foi encontrado neste intervalo.");
    }

    printf("\n\n---------------------------------------------\n");
    printf("Total de primos encontrados: %d\n", qtd_primos);
    printf("Soma de todos os primos no intervalo: %ld\n", soma_primos);
    printf("---------------------------------------------\n");

    return 0;
}