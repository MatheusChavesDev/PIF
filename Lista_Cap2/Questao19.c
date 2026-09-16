#include <stdio.h>

int main() {
    int dias;
    const double TAXA_DIARIA = 30.00;
    const double ALIQUOTA_IR = 0.08; 

    printf("Digite o número de dias trabalhados: ");
    scanf("%d", &dias);

    double quantia_bruta = dias * TAXA_DIARIA;
    double imposto_retido = quantia_bruta * ALIQUOTA_IR;
    double valor_liquido = quantia_bruta - imposto_retido;

    printf("\n--- Demonstrativo de Pagamento ---\n");
    printf("Quantia bruta: R$ %.2f\n", quantia_bruta);
    printf("Imposto retido na fonte (8%%): R$ %.2f\n", imposto_retido);
    printf("Valor líquido a pagar: R$ %.2f\n", valor_liquido);

    return 0;
}