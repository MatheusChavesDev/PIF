Questão 05. Operador Vírgula e Múltiplas Variáveis de Controle — O operador vírgula (,) permite agrupar múltiplas expressões em um único comando, garantindo a avaliação da esquerda para a direita. Observe o trecho abaixo:

a) Exatamente quantas iterações o laço acima executará antes de ser encerrado?

R: O laço executará exatamente 5 iterações antes de ser encerrado.

b) Escreva a saída exata produzida pelo comando printf em cada uma das iterações executadas.

R: 1ª iteração: i = 0, j = 10 | soma = 10   2ª iteração: i = 1, j = 9 | soma = 10   3ª iteração: i = 2, j = 8 | soma = 10   4ª iteração: i = 3, j = 7 | soma = 10   5ª iteração: i = 4, j = 6 | soma = 10  

c) Reescreva a lógica deste mesmo laço utilizando obrigatoriamente a estrutura while.

R: 
int i, j;

i = 0;
j = 10;

while (i < j) {
    printf("i = %d, j = %d | soma = %d\n", i, j, i + j);
    i++;
    j--;
}