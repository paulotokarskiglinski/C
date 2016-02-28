#include <stdio.h>

int main() {

	int x, cont;

	scanf("%d", &x);

	for(cont = 1; cont <= x; cont++) {
		if((cont % 2) != 0)
			printf("%d\n", cont);
	}

	return 0;
}