#include <stdio.h>

int main() {
    const double TAXA_HORA_NORMAL = 10.00;
    const double TAXA_HORA_EXTRA = 15.00;
    const double LIMITE_ISENCAO = 12000.00;
    const double ALIQUOTA_IMPOSTO = 0.10;

    double horas_normais, horas_extras;

    printf("Digite o total de horas normais trabalhadas no ano: ");
    scanf("%lf", &horas_normais);

    printf("Digite o total de horas extras trabalhadas no ano: ");
    scanf("%lf", &horas_extras);

    /* Calculo do salario bruto anual */
    double salario_bruto = (horas_normais * TAXA_HORA_NORMAL) + (horas_extras * TAXA_HORA_EXTRA);

    /* Calculo do valor excedente utilizando o operador condicional (ternario) */
    double valor_excedente = (salario_bruto > LIMITE_ISENCAO) ? (salario_bruto - LIMITE_ISENCAO) : 0.0;

    /* Imposto retido de 10% estritamente sobre a quantia que ultrapassar a isencao */
    double imposto = valor_excedente * ALIQUOTA_IMPOSTO;

    printf("\n--- Demonstrativo Anual ---\n");
    printf("a) Salário anual bruto: R$ %.2f\n", salario_bruto);
    printf("b) Imposto retido a pagar: R$ %.2f\n", imposto);

    return 0;
}