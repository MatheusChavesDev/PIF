#include <stdio.h>
#include <stdlib.h>
#include <conio.h>  

int main() {

    int qtdeNotas;
    float nota, media;
    char b = 's';

    while (b == 's' || b == 'S') {
        system("cls");
        media = 0.0;

        printf("Digite a quantidade de notas: ");
        scanf("%d", &qtdeNotas);

        for (int i = 1; i <= qtdeNotas; i++) {
            
            printf("Digite a %dª nota: ", i);
            scanf("%f", &nota);

            media += nota;
        }
        
        media /= qtdeNotas;
        printf("Sua média é de %.2f", media);
        printf("\nDeseja calcular novamente? (s/n)");
        b = getche();
        printf("\n\n");
    }
    


    system("PAUSE");
    return 0;
}