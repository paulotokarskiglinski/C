#include <stdio.h>

int main() {
	
	char nome[20];
	
	printf("Digite seu nome: ");
	fgets(nome, 20, stdin);

	printf("\n%s\n", nome);

	return 0;
}