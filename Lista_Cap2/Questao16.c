#include <stdio.h>
#include <math.h>

int main() {
    double altura_degrau_cm;
    double altura_total_m;

    printf("Digite a altura de cada degrau (em cm): ");
    scanf("%lf", &altura_degrau_cm);

    printf("Digite a altura total a ser alcançada (em metros): ");
    scanf("%lf", &altura_total_m);

    
    double altura_total_cm = altura_total_m * 100.0;

    
    int num_degraus = (int)ceil(altura_total_cm / altura_degrau_cm);

    printf("\nNúmero mínimo de degraus a subir: %d\n", num_degraus);

    return 0;
}