#include <stdio.h>
#include <math.h>

int main() {
    double lado_a, lado_b;

    printf("Digite o valor do primeiro cateto (lado a): ");
    scanf("%lf", &lado_a);

    printf("Digite o valor do segundo cateto (lado b): ");
    scanf("%lf", &lado_b);

   
    double hipotenusa = sqrt(pow(lado_a, 2.0) + pow(lado_b, 2.0));

    printf("\nComprimento da hipotenusa: %.2f\n", hipotenusa);

    return 0;
}