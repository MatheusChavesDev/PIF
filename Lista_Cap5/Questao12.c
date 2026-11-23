#include <stdio.h>

void exibeMenu(void);

int main() {
    int opcao;
    exibeMenu();
    printf("Digite a opcao desejada: ");
    scanf("%d", &opcao);

    switch (opcao) {
        case 1: printf("Opcao Cadastrar selecionada.\n"); break;
        case 2: printf("Opcao Listar selecionada.\n"); break;
        case 3: printf("Opcao Remover selecionada.\n"); break;
        case 0: printf("Saindo do programa...\n"); break;
        default: printf("Erro: Opcao invalida!\n");
    }
    return 0;
}

void exibeMenu(void) {
    printf("--- MENU ---\n");
    printf("1 - Cadastrar\n");
    printf("2 - Listar\n");
    printf("3 - Remover\n");
    printf("0 - Sair\n");
}
