#include <stdio.h>

int main() {
	
	int n, op, cont, total, final = 1;

	scanf("%d", &n);
	do {
		scanf("%d", &op);
	} while(op <= n);

	total = n;
	for(cont = n; total < op; cont++) {
		total += cont;
		final++;
	}

	printf("%d\n", final);
	
	return 0;
}