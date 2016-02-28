#include <stdio.h>

void main() {
	
	int num;

	printf("\nDigite um numero: ");
	scanf("%d", &num);

	num /= 100;
	
	if(num % 2 == 0)
		printf("\nPar!\n\n");
	else
		printf("\nImpar!\n\n");
	
}
