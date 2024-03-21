// 1. Faça um programa em C que calcule a média final a partir da fórmula (0,4 x A1) + (0,6 x A2). Considere A1 e A2 números reais entre 0 a 10.


#include <stdio.h>

int main() {
    float A1 = 0,
          A2 = 0,
          media = 0;

    printf("Digite a nota da A1: ");
    scanf("%f", &A1);

    while (A1 < 0 || A1 > 10) {
        printf("A nota deve ser um número real entre 0 e 10. Digite novamente: ");
        scanf("%f", &A1);
    }

    printf("Digite a nota da A2: ");
    scanf("%f", &A2);

    while (A2 < 0 || A2 > 10) {
        printf("A nota deve ser um número real entre 0 e 10. Digite novamente: ");
        scanf("%f", &A2);
    }

    media = (0.4 * A1) + (0.6 * A2);

    printf("\nA média final é: %f\n", media);

    return 0;
}