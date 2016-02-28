#include <stdio.h>

int main() {

	int num, cont, negativos = 0;

	printf("Digite 5 numeros: ");

	for(cont = 0; cont < 5; cont++) {
		scanf("%d", &num);
		if(num < 0)
			negativos++;
	}

	printf("\nForam digitados %d numeros negativos.\n\n", negativos);
	
	return 0;
}