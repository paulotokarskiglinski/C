#include <stdio.h>

int main() {
	
	int v[1000], cont, n = 3, i = 0;

	scanf("%d", &n);

	for(cont = 0; cont < 1000; cont++) {
		v[cont] = i;
		i++;

		printf("N[%d] = %d\n", cont, v[cont]);
		if(i == n)
			i = 0;
	}

	return 0;
}