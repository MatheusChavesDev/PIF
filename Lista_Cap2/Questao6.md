a) Explique a diferença de fluxo e atribuição que ocorre entre o operador prefixado (++n) e o pós-fixado (m++). Quais serão os valores impressos na tela por cada trecho?

Operador Prefixado (++n): O valor da variável é incrementado em 1 antes de ser lido para a atribuição. Na instrução x = ++n, n passa de 5 para 6, e esse novo valor (6) é atribuído a x.

Operador Pós-fixado (m++): O valor atual da variável é lido e retornado primeiro para ser usado na atribuição, e o incremento ocorre depois. Na instrução y = m++, o valor original de m (5) é atribuído a y, e em seguida m passa a ser 6.

b) Um programador júnior tentou imprimir uma variável em printf() modificando-a múltiplas vezes de forma sequencial na mesma chamada: printf("%d\t%d\t%d\n", n, n+1, n++);. Explique por que essa instrução pode gerar resultados inconsistentes e imprevisíveis dependendo do compilador adotado (comportamento indefinido).

Gera comportamento indefinido (Undefined Behavior) devido a duas regras fundamentais do padrão ANSI C:

Ordem de Avaliação dos Argumentos: O padrão C não especifica em qual ordem os argumentos passados para uma função devem ser avaliados. Um compilador pode avaliar da direita para a esquerda (comum devido à convenção de pilha cdecl), enquanto outro pode fazê-lo da esquerda para a direita ou alterar a ordem com base nas otimizações do código.

Ausência de Ponto de Sequência (Sequence Point): A linguagem estabelece que alterar uma variável (como o efeito colateral de n++) e simultaneamente ler seu valor (n ou n+1) dentro de uma mesma instrução — sem que haja um ponto de sequência (sequence point) ou relação sequenced-before entre essas operações — causa um conflito de estado na memória.