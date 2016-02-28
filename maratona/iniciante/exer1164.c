#include <stdio.h>

int main() {
	
	int n = 0, v, i, cont, soma = 0;

	scanf("%d", &n);

	for(cont = 0; cont < n; cont++) {
		scanf("%d", &v);
		for(i = 1; i < v; i++) {
			if((v % i) == 0)
				soma += i;
		}

		if(soma == v)
			printf("%d eh perfeito\n", v);
		else
			printf("%d nao eh perfeito\n", v);

		soma = 0;
	}	
	
	return 0;
}