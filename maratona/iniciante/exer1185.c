#include <stdio.h>

int main() {
	
	int l, c, n = 0;
	double matriz[12][12], soma = 0, media = 0;
	char op;

	scanf("%c", &op);
	for(l = 0; l < 12; l++)
		for(c = 0; c < 12; c++)
			scanf("%lf", &matriz[l][c]);

	switch(op) {
		case 'S': {
			for(l = 0; l < 12; l++)
				for(c = 0; c < 12; c++)
					if((l + c) < 11)
						soma += matriz[l][c];

			printf("%.1lf\n", soma);
			break;
		}
		case 'M': {
			for(l = 0; l < 12; l++)
				for(c = 0; c < 12; c++)
					if((l + c) < 11) {
						media += matriz[l][c];
						n++;
					}

			printf("%.1lf\n", media / n);
			break;
		}
	}
	
	return 0;
}