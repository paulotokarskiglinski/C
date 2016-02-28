#include <stdio.h>

int main() {
	
	int matriz[101][101], l, c, tamanho = 0, aux, auxn;

	do {
		scanf("%d", &tamanho);
		aux = 1;
		auxn = 2;
		if(tamanho > 0) {

			for(l = 0; l < tamanho; l++) {
				for(c = 0; c < tamanho; c++) {
					if(c == 0) {
						matriz[l][c] = aux;
						aux++;
					} else {
						matriz[l][c] = auxn;
						auxn++;
					}
				}
				if(aux > 1)
					auxn = aux - 1;
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