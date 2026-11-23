#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

float mediaPonderada(float n1, float n2, float n3);
void exibeSituacao(float media);

int main() {
    system("cls");
    setlocale(LC_ALL, ".UTF8");

    float n1, n2, n3, media;
    printf("Digite a primeira nota (peso 2): ");
    scanf("%f", &n1);
    printf("Digite a segunda nota (peso 3): ");
    scanf("%f", &n2);
    printf("Digite a terceira nota (peso 5): ");
    scanf("%f", &n3);

    media = mediaPonderada(n1, n2, n3);
    printf("Média: %.2f\n", media);
    exibeSituacao(media);
    return 0;
}

float mediaPonderada(float n1, float n2, float n3) {
    return (n1 * 2 + n2 * 3 + n3 * 5) / 10.0;
}

void exibeSituacao(float media) {
    if (media >= 5.0) {
        printf("Aprovado\n");
    } else if (media >= 3.0) {
        printf("Em Recuperacao\n");
    } else {
        printf("Reprovado\n");
    }
}
