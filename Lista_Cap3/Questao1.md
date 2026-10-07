Questão 01. Diferenças Fundamentais e Tempo de Avaliação de Laços — A linguagem C
disponibiliza três estruturas de controle para execução iterativa de código: for, while e do-while.
Analise o funcionamento dessas estruturas e responda:

a) Qual é a diferença essencial entre as estruturas while e do-while em relação ao número
mínimo de execuções do bloco de código e ao momento em que a condição de teste é
avaliada?

R: A diferença está no momento de avaliação da condição: no while a condição de teste é avaliada antes de qualquer execução do bloco de código. No do-while
a condição de teste é avaliada após a execução do bloco de código. Isso implica que no while o bloco de código pode não ser executado nenhuma vez, caso a condição seja falsa logo na primeira avaliação, e no do-while o bloco de código é executado no mínimo uma vez, pois a primeira passagem pelo bloco ocorre antes de verificar a condição.

b) Em que situações de programação cada uma das três estruturas (for, while e do-while) se
apresenta como a escolha mais elegante, legível e adequada?

R: O for deve ser utilizado quando o número de iterações é previamente conhecido ou quando a repetição é controlada por uma variável contadora com inicialização, condição e incremento claros. O while é utilizado quando o número de iterações é indeterminado (depende de uma condição de parada externa ou dinâmica) e existe a possibilidade de que o bloco de código não precise rodar nenhuma vez. Já o do-while é parecido com o while, mas deve ser idealmente usado quando o bloco de código precisa obrigatoriamente ser executado ao menos uma vez antes de poder validar a condição.

c) Análise de código: O trecho 'while (condicao);' (com ponto-e-vírgula ao final) é um erro de
compilação ou um erro de lógica? Explique detalhadamente o que ocorre durante a execução
se condicao for verdadeira.

R: É um erro de lógica, porque representa uma instrução nula, sendo a sintaxe válida para o compilador. Se a condição for verdadeira, o que ocorre é:
o laço inicia sua execução; a cada iteração, executa a instrução nula e volta para testar a condição; consequentemente, a condição permanece verdadeira indefinidamente, fazendo com que o programa entre em um laço infinito.