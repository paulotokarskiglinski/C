#include <stdio.h>

int main() {
	
	int l, c, linha;
	double matriz[12][12], soma = 0, media = 0;
	char op;

	scanf("%d", &linha);
	scanf(" %c", &op);

	for(l = 0; l < 12; l++) {
		for(c = 0; c < 12; c++)
			scanf("%lf", &matriz[l][c]);
	}
	
	switch(op) {
		case 'S': {
			for(c = 0; c < 12; c++)
				soma += matriz[linha][c];
			
			printf("%.1lf\n", soma);
			break;
		}

		case 'M': {
			for(c = 0; c < 12; c++)
				media += matriz[linha][c];
			
			printf("%.1lf\n", (media / 12.0));
			break;
		}
	}

	return 0;
}