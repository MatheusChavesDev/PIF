/*Validação de Entrada de Dados com Laço Garantido (`do-while`) — Escreva um programa em C que solicite ao usuário uma nota válida no intervalo fechado de 0.0 
a 10.0. Caso o usuário digite um valor inválido (como -2.5 ou 11.0), o programa deve exibir uma mensagem de erro e repetir a solicitação utilizando a estrutura
 `do-while`. O programa só deve encerrar quando uma nota válida for digitada.*/

 #include <stdio.h>
 #include <stdlib.h>

 int main() {
    system("cls");
    float nota;

    do {

        printf("Informe uma nota (0 a 10): \n");
        scanf("%f", &nota);

        (nota < 0.0 || nota > 10.0) && printf("\nNota inválida! Digite novamente.\n\n");

    } while (nota < 0.0 || nota > 10.0);

    printf("Nota válida registrada: %.2f\n\n", nota);

    system("PAUSE");
    return 0;
 }