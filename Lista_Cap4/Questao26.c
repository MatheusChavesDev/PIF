#include <stdio.h>

int main() {
    int mes, ano, dias;
    
    printf("Digite o numero do mês (1 a 12): ");
    scanf("%d", &mes);
    printf("Digite o ano corrente: ");
    scanf("%d", &ano);
    
    if (mes == 2) {
        if (ano % 400 == 0 || (ano % 4 == 0 && ano % 100 != 0)) dias = 29; 
        else dias = 28; 
        printf("Fevereiro possui %d dias.\n", dias);
    } else if (mes == 4 || mes == 6 || mes == 9 || mes == 11) {
        printf("O mês possui 30 dias.\n"); 
    } else if (mes >= 1 && mes <= 12) {
        printf("O mês possui 31 dias.\n"); 
    } else {
        printf("Mês invalido.\n");
    }
    return 0;
}