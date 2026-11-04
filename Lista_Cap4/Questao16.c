#include <stdio.h>

int main() {
    float dist, litros, consumo;
    printf("Digite a distancia percorrida (em km): ");
    scanf("%f", &dist);
    printf("Digite a quantidade de litros consumidos: ");
    scanf("%f", &litros);
    
    consumo = dist / litros;
    printf("Consumo: %.2f km/l -> ", consumo);
    
    if (consumo < 8.0) printf("Venda o carro!\n"); 
    else if (consumo >= 8.0 && consumo <= 14.0) printf("Econômico!\n"); 
    else printf("Super econômico!\n"); 
    
    return 0;
}