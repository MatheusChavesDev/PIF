#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c;

    printf("Digite os três lados do triângulo (separados por espaço): ");
    scanf("%lf %lf %lf", &a, &b, &c);

    /* Cálculo do semi-perímetro (p) */
    double p = (a + b + c) / 2.0;

    /* Cálculo da área usando a órmula de Heron */
    double area = sqrt(p * (p - a) * (p - b) * (p - c));

    printf("\nSemi-perimetro (p): %.2f\n", p);
    printf("Área do triângulo: %.4f\n", area);

    return 0;
}