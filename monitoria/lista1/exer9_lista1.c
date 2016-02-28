#include <stdio.h>

float pi = 3.1416;

int main() {
	
	float raio;

	printf("Digite o valor do raio: ");
	scanf("%f", &raio);

	printf("\nArea do circulo: %f\n\n", pi * (raio*raio));

	return 0;
}