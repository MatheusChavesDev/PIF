#include <stdio.h>
#include <windows.h>
#include "areas.h"

int main() {
    SetConsoleOutputCP(CP_UTF8);
    float raio, base, altura;

    printf("Digite o raio do círculo: ");
    scanf("%f", &raio);
    printf("Área do círculo: %.2f\n", A_CIRC(raio));

    printf("Digite a base e a altura do retângulo: ");
    scanf("%f %f", &base, &altura);
    printf("Área do retângulo: %.2f\n", A_RET(base, altura));

    printf("Digite a base e a altura do triângulo: ");
    scanf("%f %f", &base, &altura);
    printf("Área do triângulo: %.2f\n", A_TRI(base, altura));
    return 0;
}
