#include <stdio.h>
#include <stdlib.h>

int main() {
    float a, b, c, d;
    float media;

    printf("Digite a primeira nota: ");
    scanf("%f", &a);
    
    printf("Digite a segunda nota: ");
    scanf("%f", &b);

    printf("Digite a terceira nota: ");
    scanf("%f", &c);

    printf("Digite a quarta nota: ");
    scanf("%f", &d);

    media = (a + b + c + d) / 4.00;
    printf("A média das notas é: %.2f\n", media);

    system("PAUSE");
    return 0;
}