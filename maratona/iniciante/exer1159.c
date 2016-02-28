#include <stdio.h>

int main() {
	
	int n = 0, i = 0, soma = 0;

	do {
		scanf("%d", &n);
		if(n != 0) {
			while(i < 5) {
				if((n % 2) == 0) {
					soma += n;
					i++;
					n++;
				} else {
					n++;
				}
			}
			printf("%d\n", soma);
			soma = 0;
			i = 0;
		}
	} while(n != 0);
	
	return 0;
}