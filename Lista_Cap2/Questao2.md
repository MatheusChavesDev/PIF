## a) Por que o uso de funções contidas em <conio.h> deve ser evitado em sistemas modernos (Linux, macOS, servidores)?

### Porque não é uma biblioteca padrão ANSI/ISO C, o que acaba gerando erro de incompatibilidades nos sistemas modernos citados.

## b) Quais são as funções equivalentes e portáveis fornecidas pela biblioteca padrão <stdio.h> para entrada e saída de caracteres?

### São as funções printf e scanf.

## c) Escreva um pequeno trecho de código padrão C que leia um caractere do console de maneira robusta, ignorando eventuais quebras de linha ('\n') residuais no buffer do teclado

### #include <stdio.h>

int main() {
    char c;

    printf("Digite um caractere: ");
    
    /* O espaco antes de %c ignora automaticamente '\n', '\t' e ' ' residuais */
    scanf(" %c", &c);
    
    printf("Caractere lido: '%c'\n", c);

    return 0;
}