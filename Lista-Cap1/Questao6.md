Identifique e liste todos os erros de sintaxe (que violam as regras da linguagem C) e de
lógica contidos no programa abaixo:
main()
{
int a=1; b=2; c=3:
printf("0s números são: %d%d%d\n, a, b, c, d);
system("pause");
}

Resposta: os erros são os seguintes: ausência das diretivas #include <stdio.h> e <stdlib.h>, declaração do tipo da função main, erro colocando ":" ao invés de ";" após c=3,
ausência de declaração de tipo nas variáveis b=2 e c=3 (funcionaria se fosse int a=1, b=2,c=3;). Continuando, o texto de printf não está fechado com ", e nenhuma variável d foi previamente
declarada. Por fim, o "PAUSE" do comando system("PAUSE") não está em letra de forma, e não há um "return 0;".
