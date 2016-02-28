#include <stdio.h>

int main() {
	
	int idade = -1, cont = 0;	
	double media = 0.00;

	do {
		scanf("%d", &idade);
		if(idade > 0) {
			cont++;
			media += idade;
		}
	} while(idade > 0);

	printf("%.2lf\n", (media / cont));

	return 0;
}