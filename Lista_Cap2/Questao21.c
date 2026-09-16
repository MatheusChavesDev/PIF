#include <stdio.h>

int main() {
    char caractere;

    printf("Digite um caractere: ");
    /* O espaco antes de %c ignora eventuais caracteres de nova linha ou espacos anteriores no buffer */
    scanf(" %c", &caractere);

    /*
     * EXPLICAÇÃO SOBRE O VALOR EXIBIDO:
     * Na linguagem C, o tipo 'char' armazena internamente um numero inteiro de 1 byte (8 bits).
     * O valor impresso com %d representa o codigo decimal correspondente ao caractere 
     * na tabela ASCII (American Standard Code for Information Interchange).
     * Por exemplo: o caractere 'A' e representado pelo inteiro 65, e o caractere '0' pelo inteiro 48.
     */
    printf("\nCaractere digitado: '%c'\n", caractere);
    printf("Codigo decimal na Tabela ASCII: %d\n", caractere);

    return 0;
}