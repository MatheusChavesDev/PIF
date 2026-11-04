#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>

int main () {
    system("cls");
    int ganhou = 0, perde = 0, resp;
    char ch;
    printf("\n\n\t\t\tJOGO CARA OU COROA\n\n");

    do {printf("Informe um número inteiro positivo, ímpar e maior que 1: ");
        scanf("%d", &resp);
        if (resp % 2 == 0) {
            printf("\n\n\t\t\tNúmero inválido, digite novamente!\n\n");
        }
    } while (resp % 2 == 0);
    
    return 0;
}