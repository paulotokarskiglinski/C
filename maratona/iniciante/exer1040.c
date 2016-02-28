#include <stdio.h>

int main() {

	double n1, n2, n3, n4, nExame, media;

	scanf("%lf %lf %lf %lf", &n1, &n2, &n3, &n4);

	media = (n1*2 + n2*3 + n3*4 + n4*1) / 10;

	printf("Media: %.1lf\n", media);

	if(media >= 7.0)
		printf("Aluno aprovado.\n");
	else if(media < 5.0)
		printf("Aluno reprovado.\n");
	else if(media >= 5.0 && media <= 6.9) {
		printf("Aluno em exame.\n");
		scanf("%lf", &nExame);
		printf("Nota do exame: %.1lf\n", nExame);

		media = (media + nExame) / 2;

		if(media >= 5.0)
			printf("Aluno aprovado.\n");
		else if(media <= 4.9)
			printf("Aluno reprovado.\n");

		printf("Media final: %.1lf\n", media);
	}

	return 0;
}