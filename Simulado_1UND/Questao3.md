Questão 03. Operadores de Atribuição Composta e Avaliação Sequencial (Cap. 2)

Os operadores de atribuição em C executam suas ações da direita para a esquerda e podem ser combinados com operadores aritméticos. Determine os valores finais de a, b, c e d após a execução da sequência abaixo: 

Se cada linha for uma expressão individual:

int a = 2, b = 4, c = 5, d = 10; 

a += b + c; // Valor final de a = 11

b *= c = d - 2; // Valores finais de b e c = 32 e 8

d %= a + 3; // Valor final de d = 0 

a += b += c += 5; // Valores finais de a, b e c = 16, 14 e 10


Se o problema for tratado realmente como um trecho de código em C:

int a = 2, b = 4, c = 5, d = 10; 

a += b + c; // Valor final de a = 11

b *= c = d - 2; // Valores finais de b e c: b= 32 e c = 8

d %= a + 3; // Valor final de d = 10 

a += b += c += 5; // Valores finais de a, b e c: a = 56, b = 45 e c = 13