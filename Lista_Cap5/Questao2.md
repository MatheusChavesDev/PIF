a) Uma função em C pode devolver apenas um valor pelo comando return. O programador queria devolver a soma e a média ao mesmo tempo, mas `return soma, media;` usa o operador vírgula: ele avalia soma, descarta esse valor e devolve só media. Então a função devolve apenas a média, e a soma se perde.

b) O `return;` encerra a função na hora e volta para quem a chamou, sem devolver valor. Na função imprime_mensagem(), se o erro for negativo, ela imprime "Erro invalido" e sai, sem chegar no segundo printf. Ele não é obrigatório no final de uma função void, porque ao chegar na chave `}` a função termina sozinha. Ele só é útil para sair antes do fim.

c) Código reescrito:

```c
int media(int a, int b, int c) {
    return (a + b + c) / 3;
}

int soma(int a, int b, int c) {
    return a + b + c;
}
```

Como o return devolve um único valor, cada resultado diferente precisa da sua própria função: uma devolve a média e a outra devolve a soma. Na main(), cada uma é chamada separadamente, por exemplo `s = soma(x, y, z);` e `m = media(x, y, z);`.
