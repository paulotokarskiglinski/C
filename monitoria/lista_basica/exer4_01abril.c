#include <stdio.h>
#include <math.h>

void main() {
	
	int num;
	float res;

	printf("Digite um numero: ");
	scanf("%d", &num);

	if(num >= 0)
		res = sqrt(num);
	else
		res = pow(2, num);

	printf("\nResultado: %d\n\n", res);
	
}
