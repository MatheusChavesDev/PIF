a) Caso base: `n == 0`, que devolve 1 sem chamar a função de novo.
Passo recursivo: `n * fatorial(n - 1)`, em que a função chama a si mesma com um valor menor.
Sem o caso base, a função chamaria a si mesma para sempre (4, 3, 2, 1, 0, -1, -2, ...) e nunca pararia.

b) Rastreamento de fatorial(4):

Empilhamento (as chamadas ficam esperando):
```
fatorial(4) → 4 * fatorial(3)
fatorial(3) → 3 * fatorial(2)
fatorial(2) → 2 * fatorial(1)
fatorial(1) → 1 * fatorial(0)
fatorial(0) → caso base, devolve 1
```

Desempilhamento (os valores voltam):
```
fatorial(0) devolve 1
fatorial(1) devolve 1 * 1 = 1
fatorial(2) devolve 2 * 1 = 2
fatorial(3) devolve 3 * 2 = 6
fatorial(4) devolve 4 * 6 = 24
```

Resultado final: 24.

c) A cada chamada, o programa reserva um novo espaço na pilha de execução com a cópia do parâmetro n e o ponto de retorno para a chamada anterior. Esse espaço só é liberado quando a chamada termina. Sem caso base, as chamadas nunca terminam, então a pilha continua crescendo até acabar a memória reservada para ela. Isso causa o estouro de pilha (stack overflow) e o programa é encerrado com erro.
