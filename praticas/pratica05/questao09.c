// 9. Faça um programa em C que converta uma idade expressa em anos, meses e dias para um valor em dias. Considere um ano com 365 dias e um mês com 30 dias.

#include <stdio.h>

int main() {
    int anos, meses, dias, totalDias = 0;
    int status_scan = 0;

    printf("Digite uma quantidade de anos (somente números inteiros positivos): ");
    status_scan = scanf("%i", &anos);

    while (anos < 0) {
        printf("Entrada inválida. Digite uma quantidade de anos (somente números inteiros positivos): ");
        status_scan = scanf("%i", &anos);
    }

    if (status_scan)
        totalDias += anos * 365;

    printf("Digite uma quantidade em meses (somente números inteiros positivos): ");
    status_scan = scanf("%i", &meses);

    while (meses < 0) {
        printf("Entrada inválida. Digite uma quantidade de meses (somente números inteiros positivos): ");
        status_scan = scanf("%i", &meses);
    }

    if (status_scan)
        totalDias += meses * 30;

    printf("Digite uma quantidade em dias (somente números inteiros positivos): ");
    status_scan = scanf("%i", &dias);

    while (dias < 0) {
        printf("Entrada inválida. Digite uma quantidade de dias (somente números inteiros positivos): ");
        status_scan = scanf("%i", &dias);
    }

    if (status_scan)
        totalDias += dias;

    printf("%i anos, %i meses e %i dias: %idias\n", anos, meses, dias, totalDias);
}
