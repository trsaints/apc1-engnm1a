#include <stdio.h>
#include <math.h>

const double PI = 3.14;

int main() {
    int primeiro_numero,
        segundo_numero;

    printf("Entre com o primeiro número: ");
    float tentativa_scan = scanf("%i", &primeiro_numero);

    printf("Entre com o segundo número: ");
    tentativa_scan = scanf("%i", &segundo_numero);

    float soma = primeiro_numero + segundo_numero,
        subtracao = primeiro_numero - segundo_numero,
        produto = primeiro_numero * segundo_numero,
        divisao;

    if (segundo_numero != 0)
        divisao = primeiro_numero / segundo_numero;
     else {
        printf("Erro: Divisão por zero\n");
        return 1;
    }

    int resto_divisao = primeiro_numero % segundo_numero;

    double primeira_raiz = sqrt(primeiro_numero),
            segunda_raiz = sqrt(segundo_numero),
            primeira_potencia = pow(primeiro_numero, 2),
            segunda_potencia = pow(segundo_numero, 2);

    printf("%i + %i = %.1f\n", primeiro_numero, segundo_numero, soma);
    printf("%i - %i = %.1f\n", primeiro_numero, segundo_numero, subtracao);
    printf("%i * %i = %.1f\n", primeiro_numero, segundo_numero, produto);
    printf("%i / %i = %.1f\n", primeiro_numero, segundo_numero, divisao);
    printf("%i %% %i = %d\n\n", primeiro_numero, segundo_numero, resto_divisao);

    printf("Pós-incremento: %i\n", primeiro_numero++);
    printf("Pré-incremento: %i\n", ++primeiro_numero);

    printf("Pós-decremento: %i\n", primeiro_numero--);
    printf("Pré-decremento: %i\n\n", --primeiro_numero);

    printf("Raiz(%i) = %f\n", primeiro_numero, primeira_raiz);
    printf("Raiz(%i)= %f\n", segundo_numero, segunda_raiz);
    printf("%i² = %f\n", primeiro_numero, primeira_potencia);
    printf("%i² = %f\n\n", segundo_numero, segunda_potencia);

    double primeiro_logaritmo2 = log2(primeiro_numero),
        segundo_logaritmo2 = log2(segundo_numero),
        primeiro_logaritmo10 = log10(primeiro_numero),
        segundo_logaritmo10 = log10(segundo_numero);

    printf("Log2(%i) = %f\n", primeiro_numero, primeiro_logaritmo2);
    printf("Log2(%i) = %f\n", segundo_numero, segundo_logaritmo2);

    printf("Log10(%i) = %f\n", primeiro_numero, primeiro_logaritmo10);
    printf("Log10(%i) = %f\n\n", segundo_numero, segundo_logaritmo10);

    double primeiro_seno = sin((primeiro_numero * PI) / 180),
        segundo_seno = sin((segundo_numero * PI) / 180);

    double primeiro_cosseno = cos((primeiro_numero * PI) / 180),
        segundo_cosseno = cos((segundo_numero * PI) / 180);

    printf("Seno(%i) = %f\n", primeiro_numero, primeiro_seno);
    printf("Seno(%i) = %f\n", segundo_numero, segundo_seno);
    printf("Cosseno(%i) = %f\n", primeiro_numero, primeiro_cosseno);
    printf("Cosseno(%i) = %f\n\n", segundo_numero, segundo_cosseno);

    return 0;
}