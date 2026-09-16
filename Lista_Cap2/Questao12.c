#include <stdio.h>

int main() {
    int numero;

    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    
    int antecessor = numero;
    int sucessor = numero;

    --antecessor;
    ++sucessor;

    printf("Antecessor: %d\n", antecessor);
    printf("Sucessor: %d\n", sucessor);

    return 0;
}