Valores Finais

a: 19

b: 13

c: 7

d: 4

Avaliação Passo a Passo

1. a += b + c;

Precedência: O operador aritmético + possui maior precedência que o de atribuição composta +=.

Avaliação: b + c resulta em 2 + 3 = 5.

Atribuição: a = a + 5 -> 1 + 5 = 6.

Estado: a = 6, b = 2, c = 3, d = 4.

b *= c = d + 2;

Associatividade: Operadores de atribuição (= e *=) são avaliados da direita para a esquerda.

Passo 1: Avalia-se a expressão à direita d + 2 -> 4 + 2 = 6.

Passo 2: Atribui-se o valor à variável c: c = 6. O resultado dessa expressão é 6.

Passo 3: Executa-se b *= 6 -> b = b * 6 -> 2 * 6 = 12.

Estado: a = 6, b = 12, c = 6, d = 4.

d %= a + a + a;

Precedência: As adições são resolvidas antes da atribuição com módulo %=.

Avaliação: a + a + a resulta em 6 + 6 + 6 = 18.

Atribuição: d %= 18 -> d = d % 18 -> 4 % 18 = 4.

Estado: a = 6, b = 12, c = 6, d = 4.

d -= c -= b -= a;

Associatividade: Cadeia de atribuições resolvida da direita para a esquerda.

Passo 1 (b -= a): b = b - a -> 12 - 6 = 6.

Passo 2 (c -= b): c = c - 6 -> 6 - 6 = 0.

Passo 3 (d -= c): d = d - 0 -> 4 - 0 = 4.

Estado: a = 6, b = 6, c = 0, d = 4.

a += b += c += 7;

Associatividade: Cadeia de atribuições resolvida da direita para a esquerda.

Passo 1 (c += 7): c = c + 7 -> 0 + 7 = 7.

Passo 2 (b += c): b = b + 7 -> 6 + 7 = 13.

Passo 3 (a += b): a = a + 13 -> 6 + 13 = 19.

Estado Final: a = 19, b = 13, c = 7, d = 4.