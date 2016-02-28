#include <stdio.h>

int main() {
	
	int cont;
	float num, maior = -999, menor = 999;

	for(cont = 0; cont < 5; cont++) {
		printf("Digite um numero: ");
		scanf("%f", &num);

		if(num >= maior)
			maior = num;
		if(num <= menor)
			menor = num;
	}

	printf("\n\nMaior numero digitado: %0.2f\nMenor numero digitado: %0.2f\n\n", maior, menor);

	return 0;
}