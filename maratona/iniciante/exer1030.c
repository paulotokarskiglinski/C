#include <stdio.h>

int main() {
	
	int qtd = 0, q, p[1001], cont, n, k, pular = 0, vivos = 0;

	scanf("%d", &qtd);

	for(q = 0; q < qtd; q++) {
		scanf("%d %d", &n, &k);

		for(cont = 0; cont < n; cont++)
			p[cont] = cont + 1;

		vivos = n;
		
		//while(vivos > 1) {
			for(cont = k - 1; cont < n; cont += k) {
				while(p[cont] == 0 && p[cont] < n) {
					cont++;
					pular++;
					if(pular == k)
						pular = 0;
				}

				if(p[cont] != 0)
					p[cont] = 0;
				if(cont < n)
					cont = pular;
			}
		//}

		for(cont = 0; cont < n; cont++)
			printf("%d ", p[cont]);

	}
	
	printf("\nVivos: %d\n", vivos);

	return 0;
}