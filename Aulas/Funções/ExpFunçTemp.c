#include <stdio.h>
#include <stdlib.h> 
#include <conio.h>
#include <windows.h>

float fahrenheitToCelsius(float fahrenheit) {
    return (fahrenheit - 32) * 5.0 / 9.0;
}

int main() {
    system("cls");
    float fahrenheit, celsius;

    printf("Digite uma temperatura em Fahrenheit: ");
    scanf("%f", &fahrenheit);
    celsius = fahrenheitToCelsius(fahrenheit);
    printf("A temperatura em Celsius é: %f\n", celsius);

    return 0;
}