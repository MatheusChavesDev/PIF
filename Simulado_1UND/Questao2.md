Questão 02. Especificadores de Formato, Sequências de Escape e Erros de Compilação (Cap. 1)
— Um estudante iniciante escreveu o código C abaixo tentando imprimir mensagens formatadas com
quebras de linha e tabulações, mas enfrentou erros de compilação. Identifique os três erros
sintáticos/estruturais presentes no código:

#include <stdio.h>
#include <stdlib.h>;
int Main()
{
    int idade = 20;
    printf( A idade do aluno eh: %d anos.. , idade);
    cout << endl; 
    system("PAUSE"); 
    return 0; 
}


RESPOSTA: falta de ";" na primeira linha, "Main" com "m" maiúsculo na linha 10 e falta de aspas "" no print.