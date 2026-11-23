#include <stdio.h>
#include <windows.h>

int somaDigitos(int n);

int main() {
    SetConsoleOutputCP(CP_UTF8);
    int n;
    printf("Digite um número inteiro positivo: ");
    scanf("%d", &n);

    printf("Soma dos dígitos: %d\n", somaDigitos(n));
    return 0;
}

int somaDigitos(int n) {
    // Caso base: número com um dígito só, a soma é o próprio número
    if (n < 10) {
        return n;
    }
    // Passo recursivo: último dígito (n % 10) + soma dos dígitos restantes (n / 10)
    return n % 10 + somaDigitos(n / 10);
}
