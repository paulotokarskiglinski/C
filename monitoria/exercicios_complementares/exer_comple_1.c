#include <stdio.h>

void main() {

	int valor;

	printf("Digite um valor: ");
	scanf("%d", &valor);

	printf("Antecessor: %d\t Valor: %d\t Sucessor: %d\n\n", valor - 1, valor, valor + 1);

}
