#include <stdio.h>

int main() {
    int tabuada_selecionada;

    printf("Deseja calcular a tabuada até qual número (1-10)?");
    int tentativa_scanf = scanf("%d", &tabuada_selecionada);

    if (tabuada_selecionada < 0 || tabuada_selecionada > 10)
        return 1;

    for (int i = 1; i <= 100; i++)
        printf("%d * %d = %d\n", i, tabuada_selecionada, i * tabuada_selecionada);
    
}