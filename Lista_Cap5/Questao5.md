a) Saídas:
- `SQR(2+3)` vira `((2+3)*(2+3))` = 5 * 5 = **25**
- `DOBRO(2+3)` vira `2+3*2` = 2 + 6 = **8**

O pré-processador apenas troca o texto e não calcula nada antes. Em SQR, os parênteses em volta de cada x e da expressão inteira garantem que 2+3 seja somado primeiro. Em DOBRO não há parênteses, então a multiplicação acontece antes da soma (precedência) e o resultado sai errado. O certo seria `#define DOBRO(x) ((x)*2)`, que daria 10.

b) O #define não é um comando da linguagem C, é uma diretiva do pré-processador, que apenas substitui texto. Se tivesse ponto e vírgula, o `;` também seria copiado para cada lugar onde a constante ou macro aparece, o que pode causar erro (por exemplo, `x = PI; * 2;`). As maiúsculas são só uma convenção para diferenciar, na leitura do código, o que é constante/macro do que é variável ou função.

c) Por causa do espaço entre PRN e `(n)`, o pré-processador entende que PRN é uma constante simples e que o texto de substituição é `(n) printf("%d", n)`. Ou seja, deixa de ser uma macro com argumento. A forma correta é sem espaço:

```c
#define PRN(n) printf("%d", n)
```

Diferença entre macro e função: a macro é trocada pelo texto no código antes da compilação e não verifica o tipo dos argumentos, enquanto a função é chamada durante a execução, tem tipo definido e o compilador confere os tipos dos parâmetros.
