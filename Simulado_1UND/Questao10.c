/*Cálculo Salarial com Gratificação e Impostos — Uma empresa contrata um técnico a R$ 45,00 por dia trabalhado. Crie um programa em C que solicite o número
 de dias trabalhados, calcule o salário bruto, adicione uma gratificação de 5% sobre o bruto e desconte 8% de imposto de renda sobre o bruto. 
 Ao final, exiba o holerite detalhado com o valor líquido a receber.*/

 #include <stdio.h>
 #include <stdlib.h>

 int main() {
    system("cls");
    int dias;

    printf("Informe o nº de dias trabalhados: \n");
    scanf("%d", &dias);

    float sal_bruto = 45 * dias;
    float grat =  sal_bruto * 0.05; 
    float irpf = sal_bruto * 0.08;
    float sal_liq = (sal_bruto + grat) - irpf;

    printf("**Holerite Detalhado**\n\nSalário Bruto: %.2f\n\nGratificação: %.2f\n\nDesconto IRPF: %.2f\n\nSalário Líquido: %.2f\n\n", sal_bruto, grat, irpf, sal_liq);

    system("PAUSE");
    return 0;
 }