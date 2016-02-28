#include <stdio.h>

int main() {

	int v[5], cont, pares = 0;

	scanf("%d %d %d %d %d", &v[0], &v[1], &v[2], &v[3], &v[4]);

	for(cont = 0; cont < 5; cont++) {
		if((v[cont] % 2) == 0)
			pares++;
	}

	printf("%d valores pares\n", pares);

	return 0;
}