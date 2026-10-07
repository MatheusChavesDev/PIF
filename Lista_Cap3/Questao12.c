#include <stdio.h>

int main() {
    int celsius;
    double fahrenheit, kelvin;

    /* Imprime o cabeçalho alinhado da tabela */
    printf("%-12s | %-15s | %-10s\n", "Celsius (C)", "Fahrenheit (F)", "Kelvin (K)");
    printf("--------------------------------------------------\n");

    /* Laço de 0 a 100 com incremento de 5 em 5 */
    for (celsius = 0; celsius <= 100; celsius += 5) {
        fahrenheit = (9.0 * celsius) / 5.0 + 32.0;
        kelvin = celsius + 273.15;

        /* Imprime cada linha alinhada em colunas com 2 casas decimais */
        printf("%-12.2f | %-15.2f | %-10.2f\n", (double)celsius, fahrenheit, kelvin);
    }

    return 0;
}