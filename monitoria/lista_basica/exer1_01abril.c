#include <stdio.h>

void main() {

	int num;

	printf("\nDigite um numero: ");
	scanf("%d", &num);
	if(num > 20)
		printf("Numero maior que 20: %d\n\n", num);

}