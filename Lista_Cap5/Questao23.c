#include <stdio.h>

#define DOBRO(x) x*2

int dobro(int x);

int main() {
    printf("Macro DOBRO(2+3): %d\n", DOBRO(2+3));
    printf("Funcao dobro(2+3): %d\n", dobro(2+3));

    /*
     A macro deu 8 e a funcao deu 10.
     A macro so troca o texto: DOBRO(2+3) vira 2+3*2, e como a multiplicacao
     vem antes da soma, a conta fica 2 + 6 = 8.
     A funcao recebe o valor ja calculado: 2+3 vira 5 antes da chamada,
     entao ela devolve 5 * 2 = 10.
    */

    // Corrigindo a macro com parenteses de protecao
    #undef DOBRO
    #define DOBRO(x) ((x)*2)

    printf("Macro corrigida DOBRO(2+3): %d\n", DOBRO(2+3));
    return 0;
}

int dobro(int x) {
    return x * 2;
}
