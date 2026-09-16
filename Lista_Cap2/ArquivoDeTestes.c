#include <stdio.h>

int main() {
    char caractere;

    printf("Digite um caractere: ");
    
    // O espaco antes do %c instrui o scanf a ignorar \n, \t ou espacos pendentes
    if (scanf(" %c", &caractere) == 1) {
        printf("Caractere lido com sucesso: '%c'\n", caractere);
    }

    return 0;
}