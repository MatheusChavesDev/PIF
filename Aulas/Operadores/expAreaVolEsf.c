#include <stdio.h>
#include <stdlib.h>

int main() {
    const float pi = 3.14159;
    float raio, area, volume;

    printf("Digite o raio da esfera: ");
    scanf("%f", &raio);

    area = 4 * pi * raio * raio;
    volume = (4/3) * pi * raio * raio * raio;

    printf("Área da esfera: %.2f\n", area);
    printf("Volume da esfera: %.2f\n", volume);

    system("PAUSE");
    return 0;
}