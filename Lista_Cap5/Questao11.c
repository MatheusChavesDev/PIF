#include <stdio.h>
#include <windows.h>

int ehPar(int n);

int main() {
    SetConsoleOutputCP(CP_UTF8);
    int n;
    printf("Digite um número inteiro: ");
    scanf("%d", &n);

    if (ehPar(n)) {
        printf("%d é par.\n", n);
    } else {
        printf("%d é ímpar.\n", n);
    }
    return 0;
}

int ehPar(int n) {
    if (n % 2 == 0) {
        return 1;
    }
    return 0;
}
