#include <stdio.h>

int main() {

	int n, cont;

	scanf("%d", &n);

	for(cont = 1; cont <= n; cont++) {
		if((cont % 2) == 0)
			printf("%d^2 = %d\n", cont, (cont*cont));
	}

	return 0;
}