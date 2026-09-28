/*Geração de Padrões Visuais com Laços Aninhados: Triângulo de Floyd — Escreva um programa em C que leia um número inteiro positivo N e imprima N linhas
 do **Triângulo de Floyd** utilizando laços aninhados. Por exemplo, para N = 5, a saída no console deve ser exatamente: 
1 
2 3
4 5 6 
7 8 9 10
11 12 13 14 15*/

#include <stdio.h>
#include <stdlib.h>

int main () {
    system("cls");
    int n;
    int i, j;
    int cont = 1;

    printf("Digite um número inteiro positivo N: \n\n");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        for (j = 1; j <= i; j++) {
            printf("%d ", cont);
            cont++;
        }
        printf("\n");
    }

    system("PAUSE");
    return 0;
}