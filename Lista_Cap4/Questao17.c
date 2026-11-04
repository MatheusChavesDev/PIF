#include <stdio.h>

int main() {
    float valor_total, valor_final, comissao;
    int opcao;
    
    printf("Digite o valor total da compra: ");
    scanf("%f", &valor_total);
    printf("Opcoes de pagamento:\n1 - A Vista (10%% de desconto)\n2 - Parcelado em 3x sem juros\nEscolha: ");
    scanf("%d", &opcao);
    
    if (opcao == 1) {
        valor_final = valor_total * 0.90; 
        comissao = valor_final * 0.05; 
        printf("Valor final a pagar: R$ %.2f\nComissao do vendedor: R$ %.2f\n", valor_final, comissao);
    } else if (opcao == 2) {
        valor_final = valor_total / 3.0; 
        comissao = valor_total * 0.05; 
        printf("Valor de cada parcela (3x): R$ %.2f\nComissao do vendedor: R$ %.2f\n", valor_final, comissao);
    } else {
        printf("Opcao invalida.\n");
    }
    return 0;
}