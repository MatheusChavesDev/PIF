#include <stdio.h>

int main() {
    float nota;
    float soma = 0.0f;
    float maior = 0.0f;
    float menor = 10.0f;
    int total_alunos = 0;

    printf("Informe as notas dos alunos (0.0 a 10.0). Digite -1.0 para encerrar:\n");

    while (1) {
        printf("Nota do aluno %d: ", total_alunos + 1);
        scanf("%f", &nota);

       
        if (nota == -1.0f) {
            break;
        }

        /* Validação de intervalo das notas válidas */
        if (nota < 0.0f || nota > 10.0f) {
            printf("Nota invalida! Digite um valor entre 0.0 e 10.0 (ou -1.0 para sair).\n\n");
            continue;
        }

        soma += nota;
        total_alunos++;

        /* Inicialização da maior e menor nota com a primeira nota válida lida */
        if (total_alunos == 1) {
            maior = nota;
            menor = nota;
        } else {
            if (nota > maior) maior = nota;
            if (nota < menor) menor = nota;
        }
    }

    printf("\n--- ESTATISTICAS DA TURMA ---\n");
    if (total_alunos > 0) {
        printf("a) Total de alunos avaliados: %d\n", total_alunos);
        printf("b) Maior nota da turma: %.2f\n", maior);
        printf("c) Menor nota da turma: %.2f\n", menor);
        printf("d) Media geral da turma: %.2f\n", soma / total_alunos);
    } else {
        printf("Nenhum aluno foi avaliado (nenhuma nota valida registrada).\n");
    }

    return 0;
}