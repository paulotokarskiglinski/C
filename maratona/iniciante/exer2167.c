#include <stdio.h>

int main() {
	
	int n, aux, op, cont, ok = 0;	
	
	scanf("%d", &op);
	for(cont = 1; cont <= op; cont++) {
		scanf("%d", &n);
		if(cont > 1) {
			if(n < aux) {
				ok = cont;
				break;
			}
			aux = n;
		} else
			aux = n;
	}
	printf("%d\n", ok);
	return 0;
}