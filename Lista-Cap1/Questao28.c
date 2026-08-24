#include <stdio.h>
#include <stdlib.h>

int main () {
    int valor1, valor2, valor3;

    printf("Digite o primeiro valor: ");
    scanf("%d", &valor1);
    printf("Digite o segundo valor: ");
    scanf("%d", &valor2);
    printf("Digite o terceiro valor: ");
    scanf("%d", &valor3);

    double media = (valor1 + valor2 + valor3) / 3;

    printf("A media dos valores digitados é: %.2f\n", media);

    system("PAUSE");
    return 0;
}