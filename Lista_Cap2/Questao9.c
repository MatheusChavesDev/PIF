#include <stdio.h>

int main() {
    int num1, num2;

    printf("Digite o primeiro numero inteiro: ");
    scanf("%d", &num1);

    printf("Digite o segundo numero inteiro: ");
    scanf("%d", &num2);

    int soma = num1 + num2;
    int subtracao = num1 - num2;
    int multiplicacao = num1 * num2;

    /*
     * PREVENÇÃO DE DIVISÃO POR ZERO:
     * Matematicamente, a divisão por zero é uma operação indefinida. Programaticamente, 
     * tentar dividir por zero causa falha de execução (runtime error / Crash). 
     * Para evitar esse problema, deve-se validar previamente se o divisor é diferente 
     * de zero (ex: `if (num2 != 0)`) antes de efetuar a divisão.
     */
    double divisao = (double)num1 / num2;

    printf("\n--- Resultados ---\n");
    printf("Soma: %d\n", soma);
    printf("Subtração: %d\n", subtracao);
    printf("Multiplicação: %d\n", multiplicacao);
    printf("Divisão real: %.2f\n", divisao);

    return 0;
}