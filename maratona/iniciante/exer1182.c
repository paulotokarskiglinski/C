#include <stdio.h>

int main() {
	
	int l, c, coluna;
	double matriz[12][12], soma = 0, media = 0;
	char op;

	scanf("%d", &coluna);
	scanf(" %c", &op);

	for(l = 0; l < 12; l++) {
		for(c = 0; c < 12; c++)
			scanf("%lf", &matriz[l][c]);
	}
	
	switch(op) {
		case 'S': {
			for(l = 0; l < 12; l++)
				soma += matriz[l][coluna];
			
			printf("%.1lf\n", soma);
			break;
		}

		case 'M': {
			for(l = 0; l < 12; l++)
				media += matriz[l][coluna];
			
			printf("%.1lf\n", (media / 12.0));
			break;
		}
	}	
	
	return 0;
}