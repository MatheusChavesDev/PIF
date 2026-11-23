#include <stdio.h>
#include <windows.h>

int ehPrimo(int n);

int main() {
    SetConsoleOutputCP(CP_UTF8);
    int n, i;
    printf("Digite um número inteiro: ");
    scanf("%d", &n);

    if (ehPrimo(n)) {
        printf("%d é primo.\n", n);
    } else {
        printf("%d não é primo.\n", n);
    }

    printf("Primos de 1 até 50: ");
    for (i = 1; i <= 50; i++) {
        if (ehPrimo(i)) {
            printf("%d ", i);
        }
    }
    printf("\n");
    return 0;
}

int ehPrimo(int n) {
    int i;
    if (n < 2) {
        return 0;
    }
    for (i = 2; i < n; i++) {
        if (n % i == 0) {
            return 0;
        }
    }
    return 1;
}
