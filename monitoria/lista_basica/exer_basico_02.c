#include <stdio.h>

void main(){

	float a, b, c;
	
	printf("Digite 3 valores: \n");
	scanf("%f %f %f", &a, &b, &c);
	
	a *= b * c;
	
	printf("Resultado: %f", a);

}