#include <stdio.h>

void main() {
	
	int num;

	printf("\nDigite um numero: ");
	scanf("%d", &num);

	if(num % 3 == 0)
		printf("\nO numero digitado, %d e multiplo de 3\n\n", num);
	else
		printf("\nO numero nao e multiplo de 3!\n");

}
