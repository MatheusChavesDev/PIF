#include <stdio.h>

int main() {
    int opcao;
    float salario, novo_salario, aumento, desconto, salario_liquido;

    do {
        printf("\n=========================================\n");
        printf("    SISTEMA DE FOLHA DE PAGAMENTO        \n");
        printf("=========================================\n");
        printf("1. Reajuste Salarial\n");
        printf("2. Retenção de Imposto de Renda (IR)\n");
        printf("3. Encerrar Programa\n");
        printf("-----------------------------------------\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                printf("\n--- REAJUSTE SALARIAL ---\n");
                do {
                    printf("Informe o salário atual (R$): ");
                    scanf("%f", &salario);
                    if (salario <= 0.0f) {
                        printf("Erro: Informe um salário válido e positivo.\n");
                    }
                } while (salario <= 0.0f);

                /* Regra de Reajuste: 15% até R$ 2.000,00 e 10% para salários superiores */
                if (salario <= 2000.00f) {
                    aumento = salario * 0.15f;
                } else {
                    aumento = salario * 0.10f;
                }
                novo_salario = salario + aumento;

                printf("Aumento concedido : R$ %.2f\n", aumento);
                printf("Novo salário      : R$ %.2f\n", novo_salario);
                break;

            case 2:
                printf("\n--- RETENÇÃO DE IMPOSTO DE RENDA ---\n");
                do {
                    printf("Informe o salário bruto (R$): ");
                    scanf("%f", &salario);
                    if (salario <= 0.0f) {
                        printf("Erro: Informe um salário válido e positivo.\n");
                    }
                } while (salario <= 0.0f);

                /* Regra de IR: 8% até R$ 3.000,00 e 15% para salários superiores */
                if (salario <= 3000.00f) {
                    desconto = salario * 0.08f;
                } else {
                    desconto = salario * 0.15f;
                }
                salario_liquido = salario - desconto;

                printf("Valor retido de IR: R$ %.2f\n", desconto);
                printf("Salário líquido   : R$ %.2f\n", salario_liquido);
                break;

            case 3:
                printf("\nEncerrando o programa... Até logo!\n");
                break;

            default:
                printf("\nOpção inválida! Por favor, selecione 1, 2 ou 3.\n");
                break;
        }

    } while (opcao != 3);

    return 0;
}