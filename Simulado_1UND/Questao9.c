/*Resto da Divisão (`%`) e Decomposição do Tempo — Desenvolva um programa em C que receba uma quantidade inteira de segundos informada pelo usuário. 
O programa deve calcular e exibir o tempo equivalente decomposto em Horas, Minutos e Segundos restantes 
(Exemplo: 3665 segundos correspondem a 1 hora, 1 minuto e 5 segundos).*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    system("cls");
    int segs;

    printf("Digite quantos segundos:\n ");
    scanf("%d", &segs);

    int hora = segs / 3600;
    int min = (segs % 3600) / 60;
    int segsR = segs % 60;


    printf("%d segundos correspondem a %d hora(s), %d minuto(s) e %d segundos restantes.\n\n", segs, hora, min, segsR);


    system("PAUSE");
    return 0;
}