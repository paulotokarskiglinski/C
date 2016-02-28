#include <stdio.h>

int main() {

	int n, v, cont;
	double qtd = 0.0, qtdR = 0.0, qtdS = 0.0, qtdC = 0.0, pR = 0.0, pS = 0.0, pC = 0.0;
	char animal;

	scanf("%d", &n);

	for(cont = 0; cont < n; cont++) {
		scanf("%d %c", &v, &animal);
		qtd += v;
		if(animal == 'R')	qtdR += v;
		if(animal == 'S')	qtdS += v;
		if(animal == 'C')	qtdC += v;
	}

	pR = (qtdR / qtd) * 100.00;
	pS = (qtdS / qtd) * 100.00;
	pC = (qtdC / qtd) * 100.00;

	printf("Total: %.0lf cobaias\n", qtd);
	printf("Total de coelhos: %.0lf\n", qtdC);
	printf("Total de ratos: %.0lf\n", qtdR);
	printf("Total de sapos: %.0lf\n", qtdS);
	printf("Percentual de coelhos: %.2lf %%\n", pC);
	printf("Percentual de ratos: %.2lf %%\n", pR);
	printf("Percentual de sapos: %.2lf %%\n", pS);

	return 0;
}