#include <stdio.h>

int main() {
	
	float preco;

	printf("Digite o preco do produto (R$): ");
	scanf("%f", &preco);

	preco = (preco - (preco * 0.10));

	printf("\nPreco com 10%% de desconto do produto: R$%0.2f\n\n", preco);

	return 0;
}