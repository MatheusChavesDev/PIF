#include <stdio.h>
#include <math.h>

int main() {
    float num;
    printf("Digite um número real: ");
    scanf("%f", &num);
    if (num >= 0) {
        printf("Raiz: %.2f\n", sqrt(num)); 
    } else {
        printf("Quadrado: %.2f\n", num * num); 
    }
    return 0;
}