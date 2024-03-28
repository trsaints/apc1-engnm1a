// 8. Faça um programa em C que converta um tempo expresso em segundos para um valor em horas, minutos e segundos (ex.: 1000 segundos corresponde a 0 horas 16 minutos e 40 segundos).

#include <stdio.h>
#include <math.h>

int main () {
    int tempo_em_segundos;

    printf("Digite um valor de tempo em segundos (somente números): ");
    scanf("%i", &tempo_em_segundos);

    while (tempo_em_segundos < 0) {
        printf("Tempo inválido. Insira valores positivos: ");
        scanf("%i", &tempo_em_segundos);
    }

    long int tempo_em_horas = tempo_em_segundos / 3600,
        tempo_em_minutos = tempo_em_segundos / 60 % 60,
        segundos_restantes = tempo_em_segundos % 60;

    printf("%i segundos: %lih %limin %lis\n", tempo_em_segundos, tempo_em_horas, tempo_em_minutos, segundos_restantes);

    return 0;
}