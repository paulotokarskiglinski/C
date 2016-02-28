#include <stdio.h>

int main() {
	
	float c, f;

	printf("Digite a temperatura em Celsius: ");
	scanf("%f", &c);

	f = c * (9.0/5.0) + 32;

	printf("\nResultado da conversao: %f\n\n", f);

	return 0;
}