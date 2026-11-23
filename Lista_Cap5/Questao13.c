#include <stdio.h>
#include <windows.h>

float soma(float a, float b);
float subtrai(float a, float b);
float multiplica(float a, float b);
float divide(float a, float b);

int main() {
    SetConsoleOutputCP(CP_UTF8);
    int opcao;
    float n1, n2;

    printf("--- CALCULADORA ---\n");
    printf("1 - Soma\n2 - Subtração\n3 - Multiplicação\n4 - Divisão\n");
    printf("Escolha a operação: ");
    scanf("%d", &opcao);

    printf("Digite o primeiro operando: ");
    scanf("%f", &n1);
    printf("Digite o segundo operando: ");
    scanf("%f", &n2);

    switch (opcao) {
        case 1: printf("Resultado: %.2f\n", soma(n1, n2)); break;
        case 2: printf("Resultado: %.2f\n", subtrai(n1, n2)); break;
        case 3: printf("Resultado: %.2f\n", multiplica(n1, n2)); break;
        case 4:
            if (n2 != 0) {
                printf("Resultado: %.2f\n", divide(n1, n2));
            } else {
                printf("Erro: Divisão por zero!\n");
            }
            break;
        default: printf("Erro: Opção inválida!\n");
    }
    return 0;
}

float soma(float a, float b) {
    return a + b;
}

float subtrai(float a, float b) {
    return a - b;
}

float multiplica(float a, float b) {
    return a * b;
}

float divide(float a, float b) {
    return a / b;
}
