#include <stdio.h>


int main() {
    const double PI = 3.141593;
    double graus, radianos;

    printf("Digite o valor do ângulo em graus: ");
    scanf("%lf", &graus);

    radianos = graus * (PI / 180.0);

    printf("\n%.2f graus equivalem a %.4f radianos.\n", graus, radianos);

    return 0;
}