#include <stdio.h>

int main() {
	
	int n = 0, v = 0, cont;
	double fibonacci[61];
	
	scanf("%d", &n);

	fibonacci[0] = 0;
	fibonacci[1] = 1;
	for(cont = 2; cont < 61; cont++)
		fibonacci[cont] = fibonacci[cont - 1] + fibonacci[cont - 2];

	for(cont = 0; cont < n; cont++) {
		scanf("%d", &v);
		printf("Fib(%d) = %.0lf\n", v, fibonacci[v]);
	}

	return 0;
}