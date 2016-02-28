#include <stdio.h>

int main() {
	
	int matriz[101][101], l, c, tamanho = 0, aux = 2, t = 0, ll, cc;

	do {
		scanf("%d", &tamanho);
		aux = 2;
		if(tamanho > 0) {
			for(l = 0; l < tamanho; l++)
				for(c = 0; c < tamanho; c++)
					matriz[l][c] = 1;

			if(tamanho > 2) {
				t = tamanho; ll = 1; cc = 1;
				while(t > 0) {
					for(l = ll; l < t - 1; l++) {
						for(c = cc; c < t - 1; c++)
							matriz[l][c] = aux;
					}
					t--; aux++; ll++;cc++;
				}
			}

			for(l = 0; l < tamanho; l++) {
				for(c = 0; c < tamanho; c++) {
					printf("%3d", matriz[l][c]);
					if(c < tamanho - 1)
						printf(" ");
				}
				printf("\n");
			}
			printf("\n");
		}

	} while(tamanho > 0);

	return 0;
}