#include <stdio.h>

int main() {
	
	int n = 0, fatorial = 1, cont;

	scanf("%d", &n);

	for(cont = n; cont >= 1; cont--)
		fatorial *= cont;

	printf("%d\n", fatorial);
	
	return 0;
}