#include <stdio.h>

int main() {
    double salario_base;

    printf("Digite o salário-base do funcionário: R$ ");
    scanf("%lf", &salario_base);

    /* Calculo da gratificacao (5%) e do imposto (7%) */
    double gratificacao = salario_base * 0.05;
    double imposto = salario_base * 0.07;

    /* Calculo do salario liquido final */
    double salario_liquido = salario_base + gratificacao - imposto;

    printf("\n--- Demonstrativo Salarial ---\n");
    printf("Salário-base: R$ %.2f\n", salario_base);
    printf("Gratificação (+5%%): R$ %.2f\n", gratificacao);
    printf("Imposto (-7%%): R$ %.2f\n", imposto);
    printf("Salário líquido a receber: R$ %.2f\n", salario_liquido);

/* A gratificação de $5\%$ e o imposto de $7\%$ dependem ambos do valor do salario_base.
O operador de multiplicação (*) calcula as frações decimais correspondentes ($0.05$ e $0.07$).
O operador de soma (+) adiciona a gratificação ao montante, e o operador de subtração (-) reduz o imposto retido.*/

    return 0;
}