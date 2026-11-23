a) Protótipo: `float celsius(float);`, antes da main(). Ele avisa ao compilador que existe uma função chamada celsius que recebe um float e devolve um float.
Chamada: `c = celsius(f);`, dentro da main(). É o momento em que a função é executada: o valor de f é copiado para o parâmetro e o valor devolvido é guardado em c.
Definição: `float celsius(float fahr) { return (fahr - 32.0) * 5.0 / 9.0; }`, depois da main(). É o corpo da função, onde está o código que realmente faz a conversão.

b) O protótipo permite que o compilador confira, no momento da chamada, se a quantidade e os tipos dos argumentos estão certos e qual é o tipo do valor devolvido, mesmo que a função só seja definida depois da main(). Se ele fosse omitido, o compilador chegaria na chamada sem conhecer a função: não haveria verificação dos parâmetros e ele assumiria que a função devolve int. Nos compiladores atuais isso gera aviso ou erro, e nos antigos podia gerar resultado errado, porque o float devolvido seria lido como int.

c) O tipo da função celsius() é float. O tipo de uma função é o tipo do valor que ela devolve com o return, porque é esse valor que "substitui" a chamada dentro de uma expressão (em `c = celsius(f);`, a chamada vale um float). Os parâmetros só dizem o que a função recebe para trabalhar, e não o que ela entrega de volta.
