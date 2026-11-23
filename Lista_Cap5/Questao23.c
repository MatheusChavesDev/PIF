#include <stdio.h>
#include <windows.h>

#define DOBRO(x) x*2

int dobro(int x);

int main() {
    SetConsoleOutputCP(CP_UTF8);
    printf("Macro DOBRO(2+3): %d\n", DOBRO(2+3));
    printf("Função dobro(2+3): %d\n", dobro(2+3));

    /*
     A macro deu 8 e a função deu 10.
     A macro só troca o texto: DOBRO(2+3) vira 2+3*2, e como a multiplicação
     vem antes da soma, a conta fica 2 + 6 = 8.
     A função recebe o valor já calculado: 2+3 vira 5 antes da chamada,
     então ela devolve 5 * 2 = 10.
    */

    // Corrigindo a macro com parênteses de proteção
    #undef DOBRO
    #define DOBRO(x) ((x)*2)

    printf("Macro corrigida DOBRO(2+3): %d\n", DOBRO(2+3));
    return 0;
}

int dobro(int x) {
    return x * 2;
}
