#include <stdio.h>

int main() {
    double celsius;

    printf("Digite a temperatura em graus Celsius: ");
    scanf("%lf", &celsius);


    double fahrenheit = (celsius * 9.0 / 5.0) + 32.0;
    double kelvin = celsius + 273.15;

    printf("\n--- Conversao de Temperatura ---\n");
    printf("Fahrenheit: %.2f *F\n", fahrenheit);
    printf("Kelvin: %.2f K\n", kelvin);

    return 0;
}