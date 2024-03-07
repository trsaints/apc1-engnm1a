#include <stdio.h>

const float COFINS = 0.076f;
const float PIS_PASEP = 0.0165f;
const float ICMS = 0.17f;

float calcular_preco_final(float valor_base) {
   return (1 + ICMS + COFINS + PIS_PASEP) * valor_base;
}

int main() {
    float valor_base = 1000.0f;
    float preco_final = calcular_preco_final(valor_base);

    printf("Preço inicial: \t\t%f\nPreço final: \t\t%f\n", valor_base, preco_final);

    return 0;
}

