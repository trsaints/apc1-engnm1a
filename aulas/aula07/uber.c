#include <stdio.h>

int main() {
    int avaliacao;

    printf("Avalie o motorista entre 1 e 5 estrelas: ");
    int tentativa_scan = scanf("%i", &avaliacao);

    // if (avaliacao < 1 || avaliacao > 5 || tentativa_scan != 1) {
    //     printf("Avaliação inválida! Digite somente valores entre 1 e 5\n");

    //     return 1;
    // }

    char mensagem[] = "Obrigado por avaliar o motorista com %i estrelas!\n";

    switch (avaliacao) {
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
            printf(mensagem, avaliacao);
            break;
        default:
            printf("Avaliação inválida! Digite somente valores entre 1 e 5\n");

            return 1;
    }



    return 0;
}