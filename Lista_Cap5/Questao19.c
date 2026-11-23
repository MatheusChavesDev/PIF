#include <stdio.h>
#include <windows.h>

void contagem(int n);
void contagemCrescente(int n);

int main() {
    SetConsoleOutputCP(CP_UTF8);
    int n;
    printf("Digite um número inteiro positivo: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Erro: O número deve ser positivo.\n");
    } else {
        contagem(n);
        printf("\nContagem de 1 até %d:\n", n);
        contagemCrescente(n);
    }
    return 0;
}

void contagem(int n) {
    if (n == 0) {
        printf("Fogo!\n");
        return;
    }
    printf("%d\n", n);
    contagem(n - 1);
}

/*
 Na contagem() o printf vem ANTES da chamada recursiva: o número é impresso
 na fase de empilhamento, então sai n, n-1, ..., 1.
 Aqui o printf vem DEPOIS da chamada recursiva: a função primeiro desce até
 o caso base e só imprime na fase de desempilhamento, então sai 1, 2, ..., n.
*/
void contagemCrescente(int n) {
    if (n == 0) {
        return;
    }
    contagemCrescente(n - 1);
    printf("%d\n", n);
}
