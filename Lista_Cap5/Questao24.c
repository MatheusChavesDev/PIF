#include <stdio.h>
#include <windows.h>

// Comente a linha abaixo para compilar sem o modo de depuração
#define DEBUG

int somaAteN(int n);

int main() {
    SetConsoleOutputCP(CP_UTF8);
    int n;
    printf("Digite um número inteiro positivo: ");
    scanf("%d", &n);

    printf("Soma de 1 até %d: %d\n", n, somaAteN(n));
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
   Soma de 1 até 4: 10

 SEM #define DEBUG:
   Soma de 1 até 4: 10

 Sem o DEBUG, o pré-processador remove o printf de dentro do laço antes da
 compilação, então o programa mostra só o resultado final. O valor da soma
 é o mesmo nas duas versões.
*/
