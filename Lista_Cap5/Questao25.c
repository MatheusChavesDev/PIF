#include <stdio.h>

int mdc(int a, int b);
void simplifica(int num, int den);

int main() {
    int a, b;
    printf("Digite dois inteiros positivos: ");
    scanf("%d %d", &a, &b);

    if (a <= 0 || b <= 0) {
        printf("Erro: Os numeros devem ser positivos.\n");
    } else {
        printf("MDC(%d, %d) = %d\n", a, b, mdc(a, b));
        simplifica(a, b);
    }
    return 0;
}

int mdc(int a, int b) {
    // Caso base: quando b chega a 0, o MDC e o a
    if (b == 0) {
        return a;
    }
    // Passo recursivo: MDC(a, b) = MDC(b, resto de a por b)
    return mdc(b, a % b);
}

void simplifica(int num, int den) {
    int m = mdc(num, den);
    printf("Fracao %d/%d simplificada: %d/%d\n", num, den, num / m, den / m);
}
