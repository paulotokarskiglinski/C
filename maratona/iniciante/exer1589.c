#include <stdio.h>

int main() {
	
	int qtd, cont, r1, r2;

	scanf("%d", &qtd);

	for(cont = 0; cont < qtd; cont++) {
		scanf("%d %d", &r1, &r2);
		printf("%d\n", r1 + r2);
	}
	
	return 0;
}