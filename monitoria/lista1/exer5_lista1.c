#include <stdio.h>

int main() {
	
	int idade;
	char nome[20], sobrenome[20];

	printf("Digite seu primeiro nome: ");
	fgets(nome, 20, stdin);

	printf("Digite seu sobrenome: ");
	fgets(sobrenome, 20, stdin);

	printf("Digite sua idade: ");
	scanf("%d", &idade);

	printf("\nNome completo: %s %s Idade: %d\n", nome, sobrenome, idade);

	return 0;
}