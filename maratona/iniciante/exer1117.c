#include <stdio.h>

int main() {
	
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
	
	printf("media = %.2lf\n", (media / 2));

	return 0;
}