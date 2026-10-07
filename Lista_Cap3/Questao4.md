Questão 04. Comandos de Desvio de Fluxo: break vs. continue — Os comandos break e continue são instruções de controle de desvio que alteram a execução normal de laços de repetição:

a) Descreva a ação exata executada pelo programa quando o comando break é acionado dentro de um laço for ou while.

R: Quando o comando break é acionado dentro de um laço for ou while, a execução da estrutura de repetição é interrompida imediatamente. O programa ignora todas as instruções restantes que estariam abaixo do break no corpo do laço e salta diretamente para a primeira linha de código localizada após o fechamento da estrutura de repetição.

b) Descreva a ação exata executada pelo programa quando o comando continue é acionado dentro de um laço for. Qual das três expressões do cabeçalho do for é executada imediatamente após o continue?

R: Ação do continue: O comando continue interrompe apenas a iteração atual do laço. O programa ignora as instruções restantes do corpo do laço abaixo do continue e força a passagem imediata para o próximo ciclo de repetição.

Expressão do cabeçalho executada: No laço for, ao acionar o continue, o fluxo de execução salta diretamente para a terceira expressão do cabeçalho (a expressão de incremento/atualização, como i++). Após essa atualização ser executada, a segunda expressão (a condição de teste) é avaliada para determinar se a nova iteração ocorrerá.

c) Em uma estrutura de laços aninhados (um laço for interno dentro de outro laço for externo), qual laço é interrompido quando a instrução break é executada dentro do laço interno?

R: Em uma estrutura de laços aninhados, a instrução break interrompe exclusivamente o laço interno no qual está contida. O laço externo permanece em execução normal e dará prosseguimento à sua próxima iteração a partir do ponto imediatamente posterior ao bloco do laço interno recém-encerrado.