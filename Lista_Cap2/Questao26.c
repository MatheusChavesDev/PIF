#include <stdio.h>

int main() {
    double comprimento, largura, preco_metro;

    printf("Digite o comprimento do terreno (em metros): ");
    scanf("%lf", &comprimento);

    printf("Digite a largura do terreno (em metros): ");
    scanf("%lf", &largura);

    printf("Digite o preco unitário por metro de arame (R$): ");
    scanf("%lf", &preco_metro);

    /* Calculo do perimetro do terreno retangular: 2 * (comprimento + largura) */
    double perimetro = 2.0 * (comprimento + largura);

    /* Com 3 fios de arame esticados, a metragem total e 3 vezes o perimetro */
    double total_arame = perimetro * 3.0;

    /* Calculo do custo total da compra */
    double custo_total = total_arame * preco_metro;

    printf("\n--- Resumo do Cercamento ---\n");
    printf("Perímetro do terreno: %.2f m\n", perimetro);
    printf("Total de arame a comprar (3 fios): %.2f m\n", total_arame);
    printf("Custo total do cercamento: R$ %.2f\n", custo_total);

    return 0;
}