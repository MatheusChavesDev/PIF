#include <stdio.h>

void contagem(int n);
void contagemCrescente(int n);

int main() {
    int n;
    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Erro: O numero deve ser positivo.\n");
    } else {
        contagem(n);
        printf("\nContagem de 1 ate %d:\n", n);
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
 Na contagem() o printf vem ANTES da chamada recursiva: o numero e impresso
 na fase de empilhamento, entao sai n, n-1, ..., 1.
 Aqui o printf vem DEPOIS da chamada recursiva: a funcao primeiro desce ate
 o caso base e so imprime na fase de desempilhamento, entao sai 1, 2, ..., n.
*/
void contagemCrescente(int n) {
    if (n == 0) {
        return;
    }
    contagemCrescente(n - 1);
    printf("%d\n", n);
}
