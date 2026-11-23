#include <stdio.h>
#include <windows.h>

int ehBissexto(int ano);

int main() {
    SetConsoleOutputCP(CP_UTF8);
    int ano;
    printf("Digite um ano: ");
    scanf("%d", &ano);

    if (ehBissexto(ano)) {
        printf("%d é um ano bissexto.\n", ano);
    } else {
        printf("%d não é um ano bissexto.\n", ano);
    }
    return 0;
}

int ehBissexto(int ano) {
    if (ano % 400 == 0 || (ano % 4 == 0 && ano % 100 != 0)) {
        return 1;
    }
    return 0;
}
