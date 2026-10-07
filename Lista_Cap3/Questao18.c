#include <stdio.h>

int main() {
    int numero, numero_original, ultimo_digito;
    int numero_invertido = 0;

    printf("Informe um numero inteiro positivo: ");
    scanf("%d", &numero);

    /* Validacao para garantir um número estritamente positivo */
    if (numero <= 0) {
        printf("Erro: Por favor, informe um numero inteiro positivo (maior que zero).\n");
        return 1;
    }

    numero_original = numero;

    /* Laço de inversão dos dígitos */
    while (numero > 0) {
        ultimo_digito = numero % 10;                        /* Extrai o último dígito */
        numero_invertido = (numero_invertido * 10) + ultimo_digito; /* Desloca e adiciona */
        numero /= 10;                                      /* Remove o último dígito */
    }

    printf("\nNumero original: %d\n", numero_original);
    printf("Numero invertido: %d\n", numero_invertido);

    return 0;
}