#include <stdio.h>

const float PRIMEIRO_DESCONTO = 0.01f;
const float SEGUNDO_DESCONTO = 0.05f;
const float TERCEIRO_DESCONTO = 0.10f;

int main() {
    float valor_bruto, desconto, valor_liquido;

    printf("Digite o valor do produto: ");
    int tentativa_scan = scanf("%f", &valor_bruto);

    if (valor_bruto <= 0 || tentativa_scan != 1) {
        printf("Valor inválido! Digite somente valores acima de R$0.00\n");

        return 1;
    }

    if (valor_bruto >= 500.0f)
        valor_liquido = valor_bruto - (valor_bruto * TERCEIRO_DESCONTO);
    else if (valor_bruto >= 100.0f)
        valor_liquido = valor_bruto - (valor_bruto * SEGUNDO_DESCONTO);
    else
        valor_liquido = valor_bruto - (valor_bruto * PRIMEIRO_DESCONTO);

    printf("Valor bruto: R$%.2f\n", valor_bruto);
    printf("Desconto: %.2f%%\n", (valor_bruto - valor_liquido) / valor_bruto * 100);
    printf("Valor líquido: R$%.2f\n", valor_liquido);

    return 0;
}