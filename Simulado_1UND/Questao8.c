/*Geometria do Triângulo e Fórmula de Heron — Escreva um programa em C que leia os comprimentos dos três lados (a, b, c) de um triângulo qualquer. 
Sabendo que o semiperímetro p é dado por (a + b + c) / 2.0, calcule a área do triângulo utilizando a **Fórmula de Heron**: 
Area = sqrt(p * (p - a) * (p - b) * (p - c)). Utilize a função sqrt() da biblioteca `<math.h>`.*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main () {
    system("cls");

    float a, b, c;

    printf("Lado a:\n ");
    scanf("%f", &a);
    printf("Lado b:\n ");
    scanf("%f", &b);
    printf("Lado c:\n ");
    scanf("%f", &c);

    float p = (a + b +c) / 2.0;
    float area = sqrt(p * (p -a) * (p - b) * (p - c));

    printf("Área do triângulo: %f", area);


    system("PAUSE");
    return 0;
}