#include <stdio.h>

int main() {

	int v[5], cont, pares = 0, impares = 0, pos = 0, neg = 0;

	scanf("%d %d %d %d %d", &v[0], &v[1], &v[2], &v[3], &v[4]);

	for(cont = 0; cont < 5; cont++) {
		if(v[cont] > 0) { pos++; }
		if(v[cont] < 0) { neg++; }
		if((v[cont] % 2) == 0) { pares++; }
		if((v[cont] % 2) != 0) { impares++; }
	}

	printf("%d valor(es) par(es)\n", pares);
	printf("%d valor(es) impar(es)\n", impares);
	printf("%d valor(es) positivo(s)\n", pos);
	printf("%d valor(es) negativo(s)\n", neg);

	return 0;
}