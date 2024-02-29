#include <stdio.h>

int main() {
  float nota1 = 0.0;
  float nota2 = 0.0;

  printf("Digite a 1a nota: ");
  scanf("%f", &nota1);

  printf("Digite a 2a nota: ");
  scanf("%f", &nota2);

  while (nota1 > 10 | nota1<0 | nota2> 10 | nota2 < 0) {
    if (nota1 > 10 | nota1 < 0) {
      printf("Nota inválida. Digite a 1a nota: ");
      scanf("%f", &nota1);
    }

    if (nota2 > 10 | nota2 < 0) {
      printf("Nota inválida. Digite a 2a nota: ");
      scanf("%f", &nota2);
    }
  }

  float media = 0.4 * nota1 + 0.6 * nota2;

  printf("A media do aluno foi: %.1f", media);

  if (media >= 5.0) {
    printf("\nO aluno foi aprovado!");
  } else {
    printf("\nO aluno foi reprovado.");
  }

  return 0;
}