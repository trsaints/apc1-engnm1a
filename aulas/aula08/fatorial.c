#include <stdio.h>

int main() {
    int numero_escolhido, fatorial = 1;

    printf("Escolha um número maior que 0: ");
    int tentativa_scan = scanf("%d", &numero_escolhido);

    if (!tentativa_scan || numero_escolhido <= 0)
        return 1;

    for (int i = 1; i <= numero_escolhido; i++)
        fatorial *= i;

    printf("O fatorial de %d é %d\n", numero_escolhido, fatorial);
}