#include <stdio.h>

int main() {
    double n1, n2, n3, n4;

    printf("Digite as quatro notas do aluno (separadas por espaco): ");
    scanf("%lf %lf %lf %lf", &n1, &n2, &n3, &n4);

   
    double media_simples = (n1 + n2 + n3 + n4) / 4.0;

   
    double media_ponderada = (n1 * 1.0 + n2 * 1.0 + n3 * 2.0 + n4 * 2.0) / 6.0;

    printf("\n--- Resultados ---\n");
    printf("a) Média aritmética simples: %.2f\n", media_simples);
    printf("b) Média ponderada: %.2f\n", media_ponderada);

    return 0;
}