#include <stdio.h>

int main() {
	
	int x = 0, y = 0, maior, menor, cont;

	scanf("%d %d", &x, &y);

	if(x > y) {
		maior = x;
		menor = y;
	} else if(y > x) {
		maior = y;
		menor = x;
	}

	for(cont = menor + 1; cont < maior; cont++) {
		if((cont % 5) == 2 || (cont % 5) == 3)
			printf("%d\n", cont);
	}

	return 0;
}