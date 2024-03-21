// 3. Faça um programa em C que calcule o perímetro de uma pizza (P = 2 x PI x r). Considere o raio um número inteiro e a constante PI igual a 3,1416.

#include <stdio.h>

int main() {
    int raio = 0;
    float perimetro = 0;

    printf("Digite o raio da pizza: ");
    scanf("%d", &raio);

    perimetro = 2 * 3.1416 * raio;

    printf("\nO perímetro da pizza é: %f\nu.c.", perimetro);

    return 0;
}