#include <stdio.h>

int main() {
    float a, b, c;
    printf("Digite os tres lados do triangulo (A, B e C):\n");
    scanf("%f %f %f", &a, &b, &c);
    
    if (a < b + c && b < a + c && c < a + b) { 
        if (a == b && b == c) printf("Triangulo Equilatero\n"); 
        else if (a == b || a == c || b == c) printf("Triangulo Isosceles\n"); 
        else printf("Triangulo Escaleno\n"); 
    } else {
        printf("Erro: Os lados fornecidos não formam um triângulo!\n"); 
    }
    return 0;
}