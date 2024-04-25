#include <stdio.h>

int main() {
    float nota1, nota2, media, nota_minima2, p1, p2;

    printf("Digite a primeira nota: ");
    int tentativa_scan = scanf("%f", &nota1);

    int nota_valida = nota1 >= 0.0f && nota1 <= 10.0f;

    if (nota_valida == 0 || tentativa_scan == 0) {
        printf("Nota inválida! Digite valores entre 0.00 e 10.00\n");

        return 1;
    }

    printf("Digite a segunda nota: ");
    tentativa_scan = scanf("%f", &nota2);

    nota_valida = nota2 >= 0.0f && nota2 <= 10.0f;

    if (nota_valida == 0 || tentativa_scan == 0) {
        printf("Nota inválida! Digite valores entre 0.00 e 10.00\n");

        return 1;
    }

    p1 = nota1 * 0.4;
    p2 = nota2 * 0.6;

    nota_minima2 = (5.0f - p1)/0.6;

    printf("Nota mínima na segunda prova para ser aprovado: %.2f\n", nota_minima2);

    media = (p1 + p2);

    if (media >= 5.0f) {
        printf("Aprovado! Média: %.2f\n", media);

        return 0;
    } 
    
    printf("Reprovado! Média: %.2f\n", media);
    
    return 0;
}