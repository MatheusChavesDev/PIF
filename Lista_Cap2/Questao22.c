#include <stdio.h>

int main() {
    char maiuscula;

    printf("Digite uma letra maiúscula: ");
    scanf(" %c", &maiuscula);

    
    char minuscula = maiuscula + ('a' - 'A');

    printf("\nLetra maiúscula: '%c'\n", maiuscula);
    printf("Letra minúscula: '%c'\n", minuscula);

    return 0;
}