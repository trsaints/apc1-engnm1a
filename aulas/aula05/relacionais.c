#include <stdio.h>

int main () {
	int primeiro_numero,
	segundo_numero;

	printf("Entre com o primeiro número: ");
	int status_scan = scanf("%i", &primeiro_numero);

	printf("Entre com o segundo número: ");
	status_scan = scanf("%i", &segundo_numero);

	int sao_iguais = primeiro_numero == segundo_numero;
	printf("%i = %i ? %i\n", primeiro_numero, segundo_numero, sao_iguais);

	int sao_diferentes = primeiro_numero != segundo_numero;
	printf("%i != %i ? %i\n", primeiro_numero, segundo_numero, sao_diferentes);

	int maior_que = primeiro_numero > segundo_numero;
	printf("%i > %i ? %i\n", primeiro_numero, segundo_numero, maior_que);
	
	int menor_que = primeiro_numero < segundo_numero;
	printf("%i < %i ? %i\n", primeiro_numero, segundo_numero, menor_que);

	int maior_ou_igual = primeiro_numero >= segundo_numero;
	printf("%i >= %i ? %i\n", primeiro_numero, segundo_numero, maior_ou_igual);

	int menor_ou_igual = primeiro_numero <= segundo_numero;
	printf("%i <= %i ? %i\n", primeiro_numero, segundo_numero, menor_ou_igual);

	return 0;
}
