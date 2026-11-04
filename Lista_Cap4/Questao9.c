#include <stdio.h>

int main() {
    float lab, sem, exame, media;
    printf("Digite a nota do Trabalho de Laboratório: ");
    scanf("%f", &lab);
    printf("Digite a nota da Avaliação Semestral: ");
    scanf("%f", &sem);
    printf("Digite a nota do Exame Final: ");
    scanf("%f", &exame);
    
    media = (lab * 2 + sem * 3 + exame * 5) / 10.0; 
    
    if (media >= 0.0 && media <= 2.9) {
        printf("Reprovado\n"); 
    } else if (media >= 3.0 && media <= 4.9) {
        printf("Em Recuperação\n"); 
    } else if (media >= 5.0) {
        printf("Aprovado\n"); 
    }
    return 0;
}