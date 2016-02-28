#include <stdio.h>

int main() {
	
	int v[10], cont, n;

	for(cont = 0; cont < 10; cont++) {
		scanf("%d", &v[cont]);
		if(v[cont] <= 0)
			v[cont] = 1;
	}

	for(cont = 0; cont < 10; cont++)
		printf("X[%d] = %d\n", cont, v[cont]);	
	
	return 0;
}