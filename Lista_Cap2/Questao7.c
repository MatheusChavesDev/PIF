#include <stdio.h>

int main(void) {
    int dia, mes, ano;

    printf("Digite uma data no formato dd/mm/aaaa: ");

    // O scanf consome os caracteres '/' automaticamente durante a leitura
    scanf("%d/%d/%d", &dia, &mes, &ano);

    printf("Data no formato invertido: %04d/%02d/%02d\n", ano, mes, dia);

    return 0;
}