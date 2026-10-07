Questão 03. Flexibilidade do Laço for e Omissão de Expressões — A sintaxe do laço for em C consiste em três expressões separadas por ponto-e-vírgulas: inicialização, teste e incremento. Analise os três trechos de código abaixo:

// Trecho A: Incremento por divisão
for (a = 36; a > 0; a /= 2)
    printf("%d\t", a);

// Trecho B: Omissão de inicialização e incremento
for (; (ch = getch()) != 'X' ;)
    printf("%c", ch + 1);

// Trecho C: Omissão completa de expressões
for (;;)
    printf("Laço Infinito\n");

a) Qual é a sequência exata de valores impressos no console ao executar o Trecho A?

R: A sequência exata de valores impressos no console é: 36, 18, 9, 4, 2, 1.

b) Explique o comportamento do Trecho B. O que faz a operação 'ch + 1' e por que os parênteses em '(ch = getch())' são estritamente necessários antes da comparação com 'X'?

R: O ciclo for omite as etapas de inicialização e de incremento. A cada iteração, lê um caráter introduzido pelo utilizador através da função getch(), atribui esse caráter à variável ch e imprime o resultado até que o caráter lido seja a letra 'X'.

c) Como o programa pode interromper a execução do laço infinito do Trecho C de forma programática sem forçar o encerramento do processo pelo sistema operacional?

R: usando o comando break: Inserção de uma verificação condicional (if) dentro do corpo do ciclo. Quando a condição de saída for atingida, a instrução break é executada, encerrando o ciclo e transferindo o fluxo de execução para a instrução imediatamente posterior ao for.