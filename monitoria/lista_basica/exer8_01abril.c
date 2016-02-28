#include <stdio.h>

void main() {
	
	int num;

	printf("Digite um numero: ");
	scanf("%d", &num);

	if(num % 2 == 0 && num % 5 == 0 && num % 10 == 0)
		printf("\nNumero divisivel por 2, 5 e 10!\n\n");
	else
		printf("\nNumero nao divisivel por 2, 5 e 10!\n\n");	
}
