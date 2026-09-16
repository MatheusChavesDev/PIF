/* Conversão de Celsius para Fahrenheit */
#include <stdio.h>
#include <stdlib.h>

int main() {
    float ctemp, ftemp;
    
    printf("Digite Fahrenheit: ");
    scanf("%f", &ftemp);

    /* Processamento e Saída */

    ctemp = (ftemp - 32) * 5/9;
    printf("Celsius: %.2f\n", ctemp);

    system("PAUSE");
    return 0;
}