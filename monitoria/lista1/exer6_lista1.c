#include <stdio.h>

int main() {
	
	float n1, n2, n3, n4, media;
	char nome[20];

	printf("Digite o nome do aluno: ");
	fgets(nome, 20, stdin);

	printf("Digite as 4(quatro) notas do aluno: ");
	scanf("%f" "%f" "%f" "%f", &n1, &n2, &n3, &n4);

	media = (n1 + n2 + n3 + n4) / 4;

	printf("\nAluno: %s\n", nome);
	printf("Nota 1: %0.2f | Nota 2: %0.2f | Nota 3: %0.2f | Nota 4: %0.2f\n", n1, n2, n3, n4);
	printf("\nMedia: %0.2f\n\n", media);

	return 0;
}