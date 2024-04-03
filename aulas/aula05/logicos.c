#include <stdio.h>

int main() {
	int n1;
	
	printf("Digite um número: ");
	scanf("%i", &n1);
	
	int maior_e_menor_que = n1 > 0 && n1 < 10;
	
	printf("0 < %i < 10 ? %i\n", n1, maior_e_menor_que);

	int maior_ou_menor_que = n1 < 0 || n1 > 10;
	printf("%i < 0 | %i > 10 ? %i\n", n1, n1, maior_ou_menor_que);

	int nao_menor_que_0 = !(numero < 0);
	printf("!(%i i < 0 ? %i)\n", n1, nao_menor_que_0);	
	
	return 0;
}