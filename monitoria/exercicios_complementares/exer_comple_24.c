#include <stdio.h>

void main () {

	int tamanho, l, c;

	printf("Isira o tamanho do triangulo: \n");
	scanf("%i", &tamanho);

	for (l = 0; l < tamanho; l++) {
		printf("\n");
		for (c = 0; c <= l; c++) {
		    printf("#");
		}
	}
}
