/* Conversão de Celsius para Fahrenheit */
#include <stdio.h>
#include <stdlib.h>

int main() {

    float ctemp, ftemp;
    printf("Digite Celsius: ");
    scanf("%f", &ctemp);
    /* Processamento e Saída */

    ftemp = ctemp * 9/5 + 32;
    printf("Fahrenheit: %.2f\n", ftemp);

    system("PAUSE");
    return 0;
}