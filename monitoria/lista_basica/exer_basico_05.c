#include <stdio.h>

void main(){

	float a, b;
	int c = 1;
	
	while (c != 0){
	
	printf("\n \n Digite um valor para saber seu quadrado: \n");
	scanf("%f", &a);
	
	b = a * a;
	
	printf("Numero entrado %f - seu quadrado %f", a, b);
	
	}

}