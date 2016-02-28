#include <stdio.h>

int main() {
	
	int v[10000], n, cont, menor = 10000, menorPos = 0;	

	scanf("%d", &n);

	for(cont = 0; cont < n; cont++) {
		scanf("%d", &v[cont]);
		if(v[cont] < menor) { 
			menor = v[cont];
			menorPos = cont;
		}
	}

	printf("Menor valor: %d\n", menor);
	printf("Posicao: %d\n", menorPos);

	return 0;
}