#include <stdio.h>

void main() {

	float c, f;
	
	printf("Digite a temperatura em Fahrenheit: ");
	scanf("%f", &f);
	
	c = 5 * (f - 32) / 9;
	
	printf("Resultado da conversao para Celsius: %f", c);

}
