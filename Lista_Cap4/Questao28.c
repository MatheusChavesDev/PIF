#include <stdio.h>

int main() {
    int opcao;
    
    printf("--- Menu SAC ---\n");
    printf("1 - Consultar Saldo\n2 - Efetuar Extrato\n3 - Fazer Transferência\n4 - Falar com Atendente\n");
    printf("Digite a opção desejada: ");
    scanf("%d", &opcao);
    
    switch(opcao) {
        case 1: printf("Direcionando para Consulta de Saldo...\n"); break; 
        case 2: printf("Gerando Extrato...\n"); break; 
        case 3: printf("Iniciando processo de Transferência...\n"); break; 
        case 4: printf("Aguarde, transferindo para um atendente...\n"); break; 
        default: printf("Erro: Opção inválida!\n"); 
    }
    return 0;
}