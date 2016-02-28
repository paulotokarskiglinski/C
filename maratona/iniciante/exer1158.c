#include <stdio.h>

int main() {
	
	int n = 0, x = 0, y = 0, i = 0, cont, soma = 0;	
	
	scanf("%d", &n);

	for(cont = 0; cont < n; cont++) {
		scanf("%d %d", &x, &y);
		
		while(i < y) {
			if((x % 2) != 0) {
				soma += x;
				i++;
				x++;
			} else {
				x++;
			}
		}
		
		printf("%d\n", soma);
		soma = 0;
		i = 0;
	}

	return 0;
}