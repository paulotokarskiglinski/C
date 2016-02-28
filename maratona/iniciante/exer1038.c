#include <stdio.h>

int main() {

	int prod, qtd;
	double total;

	scanf("%d %d", &prod, &qtd);

	switch(prod) {
		case 1: { total = 4.00 * qtd; break; }
		case 2: { total = 4.50 * qtd; break; }
		case 3: { total = 5.00 * qtd; break; }
		case 4: { total = 2.00 * qtd; break; }
		case 5: { total = 1.50 * qtd; break; }
	}

	printf("Total: R$ %0.2lf\n", total);

	return 0;
}