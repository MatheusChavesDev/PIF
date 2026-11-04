a) A saída exata será: a = 0, b = 5, c = 8. O incremento ++b foi completamente ignorado durante a execução.

b) Na avaliação de curto-circuito do E (&&), se a primeira condição for falsa, a segunda não é avaliada pois o resultado já é falso. No OU (||), se a primeira condição for verdadeira, a segunda não é avaliada pois o resultado já está garantido como verdadeiro.

c) O valor final seria b = 5 e c = 20. Como a == 0 é verdadeiro, ocorre curto-circuito no operador ||, impedindo a execução de ++b, e ativando o bloco principal onde c += 10.