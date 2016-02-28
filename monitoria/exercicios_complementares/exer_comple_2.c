#include <stdio.h>

void main() {

	float c, f;

	printf("Digite a temperatura em Celsius: ");
	scanf("%f", &c);

	f = c * (9.0/5.0) + 32;

	printf("Resultad da conversao: %f", f);

}
