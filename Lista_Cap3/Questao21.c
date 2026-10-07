#include <stdio.h>
#include <stdlib.h>

int main() {
    char letra_secreta, palpite;
    int tentativas = 0;
    unsigned int semente;

    /* Solicita uma semente ao usuario para inicializar o gerador sem <time.h> */
    printf("Digite um numero inteiro para gerar uma nova partida (semente): ");
    scanf("%u", &semente);
    srand(semente);

    /* Sorteia uma letra minúscula entre 'a' e 'z' */
    letra_secreta = rand() % 26 + 'a';

    printf("\n=== JOGO DA ADIVINHACAO DE LETRAS ===\n");
    printf("Tente adivinhar a letra secreta (de 'a' a 'z')!\n\n");

    do {
        printf("Digite seu palpite: ");
        /* O espaço antes de %c ignora o caractere de nova linha '\n' no buffer */
        scanf(" %c", &palpite);
        tentativas++;

        if (palpite < letra_secreta) {
            printf("Dica: A letra secreta vem DEPOIS de '%c' no alfabeto.\n\n", palpite);
        } else if (palpite > letra_secreta) {
            printf("Dica: A letra secreta vem ANTES de '%c' no alfabeto.\n\n", palpite);
        } else {
            printf("\nParabens! Voce acertou a letra secreta '%c'!\n", letra_secreta);
            printf("Total de tentativas utilizadas: %d\n", tentativas);
        }
    } while (palpite != letra_secreta);

    return 0;
}