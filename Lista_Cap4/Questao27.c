#include <stdio.h>

int main() {
    int horas;
    float total = 0;
    
    printf("Digite o numero de horas inteiras de permanência: ");
    scanf("%d", &horas);
    
    for (int i = 1; i <= horas; i++) {
        if (i <= 2) total += 2.0; 
        else if (i <= 4) total += 2.5; 
        else total += 3.0; 
    }
    
    printf("Tempo total: %d horas.\nValor final cobrado: R$ %.2f\n", horas, total); 
    return 0;
}