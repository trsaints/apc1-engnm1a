// 7. Faça um programa em C que calcule a altura alcançada por um avião após ter percorrido uma certa distância (seno(ângulo) = altura/distância). Considere o ângulo de inclinação do avião menor ou igual a 45°.

#include <stdio.h>
#include <math.h>

const float PI = 3.1416f;

int main() {
    double angulo, distancia, altura;

    printf("Insira o ângulo de inclinação (em graus): ");
    scanf("%lf", &angulo);

    printf("Insira a distância percorrida (em metros): ");
    scanf("%lf", &distancia);

    // Convert angle from degrees to radians
    angulo = (angulo * PI) / 180.0;

    // Calculate the height using the formula: sin(angle) = height / distance
    altura = sin(angulo) * distancia;

    printf("A altura alcançada pelo avião foi de: %.2lf metros\n", altura);

    return 0;
}