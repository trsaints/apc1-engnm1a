#include <stdio.h>

int main() {
    char nome_do_produto[32];
    int quantidade;
    float preco;

    printf("Digite o nome do produto: ");
    int entrada_valida = scanf("%[^\n]s", nome_do_produto);

    printf("Digite a quantidade: ");
    entrada_valida = scanf("%i", &quantidade);

    printf("Digite o preco: ");
    entrada_valida = scanf("%f", &preco);

    printf("-----------------------------\n");
    printf("\t\tNota Fiscal\t\t\n");
    printf("-----------------------------\n");
    printf("ITEM\t\tQTD\t\tVALOR\n");
    printf("%s\t\t%i\t\tR$%.2f\n", nome_do_produto, quantidade, preco);

    return 0;
}