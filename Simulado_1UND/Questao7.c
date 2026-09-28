/*Cálculos Geométricos e Constantes com `<math.h>` — Desenvolva um programa em C que solicite ao usuário o valor do raio R de uma esfera. 
Defina a constante PI como 3.14159265 e calcule: a) A área da superfície da esfera (A = 4 * PI * R²); b) O volume da esfera (V = (4.0/3.0) * PI * R³). 
Utilize a função pow() da biblioteca `<math.h>` e exiba os resultados formatados com 3 casas decimais. Atenção para a divisão real de 4.0 por 3.0!*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    system("cls");
    float r, a, v;
    const float PI = 3.14159265;

    printf("Digite o valor do raio da esfera\n: ");
    scanf("%f", &r);

    a = 4 * PI * pow(r, 2);
    v = (4.0 / 3.0) * PI * pow(r, 3);
    
    printf("Área da esfera: %.3f\n\nVolume da esfera: %.3f\n\n", a, v);


    system("PAUSE");
    return 0;
}