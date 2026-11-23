#include <stdio.h>
#include <windows.h>

int soma(int a, int b);

int main() {
    SetConsoleOutputCP(CP_UTF8);
    int a, b;
    printf("Digite o primeiro número: ");
    scanf("%d", &a);
    printf("Digite o segundo número: ");
    scanf("%d", &b);

    printf("Soma: %d\n", soma(a, b));
    return 0;
}

int soma(int a, int b) {
    return a + b;
}
