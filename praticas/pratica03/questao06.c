// 6. Faça um programa em C que calcule as raízes de uma equação do 2° grau através da fórmula de Bhaskara (-b +/- raiz_quadrada(b² - 4ac)/2a).

#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c, delta, raiz1, raiz2;

    printf("Digite o valor de a: ");
    scanf("%f", &a);

    printf("Digite o valor de b: ");
    scanf("%f", &b);

    printf("Digite o valor de c: ");
    scanf("%f", &c);

    delta = pow(b, 2) - 4 * a * c;

    raiz1 = (- b + sqrt(delta)) / (2 * a);
    raiz2 = (- b - sqrt(delta)) / (2 * a);

    printf("Raiz 1: %.2f\n", raiz1);
    printf("Raiz 2: %.2f\n", raiz2);

    return 0;
}