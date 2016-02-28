#include <stdio.h>

int main() {
	
	int a, n, cont, soma = 0;

	scanf("%d", &a);

	while(n <= 0)
		scanf("%d", &n);

	for(cont = a; cont < (n + a); cont++)
		soma += cont;

	printf("%d\n", soma);
	
	return 0;
}