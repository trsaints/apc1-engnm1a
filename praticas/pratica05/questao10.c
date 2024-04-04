// 10. Faça um programa em C que calcule a decomposição de um número inteiro qualquer em unidade, dezena, centena e milhar (ex.: 5637 é decomposto em 7 unidades, 3 dezenas, 6 centenas e 5 milhares).

#include <stdio.h>

int main(){
    int num, unidade, dezena, centena, milhar;

    printf("Digite um número inteiro: ");
    scanf("%d", &num);

    unidade = num % 10;
    dezena = (num / 10) % 10;
    centena = (num / 100) % 10;
    milhar = (num / 1000) % 10;

    printf("O número %d é decomposto em %d unidade(s), %d dezena(s), %d centena(s) e %d milhar(es).\n", num, unidade, dezena, centena, milhar);

    return 0;
}