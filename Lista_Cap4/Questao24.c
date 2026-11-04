#include <stdio.h>

int main() {
    int a, b, c;
    printf("Digite os três ângulos internos do triângulo: ");
    scanf("%d %d %d", &a, &b, &c);
    
    if (a + b + c == 180) { 
        if (a == 90 || b == 90 || c == 90) printf("Retângulo\n"); 
        else if (a > 90 || b > 90 || c > 90) printf("Obtusângulo\n"); 
        else printf("Acutângulo\n"); 
    } else {
        printf("Soma diferente de 180 graus. Triângulo inválido.\n");
    }
    return 0;
}