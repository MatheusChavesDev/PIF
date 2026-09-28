/*Autenticação de Senha com Limite Finito de Tentativas — Desenvolva um sistema de autenticação que defina uma senha numérica secreta (ex: 2026). 
O programa deve permitir que o usuário tente digitar a senha no máximo 3 vezes usando um laço `while` ou `for`. Se acertar, exiba 'Acesso Concedido!' 
e encerre; se errar as 3 vezes, exiba 'Conta Bloqueada por Segurança!'.*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    const int SENHA_SECRETA = 2026;
    int tentativa;
    int tentativas_feitas = 0;
    int acertou = 0;

    system("cls");

    // O laço executa enquanto houver menos de 3 tentativas E o usuário não tiver acertado
    while (tentativas_feitas < 3 && !acertou) {
        tentativas_feitas++;
        printf("Digite a senha (%d/3): ", tentativas_feitas);
        scanf("%d", &tentativa);

        // Atribui 1 se for igual, ou 0 se for diferente
        acertou = (tentativa == SENHA_SECRETA);

        // Exibe o aviso se errou E se ainda restam tentativas (usando avaliação de curto-circuito)
        (!acertou && tentativas_feitas < 3) && printf("Senha incorreta. Tente novamente!\n\n");
    }

    // Exibe o resultado final usando o operador ternário (?:)
    acertou 
        ? printf("\nAcesso Concedido!\n\n") 
        : printf("\nConta Bloqueada por Seguranca!\n\n");

    system("PAUSE");
    return 0;
}