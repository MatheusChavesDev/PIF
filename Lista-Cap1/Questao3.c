/* Esse programa mostra o uso de comentários em várias linhas
* e mostra também o uso de comentários em uma única linha
* vou reutilizar o programa da questão 2, e apenas documentá-lo aqui */

#include <stdio.h> /*para printf()*/
#include <stdlib.h> /* para system()*/

int main () /*Função main*/ { /*início do corpo da função main*/
    float altura = 1.81; /*variável flutuante e valor atribuído à função*/

    printf("Minha altura é de %.3f", altura); /*chamada à função printf*/
    getchar(); /*chamada à função getchar -> usei ela no lugar da system pq o windows estava bloqueando o acesso ao CMD*/

    return 0; /* retorna 0 à função main para encerrá-la*/
} /*encerra o corpo da função main*/