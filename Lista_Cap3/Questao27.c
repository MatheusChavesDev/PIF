#include <stdio.h>

int main() {
    int valor, valor_restante;
    int c100 = 0, c50 = 0, c20 = 0, c10 = 0, c5 = 0, c2 = 0;

    printf("Informe o valor do saque em R$: ");
    scanf("%d", &valor);

    /* Validação do valor digitado */
    if (valor <= 0) {
        printf("Erro: Por favor, informe um valor inteiro positivo (maior que zero).\n");
        return 1;
    }

    /* Validação para valores impossíveis de compor com cédulas de 100, 50, 20, 10, 5 e 2 */
    if (valor == 1 || valor == 3) {
        printf("Erro: Nao e possivel sacar R$ %d com as cédulas disponiveis (100, 50, 20, 10, 5, 2).\n", valor);
        return 1;
    }

    valor_restante = valor;

    /* 
     * Ajuste de paridade: se o valor for ímpar, extrai-se 1 cédula de R$ 5
     * para tornar o valor restante par, garantindo a decomposição exata com as cédulas pares.
     */
    if (valor_restante % 2 != 0) {
        c5 = 1;
        valor_restante -= 5;
    }

    /* Subtrações sucessivas usando laços while em vez de operadores de divisão */
    while (valor_restante >= 100) {
        c100++;
        valor_restante -= 100;
    }

    while (valor_restante >= 50) {
        c50++;
        valor_restante -= 50;
    }

    while (valor_restante >= 20) {
        c20++;
        valor_restante -= 20;
    }

    while (valor_restante >= 10) {
        c10++;
        valor_restante -= 10;
    }

    while (valor_restante >= 2) {
        c2++;
        valor_restante -= 2;
    }

    /* Exibição dos resultados */
    printf("\n--- cédulas Entregues para R$ %d ---\n", valor);
    if (c100 > 0) printf("cédulas de R$ 100: %d\n", c100);
    if (c50 > 0)  printf("cédulas de R$ 50 : %d\n", c50);
    if (c20 > 0)  printf("cédulas de R$ 20 : %d\n", c20);
    if (c10 > 0)  printf("cédulas de R$ 10 : %d\n", c10);
    if (c5 > 0)   printf("cédulas de R$ 5  : %d\n", c5);
    if (c2 > 0)   printf("cédulas de R$ 2  : %d\n", c2);

    return 0;
}