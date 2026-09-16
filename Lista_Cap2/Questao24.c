#include <stdio.h>

int main() {
    const double conversao = 3.6;
    double velocidade_kmh, velocidade_ms;

    printf("Digite a velocidade em km/h: ");
    scanf("%lf", &velocidade_kmh);

   
    velocidade_ms = velocidade_kmh / conversao;

    printf("\nVelocidade: %.2f km/h equivalem a %.2f m/s\n", velocidade_kmh, velocidade_ms);

    return 0;
}