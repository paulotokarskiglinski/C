#include <stdio.h>

void main() {
	
	int num;

	printf("Digite um numero: ");
	scanf("%d", &num);

	if(num % 3 == 0 && num % 7 == 0)
		printf("\nNumero divisivel por 3 e por 7!\n\n");
	else
		printf("\nNumero nao divisivel por 3 e por 7!\n\n");
	
}
