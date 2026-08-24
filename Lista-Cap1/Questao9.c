#include <stdio.h>
#include <stdlib.h>
int main() {

printf("%c%c%cPrimeiro programa", '\n', '\t', '\"');
printf("%c", "\"");


system("PAUSE");
return 0;
}

// o cursor vai pular uma linha e dar um espaço pra escrever "Primeiro programa"

/*os %c vao ser substituidos, na ordem, pelos chars apresentados apos a virgula depois do fechamento de aspas.
Ou seja, o cursor pula uma linha, da um tab e abre aspas.
logo apos vem outro print que imprime uma aspas dupla*/