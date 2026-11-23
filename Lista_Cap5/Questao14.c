#include <stdio.h>

int somaDigitos(int n);

int main() {
    int n;
    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &n);

    printf("Soma dos digitos: %d\n", somaDigitos(n));
    return 0;
}

int somaDigitos(int n) {
    // Caso base: numero com um digito so, a soma e o proprio numero
    if (n < 10) {
        return n;
    }
    // Passo recursivo: ultimo digito (n % 10) + soma dos digitos restantes (n / 10)
    return n % 10 + somaDigitos(n / 10);
}
