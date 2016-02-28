#include <stdio.h>

int main() {
	
	int cont, aprovados = 0, exame = 0, reprovados = 0;
	float n1, n2, n3, media = 0;

	for(cont = 0; cont < 6; cont++) {
		printf("Digite as 3 notas do %d* aluno: ", cont+1);
		scanf("%f %f %f", &n1, &n2, &n3);
		
		media = (n1 + n2 + n3) / 3;

		if(media >= 7)
			aprovados++;
		if(media >= 1.7 && media < 7)
			exame++;
		if(media < 1.7)
			reprovados++;

	}

	printf("\nAlunos aprovados: %d\nAlunos em exame: %d\nAlunos reprovados: %d\n\n", aprovados, exame, reprovados);

	return 0;
}