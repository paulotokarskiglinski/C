#include <stdio.h>

int main() {
	
	int matriz[100][100], l, c, t;

	while(scanf("%d", &t) != EOF) {

		for(l = 0; l < t; l++) {
			for(c = 0; c < t; c++) {
				if(l == c) matriz[l][c] = 1;
				else matriz[l][c] = 3;
			}
		}

		for(l = 0, c = t - 1; l < t; l++, c--)
			matriz[l][c] = 2;
		
		for(l = 0; l < t; l++) {
			for(c = 0; c < t; c++)
				printf("%d", matriz[l][c]);
			printf("\n");
		}
	}

	return 0;
}