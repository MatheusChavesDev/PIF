#include <stdio.h>

int main() {
    int A, B, i;

    printf("Informe o valor de A: ");
    scanf("%d", &A);

    printf("Informe o valor de B: ");
    scanf("%d", &B);

    printf("\nIntervalo entre %d e %d:\n", A, B);

    /* Se A for menor ou igual a B, imprime em ordem crescente */
    if (A <= B) {
        for (i = A; i <= B; i++) {
            printf("%d ", i);
        }
    } 
    /* Caso contrario (A maior que B), imprime em ordem decrescente */
    else {
        for (i = A; i >= B; i--) {
            printf("%d ", i);
        }
    }

    printf("\n");

    return 0;
}