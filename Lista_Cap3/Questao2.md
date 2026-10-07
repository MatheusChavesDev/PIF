Questão 02. Escopo e Tempo de Vida de Variáveis de Bloco — Um estudante escreveu o
programa abaixo com o intuito de calcular a soma dos quadrados dos números inteiros de 1 a 9,
mas encontrou falhas durante a compilação e execução:

a) Por que o compilador emitirá um erro de sintaxe/declaração na instrução printf final?

R:O compilador emitirá um erro de declaração (como error: ‘soma’ undeclared) porque a variável soma foi declarada dentro do bloco delimitado pelas chaves do laço for.

b) Mesmo que a instrução printf fosse movida para dentro do bloco do laço for, por que o valor impresso para soma estaria conceitualmente incorreto a cada iteração?

R:A instrução int soma = 0; está posicionada no corpo do laço for. A cada nova iteração do laço, a variável soma é recriada e reinicializada com o valor 0. A operação soma += i * i; calcula apenas 0 + i^2, resultando somente no quadrado do número atual (i^2). O valor acumulado nas iterações anteriores é descartado ao final de cada iteração, impedindo que o programa realize o somatório acumulado dos quadrados.

c) Apresente o código corrigido e explique o conceito de visibilidade, escopo de bloco e tempo de vida de variáveis na linguagem C.

R: 
#include <stdio.h>
#include <stdlib.h>

int main() {
    int i;
    int soma = 0; /* Declarada e inicializada fora do laço */

    for (i = 1; i < 10; i++) {
        soma += i * i; /* Acumula os quadrados de 1 a 9 */
    }

    printf("Soma final = %d\n", soma);
    system("PAUSE");
    return 0;
}

Escopo de Bloco: região do código delimitada por um par de chaves {} na qual uma variável é reconhecida. Variáveis declaradas dentro de um bloco pertencem exclusivamente a ele e não podem ser acessadas externamente.

Visibilidade: propriedade que determina em quais trechos do código-fonte o identificador de uma variável pode ser utilizado.

Tempo de vida: período de tempo durante a execução do programa em que a variável ocupa espaço na memória RAM. Variáveis automáticas de bloco são criadas ao entrar no bloco e destruídas ao sair dele.   No código corrigido, declarando soma no escopo do main, seu tempo de vida estende-se durante toda a execução da função, preservando seu valor acumulado ao longo do laço. 