#include <stdio.h>
#include <stdlib.h>

int main()
{
    int opcao_menu, entrada_correta;
    char nome_jogador[32];

    while (opcao_menu != 4)
    {
        entrada_correta = system("clear");
        printf("O que deseja fazer? Selecione uma das opções abaixo\n");
        printf("Opção\t-\tAção\n");
        printf("1\t-\tIniciar\n");
        printf("2\t-\tVer Ranking\n");
        printf("3\t-\tAjuda\n");
        printf("4\t-\tSair\n");

        entrada_correta = scanf("%d", &opcao_menu);

        while (getchar() != '\n')
            ;

        if (!entrada_correta)
            return 1;

        switch (opcao_menu)
        {
        case 1:
        {
            printf("Qual é o seu nome? Limite: 32 caracteres. \nSeu nome:");
            entrada_correta = scanf("%[^\n]s", nome_jogador);

            getchar();
            break;
        }

        case 2:
        {
            getchar();
            break;
        }
        case 3:

            break;

        case 4:
            printf("Ciao!\n");

            break;

        default:
            printf("Opção inválida. Pressione ENTER para continuar.\n");
            getchar();

            break;
        }
    }

    return 0;
}