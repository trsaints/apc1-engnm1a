// 5. Faça um programa em C que converta um valor qualquer em Gigabytes para um valor em bytes (1GB = 1024³Bytes).

#include <stdio.h>
#include <math.h>

int main() {
    const int bytes_em_um_gigabyte = pow(1024, 3);
    long int gigabytes_inseridos, conversao_em_bytes;

    printf("Digite a quantidade de Gigabytes: ");
    scanf("%li", &gigabytes_inseridos);

    while (gigabytes_inseridos < 0) {
        printf("Digite um valor positivo: ");
        scanf("%li", &gigabytes_inseridos);
    }

    conversao_em_bytes = gigabytes_inseridos * bytes_em_um_gigabyte ;

    printf("\t%li GB = %li bytes\n", gigabytes_inseridos, conversao_em_bytes);

    return 0;
}