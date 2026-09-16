#include <stdio.h>

int main() {
float nota1, nota2, nota3, nota4, media;

printf("Digite a primeira nota: ");
scanf("%f, %f, %f, %f", &nota1, &nota2, &nota3, &nota4);

media = (nota1 + nota2 + nota3 + nota4) / 4;

printf("A média das notas é: %.2f\n", media);

system("PAUSE");
return 0;
}
