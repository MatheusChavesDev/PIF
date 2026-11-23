#include <stdio.h>

// Comente a linha abaixo para compilar sem o modo de depuracao
#define DEBUG

int somaAteN(int n);

int main() {
    int n;
    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &n);

    printf("Soma de 1 ate %d: %d\n", n, somaAteN(n));
    return 0;
}

int somaAteN(int n) {
    int soma = 0, i;
    for (i = 1; i <= n; i++) {
        soma += i;
        #ifdef DEBUG
        printf("[DEBUG] i = %d, soma parcial = %d\n", i, soma);
        #endif
    }
    return soma;
}

/*
 Teste com n = 4:

 COM #define DEBUG:
   [DEBUG] i = 1, soma parcial = 1
   [DEBUG] i = 2, soma parcial = 3
   [DEBUG] i = 3, soma parcial = 6
   [DEBUG] i = 4, soma parcial = 10
   Soma de 1 ate 4: 10

 SEM #define DEBUG:
   Soma de 1 ate 4: 10

 Sem o DEBUG, o pre-processador remove o printf de dentro do laco antes da
 compilacao, entao o programa mostra so o resultado final. O valor da soma
 e o mesmo nas duas versoes.
*/
