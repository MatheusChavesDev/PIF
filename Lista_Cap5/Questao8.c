#include <stdio.h>
#include <windows.h>

float celsius(float fahr);

int main() {
    SetConsoleOutputCP(CP_UTF8);
    float f;
    printf("Digite a temperatura em Fahrenheit: ");
    scanf("%f", &f);

    printf("Temperatura em Celsius: %.2f\n", celsius(f));
    return 0;
}

float celsius(float fahr) {
    return (fahr - 32) * 5 / 9.0;
}
