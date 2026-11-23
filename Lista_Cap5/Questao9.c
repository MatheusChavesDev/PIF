#include <stdio.h>
#include <windows.h>

int maior(int a, int b);

int main() {
    SetConsoleOutputCP(CP_UTF8);
    int a, b;
    printf("Digite o primeiro número: ");
    scanf("%d", &a);
    printf("Digite o segundo número: ");
    scanf("%d", &b);

    printf("Maior: %d\n", maior(a, b));
    return 0;
}

int maior(int a, int b) {
    if (a > b) {
        return a;
    }
    return b;
}
