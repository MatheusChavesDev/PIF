#include <stdio.h>

long fatorialIterativo(int n);
long fatorialRecursivo(int n);

int main() {
    int n;
    long fi, fr;
    printf("Digite um inteiro nao negativo: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Erro: O numero nao pode ser negativo.\n");
    } else {
        fi = fatorialIterativo(n);
        fr = fatorialRecursivo(n);
        printf("Fatorial iterativo: %ld\n", fi);
        printf("Fatorial recursivo: %ld\n", fr);

        if (fi == fr) {
            printf("Os resultados coincidem.\n");
        } else {
            printf("Os resultados sao diferentes.\n");
        }
    }
    return 0;
}

long fatorialIterativo(int n) {
    long fat = 1;
    int i;
    for (i = 2; i <= n; i++) {
        fat *= i;
    }
    return fat;
}

long fatorialRecursivo(int n) {
    if (n == 0) {
        return 1;
    }
    return n * fatorialRecursivo(n - 1);
}
