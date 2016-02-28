#include <stdio.h>

void main () {

	int tamanho, l, c;

	printf("Digite o tamanho do quadrado: \n");
	scanf("%i", &tamanho);

	for (l = 0; l < tamanho; l++ ) {
		printf("\n");
		for (c = 0; c < tamanho; c++) {
		    printf(" Q ");
		}
	}
}
