#include <stdio.h>

int main() {
    int numeros[10],
        soma = 0,
        entrada_correta;

    float media;

    for (int i = 0; i < 10; i++) {
        printf("Entre com o %io número: ", i + 1);
        entrada_correta = scanf("%i", &numeros[i]);

        soma += numeros[i];
    }

    media = soma / 10.0f;

    printf("A média de ");
    for (int i = 0; i < 10; i++) 
    {
        printf("%i", numeros[i]);

        if (i < 9 )
            printf(" + ");
    }
    
    printf(" = %.1f\n", media);
}