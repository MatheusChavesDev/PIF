#include <stdio.h>
#include <math.h>

int main() {
    char op;
    float n1, n2;
    printf("Escolha a operacao (+, -, *, /, ^): ");
    scanf(" %c", &op);
    
    printf("Digite o primeiro operando: ");
    scanf("%f", &n1);
    printf("Digite o segundo operando: ");
    scanf("%f", &n2);
    
    switch(op) {
        case '+': printf("Resultado: %.2f\n", n1 + n2); break; 
        case '-': printf("Resultado: %.2f\n", n1 - n2); break;
        case '*': printf("Resultado: %.2f\n", n1 * n2); break;
        case '/': 
            if (n2 != 0) printf("Resultado: %.2f\n", n1 / n2); 
            else printf("Erro: Divisao por zero impedida.\n"); 
            break;
        case '^': printf("Resultado: %.2f\n", pow(n1, n2)); break; 
        default: printf("Operacao invalida.\n");
    }
    return 0;
}