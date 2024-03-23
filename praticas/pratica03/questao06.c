// 6. Faça um programa em C que calcule as raízes de uma equação do 2° grau através da fórmula de Bhaskara (-b +/- raiz_quadrada(b² - 4ac)/2a).

#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c, delta, raiz1, raiz2;

    printf("Digite o valor de a: ");
    scanf("%lf", &a);

    printf("Digite o valor de b: ");
    scanf("%lf", &b);

    printf("Digite o valor de c: ");
    scanf("%lf", &c);

    delta = pow(b, 2) - 4 * a * c;

    if (delta > 0) {
        raiz1 = (-b + sqrt(delta)) / (2 * a);
        raiz2 = (-b - sqrt(delta)) / (2 * a);
        printf("Raiz 1: %.2lf\n", raiz1);
        printf("Raiz 2: %.2lf\n", raiz2);
    } else if (delta == 0) {
        raiz1 = -b / (2 * a);
        printf("Raiz única: %.2lf\n", raiz1);
    } else {
        printf("Não existem raízes reais.\n");
    }

    return 0;
}