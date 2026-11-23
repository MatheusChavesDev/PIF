#include <stdio.h>

float calculaSubtotal(float preco, int quantidade);
float aplicaDesconto(float valor, int opcaoPagamento);
float calculaTroco(float total, float pago);

int main() {
    float preco, pago, subtotal, total;
    int quantidade, opcao;

    printf("Digite o preco do produto: ");
    scanf("%f", &preco);
    printf("Digite a quantidade: ");
    scanf("%d", &quantidade);
    printf("Forma de pagamento (1 - A vista | 2 - Cartao): ");
    scanf("%d", &opcao);

    subtotal = calculaSubtotal(preco, quantidade);
    total = aplicaDesconto(subtotal, opcao);
    printf("Subtotal: R$ %.2f\n", subtotal);
    printf("Total a pagar: R$ %.2f\n", total);

    printf("Digite o valor pago: ");
    scanf("%f", &pago);

    if (pago < total) {
        printf("Erro: Valor insuficiente.\n");
    } else {
        printf("Troco: R$ %.2f\n", calculaTroco(total, pago));
    }
    return 0;
}

float calculaSubtotal(float preco, int quantidade) {
    return preco * quantidade;
}

float aplicaDesconto(float valor, int opcaoPagamento) {
    if (opcaoPagamento == 1) {
        return valor * 0.9;
    }
    return valor;
}

float calculaTroco(float total, float pago) {
    return pago - total;
}
