#include <stdio.h>

int main() {
	
	int par[5], impar[5], cont, n, nPar = 0, nImpar = 0, i;

	for(cont = 0; cont < 15; cont++) {
		scanf("%d", &n);

		if((n % 2) == 0) {
			par[nPar] = n;
			nPar++;
		} else {
			impar[nImpar] = n;
			nImpar++;
		}

		if(nPar == 5) {
			for(i = 0; i < 5; i++) {
				printf("par[%d] = %d\n", i, par[i]);
				par[i] = 0;
			}
			nPar = 0;
		}

		if(nImpar == 5) {
			for(i = 0; i < 5; i++) {
				printf("impar[%d] = %d\n", i, impar[i]);
				impar[i] = 0;
			}
			nImpar = 0;
		}
	}

	for(cont = 0; cont < nImpar; cont++)
		printf("impar[%d] = %d\n", cont, impar[cont]);

	for(cont = 0; cont < nPar; cont++)
		printf("par[%d] = %d\n", cont, par[cont]);

	return 0;
}