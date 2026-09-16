#include <stdio.h>

int main() {
    int h_inicio, m_inicio, s_inicio;
    int duracao_segundos;

    printf("Digite o horário de início (Horas Minutos Segundos): ");
    scanf("%d %d %d", &h_inicio, &m_inicio, &s_inicio);

    printf("Digite a duração do experimento em segundos: ");
    scanf("%d", &duracao_segundos);
    
    /* Soma os segundos iniciais com a duracao total */
    int total_segundos = s_inicio + duracao_segundos;
    int s_fim = total_segundos % 60;          // Segundos restantes
    int minutos_adicionais = total_segundos / 60; // Minutos inteiros gerados

    /* Soma os minutos iniciais com os minutos vindos dos segundos */
    int total_minutos = m_inicio + minutos_adicionais;
    int m_fim = total_minutos % 60;            // Minutos restantes
    int horas_adicionais = total_minutos / 60;   // Horas inteiras geradas

    /* Soma as horas iniciais com as horas geradas e aplica o ciclo de 24h */
    int h_fim = (h_inicio + horas_adicionais) % 24;

    printf("\nHorário de término: %02d:%02d:%02d\n", h_fim, m_fim, s_fim);

    return 0;
}