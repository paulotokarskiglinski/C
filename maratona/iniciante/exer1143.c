#include <stdio.h>

int main() {
	
	int n = 0, cont;	

	scanf("%d", &n);

	for(cont = 1; cont <= n; cont++)
		printf("%d %d %d\n", cont, (cont*cont), (cont*cont*cont));

	return 0;
}