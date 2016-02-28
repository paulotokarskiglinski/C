#include <stdio.h>
#include <string.h>

int main() {
	
	int m = 0, n = 0, cont, maior, menor, soma = 0;
	char rs[100];
	do {
		scanf("%d %d", &m, &n);

		if(m > n) {
			maior = m;
			menor = n;
		} else {
			maior = n;
			menor = m;
		}

		if(m > 0 && n > 0) {
			for(cont = menor; cont <= maior; cont++) {
				printf("%d ", cont);
				soma += cont;
			}
			printf("Sum=%d\n", soma);
			soma = 0;
		}
	} while(m > 0 && n > 0);
	
	return 0;
}