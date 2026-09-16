#include <stdio.h>

int main() {
   
    const double PI = 3.141593;
    double raio;

    printf("Digite o valor do raio do círculo: ");
    scanf("%lf", &raio);

   
    double area = PI * raio * raio;
    double circunferencia = 2.0 * PI * raio;

    printf("\n--- Resultados ---\n");
    printf("Área: %.4f\n", area);
    printf("Circunferência: %.4f\n", circunferencia);

    return 0;
}