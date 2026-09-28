Questão 06. Escopo de Bloco e Comandos de Desvio (break e continue) (Cap. 3)

Analise o programa abaixo que calcula a soma acumulada de quadrados dentro de um laço for contendo um comando de desvio e controle de escopo interno:

#include <stdio.h> 
#include <stdlib.h> 
int main() { 
    int i; 

    for (i = 1; i <= 10; i++) { 

        if (i == 5) continue; 
        if (i == 8) break; 
        int soma = 0; 
        soma += i * i; 
    } 

    printf("Soma final = %d\n", soma); 
    system("PAUSE");
    return 0;
}

a) Por que o compilador emitirá um erro de compilação na instrução printf final?

Porque o valor da variável soma está atribuído somente dentro do laço for. Dessa forma, quando i == 8, o laço será encerrado pelo comando "break" e partirá para a próxima instrução, o printf. Funcionaria corretamente se "soma" também estivesse fora do for.

b) Quais iterações do laço serão efetivamente executadas e qual o impacto dos comandos continue e break no fluxo?

As iterações 1, 2, 3, 4, 6 e 7 serão efetivamente executadas. A iteração 5 vai ser interrompida pelo "continue", e não será impressa. quando chegar na iteração 8, o "break" vai encerrar o laço for e o compilador vai ler o próximo comando do fluxo.

c) Reescreva o código corrigindo o escopo de 'soma' e apresente o resultado que será impresso no console.

#include <stdio.h> 
#include <stdlib.h> 
int main() { 
    int i; 
    int soma = 0; 

    for (i = 1; i <= 10; i++) { 

        if (i == 5) continue; 
        if (i == 8) break; 
        soma += i * i;

    } 
    soma = soma; 
    printf("Soma final = %d\n", soma); 
    system("PAUSE");
    return 0;
}