#include <stdio.h>

int main() {
    float salario, aumento, novo_salario;
    int cargo;
    
    printf("Digite o salario atual: ");
    scanf("%f", &salario);
    printf("Digite o codigo do cargo (1=Tecnico, 2=Gerente, 3=Demais Cargos): ");
    scanf("%d", &cargo);
    
    if (cargo == 1) aumento = salario <= 3000 ? 0.15 : 0.10; 
    else if (cargo == 2) aumento = salario <= 5000 ? 0.10 : 0.05; 
    else if (cargo == 3) aumento = 0.08; 
    else { printf("Cargo invalido.\n"); return 1; }
    
    novo_salario = salario + (salario * aumento);
    printf("Valor do aumento: R$ %.2f\nNovo Salário: R$ %.2f\n", salario * aumento, novo_salario); 
    return 0;
}