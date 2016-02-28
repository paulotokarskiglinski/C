#include <stdio.h>

int cont = 1;

void main(){

int a, b, menu;

	do {
	printf("Escolha uma opicao: \n");
	printf("1 - Soma \n");
	printf("2 - Subtracao \n");
	printf("3 - Divisao \n");
	printf("4 - Multiplicacao \n");
	scanf("%i", &menu);
	printf("Digite os 2 valores \n");
	scanf("%i %i", &a, &b);
	
	
	
	switch (menu){
	
		case 1:{
		
			a = a + b;
			break;
		}
		
		case 2:{
		
			a = a - b;
			break;
		}
		
		case 3:{
		
			a = a / b;
			break;
		}
		
		case 4:{
		
			a = a * b;
			break;
	
	} while(cont == 1);
	
	printf("Resultado= %i", a);
	
	}
}
}