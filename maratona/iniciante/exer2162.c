#include <stdio.h>

int main() {
	
	int n, op, cont, aux, maior, menor, ok = 1;	
	
	scanf("%d", &op);
	for(cont = 0; cont < op; cont++) {
		scanf("%d", &n);
		if(cont > 0) {

			if(cont == 1) {
				if(n > aux) {
					menor = 1;
					maior = 0;
				} else {
					menor = 0;
					maior = 1;
				}
			}
			if(aux > n && maior == 1) {
				menor = 1;
				maior = 0;
			} else if(aux < n && menor == 1) {
				menor = 0;
				maior = 1;
			} else
				ok = 0;
			aux = n;
		} else
			aux = n;
	}
	printf("%d\n", ok);
	return 0;
}