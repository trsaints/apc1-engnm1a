#include <stdio.h>

int main() {
    int opcao;

    printf("1 - Consultar Saldo\n");
    printf("2 - Recarregar\n");
    printf("3 - Listar Recados\n");
    printf("4 - Ligações feitas\n");

    printf("Digite a opção desejada: ");
    int tentativa_scan = scanf("%d", &opcao);

    switch (opcao) {
        case 1:
            printf("Seu saldo é: R$10,99\n");
            
            break;
                        
        case 2:
            printf("Recarga de saldo...");
            float valor;

            printf("Digite o valor a recarregar: ");
            tentativa_scan = scanf("%f", &valor);

            if (valor <= 0)
                printf("Operação cancelada. Valor inválido foi inserido: R$%f", valor);
            else
                printf("Recarga realizada com sucesso! Seu saldo é: R$%f\n", 10.99 + valor);

            break;
            
        case 3:
            printf("Não há novos recados\n");
            
            break;

        case 4:
            printf("telefone\t\tdata: \n");
            printf("(11) 4002-9822\t\t12/12/2010\n");
            
            printf("telefone\t\tdata: \n");
            printf("(11) 4002-9822\t\t12/12/2010\n");
            
            printf("telefone\t\tdata: \n");
            printf("(11) 4002-9822\t\t12/12/2010\n");
            
            printf("telefone\t\tdata: \n");
            printf("(11) 4002-9822\t\t12/12/2010\n");
            
            break;

        default:
            printf("Saindo...\n");
            
            break;

    }
}