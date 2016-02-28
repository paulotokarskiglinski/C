#include <stdio.h>

void main(){

	float a, b;
	
	printf("Insira os valores: \n");
	scanf("%f %f", &a, &b);
	
	a -=b;
	
	printf("Resultado: %f", a);


}