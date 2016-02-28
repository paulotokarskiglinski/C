#include <stdio.h>

int main() {
	
	int n = 0, cont = 0;

	scanf("%d", &n);

	while(n != 0) {
		for(cont = 1; cont <= n; cont++) {
			if(cont == n) printf("%d\n", cont);
			else printf("%d ", cont);
		}
	}	

	return 0;
}