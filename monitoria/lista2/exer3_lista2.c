#include <stdio.h>

int main() {
	
	int dependentes;
	float rendaBrutaAnual, rendaLiquida, imposto;

	printf("Digite o numero de dependentes: ");
	scanf("%d", &dependentes);

	printf("Digite sua Renda Bruta Anual: ");
	scanf("%f", &rendaBrutaAnual);

	if(rendaBrutaAnual <= 10000)
		imposto = 0;
	else if(rendaBrutaAnual > 10000 && rendaBrutaAnual <= 30000)
		imposto = 0.05;
	else if(rendaBrutaAnual > 30000 && rendaBrutaAnual <= 60000)
		imposto = 0.10;
	else if(rendaBrutaAnual > 60000)
		imposto = 0.15;

	rendaLiquida = rendaBrutaAnual * imposto - (600 * dependentes);

	printf("\nO salario e' = R$%0.2f\n", rendaBrutaAnual/12);
	printf("O imposto sobre sua renda liquida e' de: R$%0.2f\n\n", rendaLiquida);
	
	return 0;
}