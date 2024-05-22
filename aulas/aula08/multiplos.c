#include <stdio.h>

int main() {
    int numero_escolhido;

    printf("Entre com um número entre 1 e 100: ");
    scanf("%i", &numero_escolhido);

    if (numero_escolhido < 1 || numero_escolhido > 100)
        return 1;

    for (int i = 1; i <= 100; i++)
        if (i % numero_escolhido == 0)
            printf("%i, ", i);

    printf("\n");

    return 0;
}