#include <stdio.h>

int main() {
	
	float valorDiaria = 300, diarias, taxa;

	printf("Digite o numero de diarias: ");
	scanf("%f", &diarias);

	if(diarias < 15)
		taxa = 20;
	else if(diarias == 15)
		taxa = 14;
	else if(diarias > 15)
		taxa = 12;

	printf("\nO total a pagar por diaria e' de: R$%0.2f\n\n", valorDiaria + taxa);

	return 0;
}