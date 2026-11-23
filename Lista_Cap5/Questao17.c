#include <stdio.h>
#include <windows.h>

long fatorialIterativo(int n);
long fatorialRecursivo(int n);

int main() {
    SetConsoleOutputCP(CP_UTF8);
    int n;
    long fi, fr;
    printf("Digite um inteiro não negativo: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Erro: O número não pode ser negativo.\n");
    } else {
        fi = fatorialIterativo(n);
        fr = fatorialRecursivo(n);
        printf("Fatorial iterativo: %ld\n", fi);
        printf("Fatorial recursivo: %ld\n", fr);

        if (fi == fr) {
            printf("Os resultados coincidem.\n");
        } else {
            printf("Os resultados são diferentes.\n");
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
