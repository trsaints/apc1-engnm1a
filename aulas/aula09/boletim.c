#include <stdio.h>

int main() {
    float boletim[10][3];
    int entrada_valida;

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 2; j++) {
            printf("Entre com a %ia nota do %io aluno: ", i + 1, j + 1);
            entrada_valida = scanf("%f", &boletim[i][j]);
        }

        boletim[i][2] = (0.4f * boletim[i][0] + 0.6f * boletim[i][1]);
    }

    printf("BOLETIM - 1o SEMESTRE 2024\n");
    printf("P1\t-\tP2\t-\tMENÇÃO FINAL\n");

    for (int i = 0; i < 10; i++) 
      printf("%2.1f\t-\t%2.1f\t-\t%2.1f\n", boletim[i][0], boletim[i][1], boletim[i][2]);
    

    return 0;
}