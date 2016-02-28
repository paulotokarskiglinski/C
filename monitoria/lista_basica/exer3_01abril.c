#include <stdio.h>

void main() {
	
	int n1, n2, soma;

	printf("Digite o primeiro numero: ");
	scanf("%d", &n1);

	printf("Digite o segundo numero: ");
	scanf("%d", &n2);

	soma = n1 + n2;

	if(soma > 20)
		printf("\nResultado: %d\n\n", soma - 5);
	
}
