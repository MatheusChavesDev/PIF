#include <stdio.h>

int main() {
    int valor_pagar, valor_entregue, troco, nota = 100;
    
    printf("Digite o valor total a pagar: ");
    scanf("%d", &valor_pagar);
    printf("Digite o valor entregue pelo cliente: ");
    scanf("%d", &valor_entregue);
    
    if (valor_entregue < valor_pagar) {
        printf("Erro: Valor insuficiente.\n"); 
    } else {
        troco = valor_entregue - valor_pagar; 
        printf("Troco devido: R$ %d\n", troco);
        
        while (nota >= 2) {
            if (troco >= nota) {
                printf("%d nota(s) de R$ %d\n", troco / nota, nota); 
                troco %= nota;
            }
            
            if (nota == 100) nota = 50;
            else if (nota == 50) nota = 20;
            else if (nota == 20) nota = 10;
            else if (nota == 10) nota = 5;
            else if (nota == 5) nota = 2;
            else nota = 0;
        }
    }
    return 0;
}