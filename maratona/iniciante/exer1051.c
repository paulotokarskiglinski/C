#include <stdio.h>

int main() {
	
	double salario;

	scanf("%lf", &salario);

	if(salario >= 0.00 && salario <= 2000.00) {
		printf("Insento\n");
		return 0;
	} else if(salario >= 2000.01 && salario <= 3000.00)
		salario = salario * 0.08;
	else if(salario >= 3000.01 && salario <= 4500.00)
		salario = salario * 0.18;
	else if(salario > 4500.00)
		salario = salario * 0.28;	
	
	printf("R$ %.2lf\n", salario);

	return 0;
}