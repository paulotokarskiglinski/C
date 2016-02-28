#include <stdio.h>

int main() {
	
	int x = 0, i, y = 0, linha = 0, cont, soma = 1;

	scanf("%d %d", &x, &y);

	while(soma <= y) {
		for(i = 0; i < x; i++) {
			if(i == (x - 1)) printf("%d", soma++);
			else printf("%d ", soma++);
		}
		printf("\n");
	}

	return 0;
}