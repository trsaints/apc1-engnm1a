#include <stdio.h>

int main() {
    float primeiro_numero,
        segundo_numero;

    printf("Entre com o primeiro número: ");
    float tentativa_scan = scanf("%f", &primeiro_numero);

    printf("Entre com o segundo número: ");
    tentativa_scan = scanf("%f", &segundo_numero);

    float soma = primeiro_numero + segundo_numero,
        subtracao = primeiro_numero - segundo_numero,
        produto = primeiro_numero * segundo_numero,
        divisao = primeiro_numero / segundo_numero;

    printf("%.1f + %.1f = %.1f\n", primeiro_numero, segundo_numero, soma);
    printf("%.1f - %.1f = %.1f\n", primeiro_numero, segundo_numero, subtracao);
    printf("%.1f * %.1f = %.1f\n", primeiro_numero, segundo_numero, produto);
    printf("%.1f / %.1f = %.1f\n", primeiro_numero, segundo_numero, divisao);

    return 0;
}