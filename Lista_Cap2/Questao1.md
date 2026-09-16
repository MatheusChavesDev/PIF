a) Qual é o valor numérico que será efetivamente exibido no console ao executar esse
programa?

Será exibido o valor "2".

b) Explique por que isso ocorre. Qual é o nome do fenômeno que acontece nessa atribuição?

Ocorre porque a variável foi declarada como int, e não como float. Dessa forma, a linguagem C lê o valor como um 
inteiro, o que é chamado de truncamento. 

c) Como este tipo de comportamento pode ser evitado ou controlado explicitamente em C pelo
programador caso ele necessite arredondar o valor ou manter a precisão?

Evita-se declarando o tipo correto de variável. Nesse caso, o correto deveria ter sido float ou double. Para arredondar o valor, basta incluir a biblioteca 
<math.h>, que contém funções específicas de arredondamento de números decimais. Para simplesmente manter a precisão, o programador deve especificar o número
de casas decimais com o ".f". Nesse caso, a precisão seria de .2f. 