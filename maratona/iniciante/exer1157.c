#include <stdio.h>

int main() {
	
	int n = 0, cont;

	scanf("%d", &n);

	for(cont = 1; cont <= n; cont++) {
		if((n % cont) == 0)
			printf("%d\n", cont);
	}	
	
	return 0;
}