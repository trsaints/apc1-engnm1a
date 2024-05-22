#include <stdio.h>

int main() {
    int numero_escolhido, quantidade_divisores = 0;

    printf("Entre com um número maior que zero: ");
    int resultado_scan = scanf("%d", &numero_escolhido);

    if (!resultado_scan)
        return 1;

    if (numero_escolhido <= 0)
        return 1;

    for (int i = 1; i <= numero_escolhido; i++)
        if (numero_escolhido % i == 0)
            quantidade_divisores++;
        
    if (quantidade_divisores == 2)
        printf("O número %d é primo\n", numero_escolhido);
    else
        printf("O número %d não é primo\n", numero_escolhido);

    return 0;
}