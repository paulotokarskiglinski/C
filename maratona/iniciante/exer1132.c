#include <stdio.h>

int main() {
	
	int x, y, cont, soma = 0;

	scanf("%d %d", &x, &y);

	if(y > x) {
		for(cont = x; cont <= y; cont++) {
			if((cont % 13) != 0)
				soma += cont;
		}
	} else {
		for(cont = y; cont <= x; cont++) {
			if((cont % 13) != 0)
				soma += cont;
		}
	}

	printf("%d\n", soma);

	return 0;
}