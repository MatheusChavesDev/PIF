a) A expressão avalia a condição media >= 7.0. Se for verdadeira, retorna 'A'; se for falsa, retorna 'R'. Para media = 6.8, a condição é falsa, logo o caractere 'R' será armazenado na variável situacao.   

b) O código utilizando estrutura tradicional é:

if (media >= 7.0) {
    situacao = 'A';
} else {
    situacao = 'R';
}

c) Não, o operador ternário exige o retorno de expressões de valor único e não permite blocos com múltiplos comandos, estruturas de repetição ou declaração de variáveis dentro de suas ramificações.