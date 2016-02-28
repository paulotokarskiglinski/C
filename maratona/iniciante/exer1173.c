#include <stdio.h>

int main() {
	
	int v[10], n, cont;

	scanf("%d", &n);

	v[0] = n;
	for(cont = 1; cont < 10; cont++)
		v[cont] = v[cont - 1] * 2;

	for(cont = 0; cont < 10; cont++)
		printf("N[%d] = %d\n", cont, v[cont]);
	
	return 0;
}