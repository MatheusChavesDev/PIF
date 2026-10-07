Laço Sem Corpo e Incremento Pós-fixado — Analise o trecho de código abaixo que utiliza um laço de repetição com corpo vazio:

a) Qual é o valor final da variável x que será impresso pela instrução printf?

R: O valor final impresso pela instrução printf será 6.

b) Explique passo a passo a sequência de incrementos e comparações lógicas que ocorrem durante a execução do teste 'x++ < 5'.

R: No operador pós-fixado (x++), o programa utiliza o valor atual de x para realizar a comparação e, logo em seguida, incrementa x em 1, independentemente do resultado lógico ter sido verdadeiro ou falso. 
1.ª avaliação: Usa x = 0. Testa 0 < 5 (Verdadeiro). x é incrementado para 1.   
2.ª avaliação: Usa x = 1. Testa 1 < 5 (Verdadeiro). x é incrementado para 2.   
3.ª avaliação: Usa x = 2. Testa 2 < 5 (Verdadeiro). x é incrementado para 3.   
4.ª avaliação: Usa x = 3. Testa 3 < 5 (Verdadeiro). x é incrementado para 4.   
5.ª avaliação: Usa x = 4. Testa 4 < 5 (Verdadeiro). x é incrementado para 5.   
6.ª avaliação: Usa x = 5. Testa 5 < 5 (Falso). Como a expressão x++ foi avaliada, o incremento pós-fixado é executado do mesmo jeito, elevando x para 6 antes de o laço ser encerrado por falha na condição. 

c) Reescreva esse código de forma explícita e clara (sem corpo vazio), mantendo exatamente o mesmo resultado final de x.

R: 
#include <stdio.h>

int main() {
    int x = 0;

    while (x < 5) {
        x++;
    }
    /* Incremento referente ao teste final em que x era 5 e a condição falhou */
    x++;

    printf("Valor final de x = %d\n", x);
    return 0;
}