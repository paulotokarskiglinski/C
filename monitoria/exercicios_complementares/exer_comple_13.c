#include <stdio.h>

void main() {

	int op;
	float area, base, altura, raio;

	printf("Escolha uma opcao: \n\n");
	printf("1-Area do quadrado\n2-Area do circulo\n3-Area do triangulo\n");

	scanf("%d", &op);

	if(op == 1) {
		printf("Digite o valor da base: ");
		scanf("%f", &base);
		printf("Digite o valor da altura: ");
		scanf("%f", &altura);

		area = base * altura;

		printf("\nArea do quadrado: %f\n", area);

	} else if(op == 2) {
		printf("Dite o raio do circulo: ");
		scanf("%f", &raio);

		area = 3.14 * (raio * raio);

		printf("\nArea do circulo: %f\n", area);

	} else if(op == 3) {
		printf("Digite o valor da base: ");
		scanf("%f", &base);
		printf("Digite o valor da altura: ");
		scanf("%f", &altura);

		area = (base * altura) / 2;

		printf("\nArea do triangulo: %f\n", area);
	} else {
		printf("\nValor nulo!\n");
	}

}
