#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c, delta;
    
    do {
        printf("Digite o coeficiente a (deve ser diferente de 0): ");
        scanf("%f", &a);
    } while (a == 0); 
    
    printf("Digite o coeficiente b: ");
    scanf("%f", &b);
    printf("Digite o coeficiente c: ");
    scanf("%f", &c);
    
    delta = (b * b) - (4 * a * c); 
    
    if (delta < 0) {
        printf("A equação não possui raízes reais.\n"); 
    } else if (delta == 0) {
        printf("Raiz única x = %.2f\n", -b / (2 * a)); 
    } else {
        printf("x1 = %.2f, x2 = %.2f\n", (-b + sqrt(delta)) / (2 * a), (-b - sqrt(delta)) / (2 * a)); 
    }
    return 0;
}