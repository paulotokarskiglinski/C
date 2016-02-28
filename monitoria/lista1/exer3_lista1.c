#include <stdio.h>

int main() {
	
	int idade;
	char nome[20];

	printf("Digite seu nome: ");
	fgets(nome, 20, stdin);

	printf("Digite sua idade: ");
	scanf("%d", &idade);

	printf("\nNome: %s\nIdade: %d\n", nome, idade);

	return 0;
}