#include <stdio.h>

int main() {
    double valor;
    double soma = 0.0;
    int quantidade = 0;

    printf("Digite valores reais positivos (ou um valor negativo para sair):\n");

    while (1) {
        printf("Informe um valor: ");
        scanf("%lf", &valor);

        /* Condição de parada: valor negativo (sentinela) */
        if (valor < 0) {
            break;
        }

        soma += valor;
        quantidade++;
    }

    printf("\n--- RELATORIO FINAL ---\n");
    printf("Quantidade de valores validos: %d\n", quantidade);
    printf("Soma total: %.2lf\n", soma);

    /* Tratamento para evitar divisão por zero caso nenhum valor válido seja inserido */
    if (quantidade > 0) {
        printf("Media aritmetica: %.2lf\n", soma / quantidade);
    } else {
        printf("Media aritmetica: Nao e possivel calcular (nenhum valor valido inserido).\n");
    }

    return 0;
}