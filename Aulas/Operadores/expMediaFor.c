#include <stdio.h>

int main() {
float nota, media = 0.0;

for (int i = 1; i <= 4; i++) {

    printf("Digite %dª nota: ", i);
    scanf("%f", &nota);
    media += nota;
}

printf("A média das notas é: %.2f\n", media / 4);

return 0;
}
