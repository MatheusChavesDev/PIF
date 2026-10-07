#include <stdio.h>

int main() {
    int N, i;
    int divisores = 0;

    printf("Informe um numero inteiro positivo: ");
    scanf("%d", &N);

    /* Validação para garantir um número inteiro positivo */
    if (N <= 0) {
        printf("Erro: Por favor, informe um numero inteiro positivo (maior que zero).\n");
        return 1;
    }

    /* Laço para contar todos os divisores de 1 até N */
    for (i = 1; i <= N; i++) {
        if (N % i == 0) {
            divisores++;
        }
    }

    printf("\nO numero %d possui %d divisor(es) no total.\n", N, divisores);

    /* Um número é primo se tiver exatamente 2 divisores (1 e ele mesmo) */
    if (divisores == 2) {
        printf("Conclusao: O numero %d E PRIMO.\n", N);
    } else {
        printf("Conclusao: O numero %d NAO E PRIMO.\n", N);
    }

    return 0;
}