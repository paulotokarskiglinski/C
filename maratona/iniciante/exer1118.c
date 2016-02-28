#include <stdio.h>

void calcularMedia() {
	double nota, media = 0;
	int n = 0;

	while(n < 2) {
		scanf("%lf", &nota);

		if(nota >= 0.00 && nota <= 10.00) {
			media += nota;
			n++;
		} else
			printf("nota invalida\n");
	}
	media /= 2.00;
	printf("media = %.2lf\n", media);

}

int main() {
	
	int op = 1;

	while(op != 2) {
		if(op == 1)
			calcularMedia();

		printf("novo calculo (1-sim 2-nao)\n");
		scanf("%d", &op);
	}

	return 0;
}