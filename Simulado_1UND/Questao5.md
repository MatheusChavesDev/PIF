Questão 05. Estruturas de Repetição: Comparação entre for, while e do-while (Cap. 3)

As estruturas de repetição permitem a execução iterativa de instruções em C. Analise as características de for, while e do-while e responda fundamentadamente:

a) Qual é a diferença essencial entre while e do-while em relação ao número mínimo de execuções do bloco de código e ao momento do teste condicional?

No while a condição é avaliada antes de cada laço. Então, se for falsa de início, o código não irá ser executado. No do-while a condição só é avaliada no final do laço, então o bloco é executado pelo menos uma vez.

b) Em que cenários o laço for se apresenta como a escolha mais elegante e legível frente ao laço while?

Quando se sabe o número de vezes que se quer repetir uma ação.

c) O trecho de código 'while (condicao);' (com ponto-e-vírgula ao final do cabeçalho) constitui um erro de compilação ou de lógica? O que acontece se condicao for verdadeira?

É um erro de lógica, e ocorre um loop infinito.