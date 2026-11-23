#include <stdio.h>
#include <windows.h>
#define PI 3.14159

float area(float r);

int main() {
    SetConsoleOutputCP(CP_UTF8);
    float raio;
    printf("Digite o raio da esfera: ");
    scanf("%f", &raio);

    printf("Área da esfera: %.2f\n", area(raio));
    return 0;
}

float area(float r) {
    return 4 * PI * r * r;
}
