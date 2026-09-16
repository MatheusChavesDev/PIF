#include <stdio.h>

int main() {
    double lado, base, altura;

    // Leitura dos dados do quadrado
    printf("Digite o lado do quadrado (L): ");
    scanf("%lf", &lado);

    // Leitura dos dados compartilhados pelo retângulo e triângulo
    printf("Digite a base (B): ");
    scanf("%lf", &base);
    printf("Digite a altura (H): ");
    scanf("%lf", &altura);

    // Cálculos das areas
    double area_quadrado = lado * lado;
    double area_retangulo = base * altura;
    double area_triangulo = (base * altura) / 2.0;

    // Exibição dos resultados
    printf("\n--- Resultados ---\n");
    printf("a) Area do quadrado (L = %.2f): %.2f\n", lado, area_quadrado);
    printf("b) Area do retângulo (B = %.2f, H = %.2f): %.2f\n", base, altura, area_retangulo);
    printf("c) Area do triângulo retângulo (B = %.2f, H = %.2f): %.2f\n", base, altura, area_triangulo);

    return 0;
}