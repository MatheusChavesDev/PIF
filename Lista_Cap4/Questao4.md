a) A saída será "Prata\n" seguida de "Ouro\n" na linha de baixo. Isso ocorre porque a execução entra em case 2, imprime o primeiro texto e, por não haver uma instrução break, continua executando o caso seguinte diretamente.

b) A instrução break finaliza imediatamente a execução do bloco switch, impedindo que os casos seguintes sejam validados. A ausência do break ocasiona o fenômeno conhecido como fall-through.

c) Apenas expressões que resultem em números inteiros (como int, char, short) ou enumerações são permitidas. Não é permitido usar float ou double porque comparações de igualdade exata com valores de ponto flutuante podem falhar devido a imprecisões de armazenamento. 