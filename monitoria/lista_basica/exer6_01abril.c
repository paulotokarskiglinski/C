#include <stdio.h>

void main() {
	
	int num;

	printf("Digite um numero: ");
	scanf("%d", &num);

	if(num % 5 == 0)
		printf("\nNumero divisivel por 5!\n");
	else
		printf("\nNumero nao divisivel por 5!\n");
	
}
