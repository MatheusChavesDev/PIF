#include <stdio.h>

int main() {
    const int SENHA_CORRETA = 2026;
    const int MAX_TENTATIVAS = 3;
    int senha_digitada;
    int tentativas = 0;
    int acesso_concedido = 0;

    while (tentativas < MAX_TENTATIVAS) {
        tentativas++;
        printf("Digite a senha numerica (%d/%d): ", tentativas, MAX_TENTATIVAS);
        scanf("%d", &senha_digitada);

        if (senha_digitada == SENHA_CORRETA) {
            acesso_concedido = 1;
            break; /* Interrompe o laço imediatamente ao acertar */
        } else if (tentativas < MAX_TENTATIVAS) {
            printf("Senha incorreta! Voce ainda tem %d tentativa(s).\n\n", MAX_TENTATIVAS - tentativas);
        }
    }

    printf("\n------------------------------------\n");
    if (acesso_concedido) {
        printf("Acesso Concedido!\n");
        printf("Tentativas utilizadas: %d\n", tentativas);
    } else {
        printf("Conta Bloqueada por Seguranca!\n");
    }
    printf("------------------------------------\n");

    return 0;
}