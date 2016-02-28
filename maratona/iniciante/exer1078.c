#include <stdio.h>

int main() {

	int n, cont;

	scanf("%d", &n);

	for(cont = 1; cont <= 10; cont++)
		printf("%d x %d = %d \n", cont, n, (cont * n));
	
	return 0;
}