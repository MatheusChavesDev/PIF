#include <stdio.h>

int main() {
    int n, i;
    long long int t1 = 1, t2 = 1, proximo;

    printf("Informe o termo desejado (N) da sequencia de Fibonacci: ");
    scanf("%d", &n);

    /* Validação para garantir que N seja um inteiro positivo */
    if (n <= 0) {
        printf("Erro: Por favor, informe um numero inteiro positivo (maior que zero).\n");
        return 1;
    }

    printf("\nSequencia de Fibonacci ate o %dº termo:\n", n);

    for (i = 1; i <= n; i++) {
        if (i == 1) {
            printf("%lld", t1);
        } else if (i == 2) {
            printf(", %lld", t2);
        } else {
            proximo = t1 + t2;
            t1 = t2;
            t2 = proximo;
            printf(", %lld", proximo);
        }
    }

    printf("\n\nO %dº termo da sequencia e: ", n);
    if (n == 1 || n == 2) {
        printf("1\n");
    } else {
        printf("%lld\n", t2);
    }

    return 0;
}