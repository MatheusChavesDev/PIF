#include <stdio.h>
#include <stdlib.h>
#include <windows.h> //incluí a biblioteca do windows

int main () {
    SetConsoleOutputCP(437); // função para definir a saída para CP437

    /*Cantos Superiores: Esquerdo = \xC9, Direito = \xBB
    Cantos Inferiores: Esquerdo = \xC8, Direito = \xBC
    Linha Horizontal: \xCD, Linha Vertical: \xBA*/

    printf("\xC9\xCD\xCD\xBB\n");
    printf("\xBA  \xBA\n");
    printf("\xC8\xCD\xCD\xBC\n");

    system("PAUSE");

    return 0;
}