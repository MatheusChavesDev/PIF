a) A mensagem impressa será "Opção B\n". A primeira condição (x > 10) é verdadeira, permitindo a entrada no bloco, mas a segunda condição (y > 10) é falsa. O else que contém a Opção B está associado ao segundo if, portanto é acionado.

b) A regra oficial determina que uma cláusula else é sempre associada ao comando if mais próximo que a antecede no mesmo escopo e que ainda não possua um else, caso não existam chaves explícitas delimitando os blocos.   

c) O código corrigido é:  

if (x > 10) {
    if (y > 10) {
        printf("Opção A\n");
    }
} else {
    printf("Opção B\n");
}