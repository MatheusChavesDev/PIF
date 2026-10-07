#include <stdio.h>

int main() {
    int N, i;
    long long int fatorial = 1;

    printf("Informe um numero inteiro nao negativo: ");
    scanf("%d", &N);

    /* Tratamento de erro para numeros negativos */
    if (N < 0) {
        printf("Erro: Nao e possivel calcular o fatorial de um numero negativo.\n");
    } else {
        /* Calcula o fatorial acumulando os produtos de 1 ate N */
        for (i = 1; i <= N; i++) {
            fatorial *= i;
        }

        /* %lld e o especificador de formatacao para long long int */
        printf("%d! = %lld\n", N, fatorial);
    }

    return 0;
}