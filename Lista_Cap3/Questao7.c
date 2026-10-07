#include <stdio.h>

int main() {
    int i;

    /* Versão 1: Estrutura FOR */
    printf("--- Contagem com FOR ---\n");
    for (i = 0; i <= 100; i++) {
        printf("%d ", i);
    }
    printf("\n\n");

    /* Versão 2: Estrutura WHILE */
    printf("--- Contagem com WHILE ---\n");
    i = 0;
    while (i <= 100) {
        printf("%d ", i);
        i++;
    }
    printf("\n\n");

    /* Versão 3: Estrutura DO-WHILE */
    printf("--- Contagem com DO-WHILE ---\n");
    i = 0;
    do {
        printf("%d ", i);
        i++;
    } while (i <= 100);
    printf("\n\n");

    return 0;
}

/*
 * ==============================================================================
 * RESPOSTA:
 * 
 * A estrutura mais adequada para este caso é o laço FOR.
 * 
 * Motivo:
 * Trata-se de uma repetição com número determinado e conhecido de iterações 
 * (sabemos previamente que executará exatamente de 0 a 100). O laço 'for' 
 * permite concentrar a inicialização, a condição de parada e o incremento 
 * em uma única linha no cabeçalho, tornando o código mais limpo, legível e 
 * prevenindo erros comuns (como esquecer de atualizar o contador).
 * ==============================================================================
 */