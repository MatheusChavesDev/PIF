#include <stdio.h>

int main() {
    int opcao;
    float temp, conv;
    
    printf("Menu de Conversoes:\n");
    printf("1. Celsius para Fahrenheit\n2. Celsius para Kelvin\n");
    printf("3. Fahrenheit para Celsius\n4. Kelvin para Celsius\nEscolha: ");
    scanf("%d", &opcao);
    
    printf("Digite a temperatura a ser convertida: ");
    scanf("%f", &temp);
    
    switch(opcao) {
        case 1: conv = temp * 1.8 + 32; break; 
        case 2: conv = temp + 273.15; break; 
        case 3: conv = (temp - 32) / 1.8; break; 
        case 4: conv = temp - 273.15; break; 
        default: printf("Opção inválida.\n"); return 1;
    }
    printf("Valor convertido: %.2f\n", conv); 
    return 0;
}