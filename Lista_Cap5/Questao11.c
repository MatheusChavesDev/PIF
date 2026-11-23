#include <stdio.h>

int ehPar(int n);

int main() {
    int n;
    printf("Digite um numero inteiro: ");
    scanf("%d", &n);

    if (ehPar(n)) {
        printf("%d e par.\n", n);
    } else {
        printf("%d e impar.\n", n);
    }
    return 0;
}

int ehPar(int n) {
    if (n % 2 == 0) {
        return 1;
    }
    return 0;
}
